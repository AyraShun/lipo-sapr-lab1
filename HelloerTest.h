
#ifndef HELLOERTEST_H
#define	HELLOERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class HelloerTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(HelloerTest);

    CPPUNIT_TEST(testMessage);

    CPPUNIT_TEST_SUITE_END();

public:
    HelloerTest();
    virtual ~HelloerTest();
    void setUp();
    void tearDown();

private:
    void testMessage();

};

#endif	/* HELLOERTEST_H */