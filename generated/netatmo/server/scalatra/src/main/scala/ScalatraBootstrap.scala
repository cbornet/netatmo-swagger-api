import com.wordnik.client.api._
import akka.actor.ActorSystem
import io.swagger.app.{ResourcesApp, SwaggerApp}
import javax.servlet.ServletContext
import org.scalatra.LifeCycle

class ScalatraBootstrap extends LifeCycle {
  implicit val swagger = new SwaggerApp

  override def init(context: ServletContext) {
    implicit val system = ActorSystem("appActorSystem")
    try {
      context mount (new StationApi, "/Station/*")
      context mount (new OauthApi, "/Oauth/*")
      context mount (new ThermostatApi, "/Thermostat/*")
      context mount (new WelcomeApi, "/Welcome/*")
      context mount (new PublicApi, "/Public/*")
      context mount (new PartnerApi, "/Partner/*")
      
      context mount (new ResourcesApp, "/api-docs/*")
    } catch {
      case e: Throwable => e.printStackTrace()
    }
  }
}