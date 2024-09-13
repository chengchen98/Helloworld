#include "connectivityTest.h"

#include <string>
#include <cpprest/http_client.h>
#include <opentelemetry/trace/tracer.h>

using namespace mct;
using namespace std;

using namespace utility;
using namespace web;
using namespace web::http;
using namespace web::http::client;

using namespace opentelemetry::trace;

void connectivityTest::runTest()
{
	this->testWebConnection();
	this->testTcpConnection();
}

void connectivityTest::testWebConnection()
{
	http_client client(U("https://connectivity.officeppe.com/"));
	http_response response = client.request(methods::GET).get();
	cout << response.status_code() << endl;
}

void connectivityTest::testTcpConnection()
{
	cout << "" << endl;
}