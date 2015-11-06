#
# Be sure to run `pod lib lint SwaggerClient.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = "SwaggerClient"
    s.version          = "1.0.0"

    s.summary          = "Netatmo"
    s.description      = <<-DESC
                         &lt;h3&gt;Welcome to the Netatmo swagger on-line documentation !&lt;/h3&gt;This site is a complement to the official &lt;a href=\&quot;https://dev.netatmo.com/\&quot;&gt;Netatmo developper documentation&lt;/a&gt; using swagger to bring interactivity and easy testing of requests with the \&quot;try it\&quot; button (authenticate with the authorization code 0Auth2 flow by clicking the authenticate button in the methods). You can find the source code for this site can be found in the project &lt;a href=\&quot;https://github.com/cbornet/netatmo-swagger-ui\&quot;&gt;netatmo-swagger-ui&lt;/a&gt;. You can also use the online &lt;a href=\&quot;./swagger.json\&quot;&gt;swagger declaration&lt;/a&gt; file to generate code or static documentation (see &lt;a href=\&quot;https://github.com/cbornet/netatmo-swagger-api\&quot;&gt;netatmo-swagger-api&lt;/a&gt;).
                         DESC

    s.platform     = :ios, '7.0'
    s.requires_arc = true

    s.framework    = 'SystemConfiguration'
    
    s.homepage     = "https://github.com/swagger-api/swagger-codegen"
    s.license      = "MIT"
    s.source       = { :git => "https://github.com/swagger-api/swagger-codegen.git", :tag => "#{s.version}" }
    s.author       = { "Swagger" => "apiteam@swagger.io" }

    s.source_files = 'SwaggerClient/**/*'
    s.public_header_files = 'SwaggerClient/**/*.h'

    s.dependency 'AFNetworking', '~> 2.3'
    s.dependency 'JSONModel', '~> 1.1'
    s.dependency 'ISO8601', '~> 0.3'
end

