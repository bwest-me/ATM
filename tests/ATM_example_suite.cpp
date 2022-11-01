#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/ATM/Account.cxx");
CPPTEST_TEST_SUITE_INCLUDED_TO("/ATM/Account.cxx");

class ATM_example_suite : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(ATM_example_suite);
        CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
        CPPTEST_TEST(test_debit);
        CPPTEST_TEST(test_case);
        CPPTEST_TEST(test_case_0);
        CPPTEST_TEST_SUITE_END();
        
        static void testSuiteSetUp();
        static void testSuiteTearDown();

        void setUp();
        void tearDown();

        void test_debit();
        void test_case();
        void test_case_0();
};

CPPTEST_TEST_SUITE_REGISTRATION(ATM_example_suite);

void ATM_example_suite::testSuiteSetUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void ATM_example_suite::testSuiteTearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void ATM_example_suite::setUp()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void ATM_example_suite::tearDown()
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}

/* CPPTEST_TEST_CASE_BEGIN test_debit */
/* CPPTEST_TEST_CASE_CONTEXT double Account::debit(double) */
void ATM_example_suite::test_debit()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
    ::Account _cpptest_TestObject ;
    /* Initializing argument 1 (amount) */ 
    double _amount  = 0.0;
    /* Tested function call */
    double _return  = _cpptest_TestObject.debit(_amount);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER(" _cpptest_TestObject.myAccountNumber", ( _cpptest_TestObject.myAccountNumber ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.myBalance", ( _cpptest_TestObject.myBalance ));
    CPPTEST_POST_CONDITION_CSTR_N("::std::string _cpptest_TestObject.myPassword", ( _cpptest_TestObject.myPassword.c_str() ), 256);
}
/* CPPTEST_TEST_CASE_END test_debit */

/* CPPTEST_TEST_CASE_BEGIN test_case */
/* CPPTEST_TEST_CASE_CONTEXT double Account::deposit(double) */
void ATM_example_suite::test_case()
{
/* CPPTEST_TEST_CASE_DATA_BEGIN */
#if 0

<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<testcase>
    <metadata/>
    <steps>
        <step id="MultiVariableStep" uid="0" version="1">
            <step id="VariableStep" version="1">
                <name>_cpptest_TestObject</name>
                <type>::Account</type>
                <value/>
            </step>
            <step id="VariableStep" version="1">
                <name>_amount</name>
                <type>double</type>
                <value>0.0</value>
            </step>
        </step>
        <step id="CallStep" uid="1" version="1">
            <comment>Tested function call</comment>
            <return>double _return </return>
            <name>_cpptest_TestObject.deposit</name>
            <params>_amount</params>
        </step>
        <step id="AssertionsStep" uid="2" version="1">
            <comment>Post-condition check (outcome)</comment>
            <step id="AssertionStep" uid="2.0" version="1">
                <type>CPPTEST_ASSERT_FLOAT_EQUAL_DELTA</type>
                <P1>0</P1>
                <P2>_return</P2>
                <P3>0.01</P3>
                <P4/>
            </step>
            <step id="AssertionStep" uid="2.1" version="1">
                <type>CPPTEST_ASSERT_INTEGER_EQUAL</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myAccountNumber</P2>
                <P3/>
                <P4/>
            </step>
            <step id="AssertionStep" uid="2.2" version="1">
                <type>CPPTEST_ASSERT_FLOAT_EQUAL_DELTA</type>
                <P1>0</P1>
                <P2>_cpptest_TestObject.myBalance</P2>
                <P3>0.01</P3>
                <P4/>
            </step>
            <step id="AssertionStep" uid="2.3" version="1">
                <type>CPPTEST_ASSERT_CSTR_N_EQUAL</type>
                <P1>""</P1>
                <P2>_cpptest_TestObject.myPassword.c_str()</P2>
                <P3>256</P3>
                <P4/>
            </step>
        </step>
    </steps>
</testcase>

#endif
/* CPPTEST_TEST_CASE_DATA_END */
::Account _cpptest_TestObject;
double _amount = 0.0;
/* CPPTEST_TC_STEP_UID:1 */
double _return  = _cpptest_TestObject.deposit(_amount);
/* CPPTEST_TC_STEP_UID:2.0 */
CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(0, _return, 0.01);
/* CPPTEST_TC_STEP_UID:2.1 */
CPPTEST_ASSERT_INTEGER_EQUAL(0, _cpptest_TestObject.myAccountNumber);
/* CPPTEST_TC_STEP_UID:2.2 */
CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(0, _cpptest_TestObject.myBalance, 0.01);
/* CPPTEST_TC_STEP_UID:2.3 */
CPPTEST_ASSERT_CSTR_N_EQUAL("", _cpptest_TestObject.myPassword.c_str(), 256);
}
/* CPPTEST_TEST_CASE_END test_case */

/* CPPTEST_TEST_CASE_BEGIN test_case_0 */
void ATM_example_suite::test_case_0()
{
    CPPTEST_FAIL("Auto-generated test case");
}
/* CPPTEST_TEST_CASE_END test_case_0 */
