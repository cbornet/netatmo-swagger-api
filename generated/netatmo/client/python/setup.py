# coding: utf-8

import sys
from setuptools import setup, find_packages

NAME = "swagger_client"
VERSION = "1.0.0"



# To install the library, run the following
#
# python setup.py install
#
# prerequisite: setuptools
# http://pypi.python.org/pypi/setuptools

REQUIRES = ["urllib3 >= 1.10", "six >= 1.9", "certifi", "python-dateutil"]

setup(
    name=NAME,
    version=VERSION,
    description="Netatmo",
    author_email="",
    url="",
    keywords=["Swagger", "Netatmo"],
    install_requires=REQUIRES,
    packages=find_packages(),
    include_package_data=True,
    long_description="""\
    &lt;h3&gt;Welcome to the Netatmo swagger on-line documentation !&lt;/h3&gt;This site is a complement to the official &lt;a href=\&quot;https://dev.netatmo.com/\&quot;&gt;Netatmo developper documentation&lt;/a&gt; using swagger to bring interactivity and easy testing of requests with the \&quot;try it\&quot; button (authenticate with the authorization code 0Auth2 flow by clicking the authenticate button in the methods). You can find the source code for this site can be found in the project &lt;a href=\&quot;https://github.com/cbornet/netatmo-swagger-ui\&quot;&gt;netatmo-swagger-ui&lt;/a&gt;. You can also use the online &lt;a href=\&quot;./swagger.json\&quot;&gt;swagger declaration&lt;/a&gt; file to generate code or static documentation (see &lt;a href=\&quot;https://github.com/cbornet/netatmo-swagger-api\&quot;&gt;netatmo-swagger-api&lt;/a&gt;).
    """
)


