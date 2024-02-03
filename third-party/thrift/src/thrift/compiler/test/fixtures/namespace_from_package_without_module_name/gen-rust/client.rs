// @generated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
// This file is probably not the place you want to edit!

//! Client implementation for each service in `module`.

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, unused_imports, clippy::all)]

pub mod mock;

#[doc(inline)]
pub use :: as types;
#[doc(inline)]
pub use ::::errors;
pub(crate) use crate as client;
pub(crate) use ::::services;

// Used by Thrift-generated code to implement service inheritance.
#[doc(hidden)]
pub mod dependencies {
}


/// Client definitions for `TestService`.
pub struct TestServiceImpl<P, T, S = ::fbthrift::NoopSpawner> {
    transport: T,
    _phantom: ::std::marker::PhantomData<fn() -> (P, S)>,
}

impl<P, T, S> TestServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    pub fn new(
        transport: T,
    ) -> Self {
        Self {
            transport,
            _phantom: ::std::marker::PhantomData,
        }
    }

    pub fn transport(&self) -> &T {
        &self.transport
    }


    fn _init_impl(
        &self,
        arg_int1: ::std::primitive::i64,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::primitive::i64, crate::errors::test_service::InitError>> {
        use ::const_cstr::const_cstr;
        use ::tracing::Instrument as _;
        use ::futures::FutureExt as _;

        const_cstr! {
            SERVICE_NAME = "TestService";
            SERVICE_METHOD_NAME = "TestService.init";
        }
        let args = self::Args_TestService_init {
            int1: arg_int1,
            _phantom: ::std::marker::PhantomData,
        };

        let transport = self.transport();

        // need to do call setup outside of async block because T: Transport isn't Send
        let request_env = match ::fbthrift::help::serialize_request_envelope::<P, _>("init", &args) {
            ::std::result::Result::Ok(res) => res,
            ::std::result::Result::Err(err) => return ::futures::future::err(err.into()).boxed(),
        };

        let call = transport
            .call(SERVICE_NAME.as_cstr(), SERVICE_METHOD_NAME.as_cstr(), request_env, rpc_options)
            .instrument(::tracing::trace_span!("call", method = "TestService.init"));

        async move {
            let reply_env = call.await?;

            let de = P::deserializer(reply_env);
            let (res, _de): (::std::result::Result<crate::services::test_service::InitExn, _>, _) =
                ::fbthrift::help::async_deserialize_response_envelope::<P, _, S>(de).await?;

            let res = match res {
                ::std::result::Result::Ok(exn) => ::std::convert::From::from(exn),
                ::std::result::Result::Err(aexn) =>
                    ::std::result::Result::Err(crate::errors::test_service::InitError::ApplicationException(aexn))
            };
            res
        }
        .instrument(::tracing::info_span!("stream", method = "TestService.init"))
        .boxed()
    }
}

