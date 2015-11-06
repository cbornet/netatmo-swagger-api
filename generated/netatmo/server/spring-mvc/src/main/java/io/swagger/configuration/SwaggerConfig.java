package io.swagger.configuration;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.ComponentScan;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.PropertySource;
import org.springframework.context.annotation.Import;
import org.springframework.web.servlet.config.annotation.EnableWebMvc;
import springfox.documentation.service.ApiInfo;
import springfox.documentation.spi.DocumentationType;
import springfox.documentation.spring.web.plugins.Docket;
import springfox.documentation.swagger2.annotations.EnableSwagger2;


@Configuration
@ComponentScan(basePackages = "io.swagger.api")
@EnableWebMvc
@EnableSwagger2 //Loads the spring beans required by the framework
@PropertySource("classpath:swagger.properties")
@Import(SwaggerUiConfiguration.class)
@javax.annotation.Generated(value = "class io.swagger.codegen.languages.SpringMVCServerCodegen", date = "2015-10-11T02:15:19.344+02:00")
public class SwaggerConfig {
    @Bean
    ApiInfo apiInfo() {
        ApiInfo apiInfo = new ApiInfo(
        "Netatmo",
        "<h3>Welcome to the Netatmo swagger on-line documentation !</h3>This site is a complement to the official <a href=\"https://dev.netatmo.com/\">Netatmo developper documentation</a> using swagger to bring interactivity and easy testing of requests with the \"try it\" button (authenticate with the authorization code 0Auth2 flow by clicking the authenticate button in the methods). You can find the source code for this site can be found in the project <a href=\"https://github.com/cbornet/netatmo-swagger-ui\">netatmo-swagger-ui</a>. You can also use the online <a href=\"./swagger.json\">swagger declaration</a> file to generate code or static documentation (see <a href=\"https://github.com/cbornet/netatmo-swagger-api\">netatmo-swagger-api</a>).",
        "1.0.0",
        "",
        "",
        "",
        "" );
        return apiInfo;
    }

    @Bean
    public Docket customImplementation(){
        return new Docket(DocumentationType.SWAGGER_2).apiInfo(apiInfo());
    }

}