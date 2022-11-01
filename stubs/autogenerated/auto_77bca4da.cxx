#include "cpptest.h"

/** 
 * This file contains auto-generated stub definitions.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */
#include "Account.hxx"
#include "BaseDisplay.hxx"

/** Auto-generated stub definition for function: double Account::deposit(double) */
double (::Account::CppTest_Auto_Stub_deposit) (double amount) 
{
    CPPTEST_STUB_CALLED("Account::deposit");

    double __return = 0.0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, double* __return, ::Account* __this, double amount)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("Account::deposit", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = __this->deposit(amount);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(double* __return, ::Account* __this, double amount);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, this, amount);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: virtual void BaseDisplay::showBalance(double) */
void (::BaseDisplay::CppTest_Auto_Stub_showBalance) (double balance) 
{
    CPPTEST_STUB_CALLED("BaseDisplay::showBalance");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay* __this, double balance)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::showBalance", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     __this->BaseDisplay::showBalance(balance);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(::BaseDisplay* __this, double balance);
        CPPTEST_STUB_INVOKE_CALLBACK(this, balance);

    } else {
        /* You can put additional stub logic here. */

    }

}

/** Auto-generated stub definition for function: void BaseDisplay::showInfoToUser(const char *) */
void (::BaseDisplay::CppTest_Auto_Stub_showInfoToUser) (const char * message) 
{
    CPPTEST_STUB_CALLED("BaseDisplay::showInfoToUser");

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, ::BaseDisplay* __this, const char * message)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("BaseDisplay::showInfoToUser", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     __this->showInfoToUser(message);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(::BaseDisplay* __this, const char * message);
        CPPTEST_STUB_INVOKE_CALLBACK(this, message);

    } else {
        /* You can put additional stub logic here. */

    }

}