pub trait TestService: ::std::marker::Send {
    fn init(
        &self,
        arg_int1: ::std::primitive::i64,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::primitive::i64, crate::errors::test_service::InitError>>;
}

pub trait TestServiceExt<T>: TestService
where
    T: ::fbthrift::Transport,
{
    fn init_with_rpc_opts(
        &self,
        arg_int1: ::std::primitive::i64,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::primitive::i64, crate::errors::test_service::InitError>>;

    fn transport(&self) -> &T;
}

struct Args_TestService_init<'a> {
    int1: ::std::primitive::i64,
    _phantom: ::std::marker::PhantomData<&'a ()>,
}

impl<'a, P: ::fbthrift::ProtocolWriter> ::fbthrift::Serialize<P> for self::Args_TestService_init<'a> {
    #[inline]
    #[::tracing::instrument(skip_all, level = "trace", name = "serialize_args", fields(method = "TestService.init"))]
    fn write(&self, p: &mut P) {
        p.write_struct_begin("args");
        p.write_field_begin("int1", ::fbthrift::TType::I64, 1i16);
        ::fbthrift::Serialize::write(&self.int1, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P, T, S> TestService for TestServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn init(
        &self,
        arg_int1: ::std::primitive::i64,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::primitive::i64, crate::errors::test_service::InitError>> {
        let rpc_options = T::RpcOptions::default();
        self._init_impl(
            arg_int1,
            rpc_options,
        )
    }
}

impl<P, T, S> TestServiceExt<T> for TestServiceImpl<P, T, S>
where
    P: ::fbthrift::Protocol,
    T: ::fbthrift::Transport,
    P::Frame: ::fbthrift::Framing<DecBuf = ::fbthrift::FramingDecoded<T>>,
    ::fbthrift::ProtocolEncoded<P>: ::fbthrift::BufMutExt<Final = ::fbthrift::FramingEncodedFinal<T>>,
    P::Deserializer: ::std::marker::Send,
    S: ::fbthrift::help::Spawner,
{
    fn init_with_rpc_opts(
        &self,
        arg_int1: ::std::primitive::i64,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::primitive::i64, crate::errors::test_service::InitError>> {
        self._init_impl(
            arg_int1,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
      self.transport()
    }
}

impl<'a, S> TestService for S
where
    S: ::std::convert::AsRef<dyn TestService + 'a>,
    S: ::std::marker::Send,
{
    fn init(
        &self,
        arg_int1: ::std::primitive::i64,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::primitive::i64, crate::errors::test_service::InitError>> {
        self.as_ref().init(
            arg_int1,
        )
    }
}

impl<S, T> TestServiceExt<T> for S
where
    S: ::std::convert::AsRef<dyn TestService + 'static>,
    S: ::std::convert::AsRef<dyn TestServiceExt<T> + 'static>,
    S: ::std::marker::Send,
    T: ::fbthrift::Transport,
{
    fn init_with_rpc_opts(
        &self,
        arg_int1: ::std::primitive::i64,
        rpc_options: T::RpcOptions,
    ) -> ::futures::future::BoxFuture<'static, ::std::result::Result<::std::primitive::i64, crate::errors::test_service::InitError>> {
        <Self as ::std::convert::AsRef<dyn TestServiceExt<T>>>::as_ref(self).init_with_rpc_opts(
            arg_int1,
            rpc_options,
        )
    }

    fn transport(&self) -> &T {
        <dyn TestServiceExt<T> as TestServiceExt<T>>::transport(<Self as ::std::convert::AsRef<dyn TestServiceExt<T>>>::as_ref(self))
    }
}

#[derive(Clone)]
pub struct make_TestService;

/// To be called by user directly setting up a client. Avoids
/// needing ClientFactory trait in scope, avoids unidiomatic
/// make_Trait name.
///
/// ```
/// # const _: &str = stringify! {
/// use bgs::client::BuckGraphService;
///
/// let protocol = BinaryProtocol::new();
/// let transport = HttpClient::new();
/// let client = <dyn BuckGraphService>::new(protocol, transport);
/// # };
/// ```
impl dyn TestService {
    pub fn new<P, T>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl TestService + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
    {
        let spawner = ::fbthrift::help::NoopSpawner;
        Self::with_spawner(protocol, transport, spawner)
    }

    pub fn with_spawner<P, T, S>(
        protocol: P,
        transport: T,
        spawner: S,
    ) -> ::std::sync::Arc<impl TestService + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(TestServiceImpl::<P, T, S>::new(transport))
    }
}

impl<T> dyn TestServiceExt<T>
where
    T: ::fbthrift::Transport,
{
    pub fn new<P>(
        protocol: P,
        transport: T,
    ) -> ::std::sync::Arc<impl TestServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        P::Deserializer: ::std::marker::Send,
    {
        let spawner = ::fbthrift::help::NoopSpawner;
        Self::with_spawner(protocol, transport, spawner)
    }

    pub fn with_spawner<P, S>(
        protocol: P,
        transport: T,
        spawner: S,
    ) -> ::std::sync::Arc<impl TestServiceExt<T> + ::std::marker::Send + ::std::marker::Sync + 'static>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        let _ = protocol;
        let _ = spawner;
        ::std::sync::Arc::new(TestServiceImpl::<P, T, S>::new(transport))
    }
}

pub type TestServiceDynClient = <make_TestService as ::fbthrift::ClientFactory>::Api;
pub type TestServiceClient = ::std::sync::Arc<TestServiceDynClient>;

/// The same thing, but to be called from generic contexts where we are
/// working with a type parameter `C: ClientFactory` to produce clients.
impl ::fbthrift::ClientFactory for make_TestService {
    type Api = dyn TestService + ::std::marker::Send + ::std::marker::Sync + 'static;

    fn with_spawner<P, T, S>(protocol: P, transport: T, spawner: S) -> ::std::sync::Arc<Self::Api>
    where
        P: ::fbthrift::Protocol<Frame = T>,
        T: ::fbthrift::Transport,
        P::Deserializer: ::std::marker::Send,
        S: ::fbthrift::help::Spawner,
    {
        <dyn TestService>::with_spawner(protocol, transport, spawner)
    }
}

