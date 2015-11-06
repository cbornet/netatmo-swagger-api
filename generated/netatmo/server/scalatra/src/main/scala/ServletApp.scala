package io.swagger.app

import _root_.akka.actor.ActorSystem

import org.scalatra.swagger.{ ApiInfo, SwaggerWithAuth, Swagger }
import org.scalatra.swagger.{JacksonSwaggerBase, Swagger}
import org.scalatra.ScalatraServlet
import org.json4s.{DefaultFormats, Formats}

class ResourcesApp(implicit protected val system: ActorSystem, val swagger: SwaggerApp)
  extends ScalatraServlet with JacksonSwaggerBase {
  before() {
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }

  protected def buildFullUrl(path: String) = if (path.startsWith("http")) path else {
   val port = request.getServerPort
   val h = request.getServerName
   val prot = if (port == 443) "https" else "http"
   val (proto, host) = if (port != 80 && port != 443) ("http", h+":"+port.toString) else (prot, h)
   "%s://%s%s%s".format(
     proto,
     host,
     request.getContextPath,
     path)
  }
}

class SwaggerApp extends Swagger(apiInfo = ApiSwagger.apiInfo, apiVersion = "1.0", swaggerVersion = "1.2")

object ApiSwagger {
  val apiInfo = ApiInfo(
    """Netatmo""",
    """<h3>Welcome to the Netatmo swagger on-line documentation !</h3>This site is a complement to the official <a href=\"https://dev.netatmo.com/\">Netatmo developper documentation</a> using swagger to bring interactivity and easy testing of requests with the \"try it\" button (authenticate with the authorization code 0Auth2 flow by clicking the authenticate button in the methods). You can find the source code for this site can be found in the project <a href=\"https://github.com/cbornet/netatmo-swagger-ui\">netatmo-swagger-ui</a>. You can also use the online <a href=\"./swagger.json\">swagger declaration</a> file to generate code or static documentation (see <a href=\"https://github.com/cbornet/netatmo-swagger-api\">netatmo-swagger-api</a>).""",
    """http://swagger.io""",
    """apiteam@swagger.io""",
    """All rights reserved""",
    """http://apache.org/licenses/LICENSE-2.0.html""")
}