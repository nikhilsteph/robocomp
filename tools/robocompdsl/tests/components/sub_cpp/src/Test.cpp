// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `Test.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <Test.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::std::string __RoboCompTests__test__printmsg_name = "printmsg";

const ::std::string __RoboCompTests__serviceTest__srvTest_name = "srvTest";

const ::std::string __RoboCompTests__publishTest__msgTest_name = "msgTest";

}
::IceProxy::Ice::Object* ::IceProxy::RoboCompTests::upCast(::IceProxy::RoboCompTests::test* p) { return p; }

void
::IceProxy::RoboCompTests::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::RoboCompTests::test>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompTests::test;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::RoboCompTests::test::printmsg(const ::std::string& message, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __RoboCompTests__test__printmsg_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::RoboCompTests::test* __del = dynamic_cast< ::IceDelegate::RoboCompTests::test*>(__delBase.get());
            __del->printmsg(message, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::RoboCompTests::test::begin_printmsg(const ::std::string& message, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __RoboCompTests__test__printmsg_name, __del, __cookie);
    try
    {
        __result->__prepare(__RoboCompTests__test__printmsg_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(message);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::RoboCompTests::test::end_printmsg(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __RoboCompTests__test__printmsg_name);
}

const ::std::string&
IceProxy::RoboCompTests::test::ice_staticId()
{
    return ::RoboCompTests::test::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::RoboCompTests::test::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::RoboCompTests::test);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::RoboCompTests::test::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::RoboCompTests::test);
}

::IceProxy::Ice::Object*
IceProxy::RoboCompTests::test::__newInstance() const
{
    return new test;
}
::IceProxy::Ice::Object* ::IceProxy::RoboCompTests::upCast(::IceProxy::RoboCompTests::serviceTest* p) { return p; }

void
::IceProxy::RoboCompTests::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::RoboCompTests::serviceTest>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompTests::serviceTest;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::RoboCompTests::serviceTest::srvTest(::Ice::Int id, ::Ice::Int& idTest, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __RoboCompTests__serviceTest__srvTest_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__RoboCompTests__serviceTest__srvTest_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::RoboCompTests::serviceTest* __del = dynamic_cast< ::IceDelegate::RoboCompTests::serviceTest*>(__delBase.get());
            __del->srvTest(id, idTest, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, true, __cnt, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::RoboCompTests::serviceTest::begin_srvTest(::Ice::Int id, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__RoboCompTests__serviceTest__srvTest_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __RoboCompTests__serviceTest__srvTest_name, __del, __cookie);
    try
    {
        __result->__prepare(__RoboCompTests__serviceTest__srvTest_name, ::Ice::Idempotent, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(id);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::RoboCompTests::serviceTest::end_srvTest(::Ice::Int& idTest, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __RoboCompTests__serviceTest__srvTest_name);
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(idTest);
        __result->__endReadParams();
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

const ::std::string&
IceProxy::RoboCompTests::serviceTest::ice_staticId()
{
    return ::RoboCompTests::serviceTest::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::RoboCompTests::serviceTest::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::RoboCompTests::serviceTest);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::RoboCompTests::serviceTest::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::RoboCompTests::serviceTest);
}

::IceProxy::Ice::Object*
IceProxy::RoboCompTests::serviceTest::__newInstance() const
{
    return new serviceTest;
}
::IceProxy::Ice::Object* ::IceProxy::RoboCompTests::upCast(::IceProxy::RoboCompTests::publishTest* p) { return p; }

void
::IceProxy::RoboCompTests::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::RoboCompTests::publishTest>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompTests::publishTest;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::RoboCompTests::publishTest::msgTest(::Ice::Int id, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __RoboCompTests__publishTest__msgTest_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::RoboCompTests::publishTest* __del = dynamic_cast< ::IceDelegate::RoboCompTests::publishTest*>(__delBase.get());
            __del->msgTest(id, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::RoboCompTests::publishTest::begin_msgTest(::Ice::Int id, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __RoboCompTests__publishTest__msgTest_name, __del, __cookie);
    try
    {
        __result->__prepare(__RoboCompTests__publishTest__msgTest_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(id);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::RoboCompTests::publishTest::end_msgTest(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __RoboCompTests__publishTest__msgTest_name);
}

const ::std::string&
IceProxy::RoboCompTests::publishTest::ice_staticId()
{
    return ::RoboCompTests::publishTest::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::RoboCompTests::publishTest::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::RoboCompTests::publishTest);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::RoboCompTests::publishTest::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::RoboCompTests::publishTest);
}

::IceProxy::Ice::Object*
IceProxy::RoboCompTests::publishTest::__newInstance() const
{
    return new publishTest;
}

void
IceDelegateM::RoboCompTests::test::printmsg(const ::std::string& message, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __RoboCompTests__test__printmsg_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(message);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateM::RoboCompTests::serviceTest::srvTest(::Ice::Int id, ::Ice::Int& idTest, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __RoboCompTests__serviceTest__srvTest_name, ::Ice::Idempotent, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(id);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(idTest);
        __og.endReadParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::RoboCompTests::publishTest::msgTest(::Ice::Int id, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __RoboCompTests__publishTest__msgTest_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(id);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateD::RoboCompTests::test::printmsg(const ::std::string& message, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& __p_message, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_message(__p_message)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::RoboCompTests::test* servant = dynamic_cast< ::RoboCompTests::test*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->printmsg(_m_message, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_message;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __RoboCompTests__test__printmsg_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(message, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::RoboCompTests::serviceTest::srvTest(::Ice::Int id, ::Ice::Int& idTest, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int __p_id, ::Ice::Int& __p_idTest, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_id(__p_id),
            _m_idTest(__p_idTest)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::RoboCompTests::serviceTest* servant = dynamic_cast< ::RoboCompTests::serviceTest*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->srvTest(_m_id, _m_idTest, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_id;
        ::Ice::Int& _m_idTest;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __RoboCompTests__serviceTest__srvTest_name, ::Ice::Idempotent, __context);
    try
    {
        _DirectI __direct(id, idTest, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::RoboCompTests::publishTest::msgTest(::Ice::Int id, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int __p_id, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_id(__p_id)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::RoboCompTests::publishTest* servant = dynamic_cast< ::RoboCompTests::publishTest*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->msgTest(_m_id, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_id;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __RoboCompTests__publishTest__msgTest_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(id, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::Ice::Object* RoboCompTests::upCast(::RoboCompTests::test* p) { return p; }

namespace
{
const ::std::string __RoboCompTests__test_ids[2] =
{
    "::Ice::Object",
    "::RoboCompTests::test"
};

}

bool
RoboCompTests::test::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RoboCompTests__test_ids, __RoboCompTests__test_ids + 2, _s);
}

::std::vector< ::std::string>
RoboCompTests::test::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RoboCompTests__test_ids[0], &__RoboCompTests__test_ids[2]);
}

const ::std::string&
RoboCompTests::test::ice_id(const ::Ice::Current&) const
{
    return __RoboCompTests__test_ids[1];
}

const ::std::string&
RoboCompTests::test::ice_staticId()
{
    return __RoboCompTests__test_ids[1];
}

::Ice::DispatchStatus
RoboCompTests::test::___printmsg(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string message;
    __is->read(message);
    __inS.endReadParams();
    printmsg(message, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __RoboCompTests__test_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "printmsg"
};

}

::Ice::DispatchStatus
RoboCompTests::test::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__RoboCompTests__test_all, __RoboCompTests__test_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RoboCompTests__test_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___printmsg(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
RoboCompTests::test::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
RoboCompTests::test::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
RoboCompTests::__patch(testPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::RoboCompTests::testPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::RoboCompTests::test::ice_staticId(), v);
    }
}

::Ice::Object* RoboCompTests::upCast(::RoboCompTests::serviceTest* p) { return p; }

namespace
{
const ::std::string __RoboCompTests__serviceTest_ids[2] =
{
    "::Ice::Object",
    "::RoboCompTests::serviceTest"
};

}

bool
RoboCompTests::serviceTest::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RoboCompTests__serviceTest_ids, __RoboCompTests__serviceTest_ids + 2, _s);
}

::std::vector< ::std::string>
RoboCompTests::serviceTest::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RoboCompTests__serviceTest_ids[0], &__RoboCompTests__serviceTest_ids[2]);
}

const ::std::string&
RoboCompTests::serviceTest::ice_id(const ::Ice::Current&) const
{
    return __RoboCompTests__serviceTest_ids[1];
}

const ::std::string&
RoboCompTests::serviceTest::ice_staticId()
{
    return __RoboCompTests__serviceTest_ids[1];
}

::Ice::DispatchStatus
RoboCompTests::serviceTest::___srvTest(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Int id;
    __is->read(id);
    __inS.endReadParams();
    ::Ice::Int idTest;
    srvTest(id, idTest, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(idTest);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __RoboCompTests__serviceTest_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "srvTest"
};

}

::Ice::DispatchStatus
RoboCompTests::serviceTest::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__RoboCompTests__serviceTest_all, __RoboCompTests__serviceTest_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RoboCompTests__serviceTest_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___srvTest(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
RoboCompTests::serviceTest::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
RoboCompTests::serviceTest::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
RoboCompTests::__patch(serviceTestPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::RoboCompTests::serviceTestPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::RoboCompTests::serviceTest::ice_staticId(), v);
    }
}

::Ice::Object* RoboCompTests::upCast(::RoboCompTests::publishTest* p) { return p; }

namespace
{
const ::std::string __RoboCompTests__publishTest_ids[2] =
{
    "::Ice::Object",
    "::RoboCompTests::publishTest"
};

}

bool
RoboCompTests::publishTest::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RoboCompTests__publishTest_ids, __RoboCompTests__publishTest_ids + 2, _s);
}

::std::vector< ::std::string>
RoboCompTests::publishTest::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RoboCompTests__publishTest_ids[0], &__RoboCompTests__publishTest_ids[2]);
}

const ::std::string&
RoboCompTests::publishTest::ice_id(const ::Ice::Current&) const
{
    return __RoboCompTests__publishTest_ids[1];
}

const ::std::string&
RoboCompTests::publishTest::ice_staticId()
{
    return __RoboCompTests__publishTest_ids[1];
}

::Ice::DispatchStatus
RoboCompTests::publishTest::___msgTest(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Int id;
    __is->read(id);
    __inS.endReadParams();
    msgTest(id, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __RoboCompTests__publishTest_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "msgTest"
};

}

::Ice::DispatchStatus
RoboCompTests::publishTest::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__RoboCompTests__publishTest_all, __RoboCompTests__publishTest_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RoboCompTests__publishTest_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___msgTest(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
RoboCompTests::publishTest::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
RoboCompTests::publishTest::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
RoboCompTests::__patch(publishTestPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::RoboCompTests::publishTestPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::RoboCompTests::publishTest::ice_staticId(), v);
    }
}