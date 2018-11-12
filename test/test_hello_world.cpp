#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(HelloWorldSuite)

BOOST_AUTO_TEST_CASE(hello_world)
{
    BOOST_TEST(1 == 1);
}

BOOST_AUTO_TEST_SUITE_END()
