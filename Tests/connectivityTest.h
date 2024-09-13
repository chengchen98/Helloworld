// connectivityTest.h
#pragma once

namespace mct {
	class connectivityTest {
	public:
		void runTest();
	private:
		void testWebConnection();
		void testTcpConnection();
	};
}