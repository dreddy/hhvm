// Copyright (c) Facebook, Inc. and its affiliates.
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the "hack" directory of this source tree.
//
// @generated SignedSource<<ab763ea3e62e612602ec810aae336baa>>
//
// To regenerate this file, run:
//   hphp/hack/src/oxidized_regen.sh

use arena_trait::TrivialDrop;
use eq_modulo_pos::EqModuloPos;
use no_pos_hash::NoPosHash;
use ocamlrep_derive::FromOcamlRep;
use ocamlrep_derive::FromOcamlRepIn;
use ocamlrep_derive::ToOcamlRep;
use serde::Deserialize;
use serde::Serialize;

#[allow(unused_imports)]
use crate::*;

#[derive(
    Clone,
    Copy,
    Debug,
    Deserialize,
    Eq,
    EqModuloPos,
    FromOcamlRep,
    FromOcamlRepIn,
    Hash,
    NoPosHash,
    Ord,
    PartialEq,
    PartialOrd,
    Serialize,
    ToOcamlRep
)]
#[repr(C)]
pub enum Parsing {
    FixmeFormat = 1001,
    ParsingError = 1002,
    XhpParsingError = 1007,
}
impl TrivialDrop for Parsing {}
arena_deserializer::impl_deserialize_in_arena!(Parsing);

#[derive(
    Clone,
    Copy,
    Debug,
    Deserialize,
    Eq,
    EqModuloPos,
    FromOcamlRep,
    FromOcamlRepIn,
    Hash,
    NoPosHash,
    Ord,
    PartialEq,
    PartialOrd,
    Serialize,
    ToOcamlRep
)]
#[repr(C)]
pub enum Naming {
    AddATypehint = 2001,
    AssertArity = 2003,
    PrimitiveInvalidAlias = 2004,
    DidYouMeanNaming = 2006,
    DisallowedXhpType = 2008,
    LvarInObjGet = 2011,
    ErrorNameAlreadyBound = 2012,
    ExpectedCollection = 2013,
    ExpectedVariable = 2014,
    FdNameAlreadyBound = 2015,
    IllegalClass = 2021,
    IllegalClassMeth = 2022,
    IllegalConstant = 2023,
    IllegalFun = 2024,
    IllegalInstMeth = 2025,
    IllegalMethCaller = 2026,
    IllegalMethFun = 2027,
    InvalidReqExtends = 2029,
    InvalidReqImplements = 2030,
    LowercaseThis = 2032,
    MethodNameAlreadyBound = 2033,
    MissingArrow = 2034,
    MissingTypehint = 2035,
    NameAlreadyBound = 2036,
    NamingTooFewArguments = 2037,
    NamingTooManyArguments = 2038,
    PrimitiveToplevel = 2039,
    ShadowedTypeParam = 2041,
    StartWithT = 2042,
    ThisMustBeReturn = 2043,
    ThisNoArgument = 2044,
    ThisHintOutsideClass = 2045,
    ThisReserved = 2046,
    HigherKindedTypesUnsupportedFeature = 2047,
    UnboundName = 2049,
    Undefined = 2050,
    UnexpectedArrow = 2051,
    UnexpectedTypedef = 2052,
    UsingInternalClass = 2053,
    VoidCast = 2054,
    ObjectCast = 2055,
    UnsetCast = 2056,
    IllegalTrait = 2058,
    DynamicNewInStrictMode = 2060,
    InvalidTypeAccessRoot = 2061,
    DuplicateUserAttribute = 2062,
    ReturnOnlyTypehint = 2063,
    UnexpectedTypeArguments = 2064,
    TooManyTypeArguments = 2065,
    ClassnameParam = 2066,
    NameIsReserved = 2068,
    DollardollarUnused = 2069,
    IllegalMemberVariableClass = 2070,
    TooFewTypeArguments = 2071,
    ThisAsLexicalVariable = 2077,
    DynamicClassNameInStrictMode = 2078,
    XhpOptionalRequiredAttr = 2079,
    XhpRequiredWithDefault = 2080,
    ArrayTypehintsDisallowed = 2082,
    WildcardHintDisallowed = 2084,
    MethodNeedsVisibility = 2086,
    NonstaticPropertyWithLSB = 2094,
    UnsupportedTraitUseAs = 2102,
    UnsupportedInsteadOf = 2103,
    InvalidTraitUseAsVisibility = 2104,
    InvalidFunPointer = 2105,
    IllegalUseOfDynamicallyCallable = 2106,
    ClassMethNonFinalSelf = 2111,
    ParentInFunctionPointer = 2112,
    SelfInNonFinalFunctionPointer = 2113,
    ClassMethNonFinalCLASS = 2114,
    WildcardTypeParamDisallowed = 2115,
    InvalidWildcardContext = 2117,
}
impl TrivialDrop for Naming {}
arena_deserializer::impl_deserialize_in_arena!(Naming);

#[derive(
    Clone,
    Copy,
    Debug,
    Deserialize,
    Eq,
    EqModuloPos,
    FromOcamlRep,
    FromOcamlRepIn,
    Hash,
    NoPosHash,
    Ord,
    PartialEq,
    PartialOrd,
    Serialize,
    ToOcamlRep
)]
#[repr(C)]
pub enum NastCheck {
    AbstractBody = 3001,
    AbstractWithBody = 3002,
    AwaitInSyncFunction = 3003,
    CallBeforeInit = 3004,
    CaseFallthrough = 3005,
    ContinueInSwitch = 3006,
    DefaultFallthrough = 3008,
    InterfaceWithMemberVariable = 3009,
    InterfaceWithStaticMemberVariable = 3010,
    Magic = 3011,
    NoConstructParent = 3012,
    NonInterface = 3013,
    NotAbstractWithoutBody = 3014,
    NotInitialized = 3015,
    NotPublicInterface = 3016,
    RequiresNonClass = 3017,
    ReturnInFinally = 3018,
    ReturnInGen = 3019,
    ToStringReturnsString = 3020,
    ToStringVisibility = 3021,
    ToplevelBreak = 3022,
    ToplevelContinue = 3023,
    UsesNonTrait = 3024,
    IllegalFunctionName = 3025,
    NotAbstractWithoutTypeconst = 3026,
    TypeconstDependsOnExternalTparam = 3027,
    ConstructorRequired = 3030,
    InterfaceWithPartialTypeconst = 3031,
    MultipleXhpCategory = 3032,
    StaticMemoizedFunction = 3041,
    InoutParamsSpecial = 3043,
    InoutParamsMemoize = 3045,
    ReadingFromAppend = 3047,
    InoutArgumentBadExpr = 3050,
    IllegalDestructor = 3056,
    RequiresFinalClass = 3072,
    InterfaceUsesTrait = 3073,
    NonstaticMethodInAbstractFinalClass = 3074,
    SwitchNonTerminalDefault = 3081,
    SwitchMultipleDefault = 3082,
    RepeatedRecordFieldName = 3083,
    PhpLambdaDisallowed = 3084,
    EntryPointArguments = 3085,
    VariadicMemoize = 3086,
    AbstractMethodMemoize = 3087,
    InstancePropertyInAbstractFinalClass = 3088,
    DynamicallyCallableReified = 3089,
    IllegalContext = 3090,
    ListRvalue = 3092,
    PartiallyAbstractTypeconstDefinition = 3093,
    EntryPointGenerics = 3094,
}
impl TrivialDrop for NastCheck {}
arena_deserializer::impl_deserialize_in_arena!(NastCheck);

#[derive(
    Clone,
    Copy,
    Debug,
    Deserialize,
    Eq,
    EqModuloPos,
    FromOcamlRep,
    FromOcamlRepIn,
    Hash,
    NoPosHash,
    Ord,
    PartialEq,
    PartialOrd,
    Serialize,
    ToOcamlRep
)]
#[repr(C)]
pub enum Typing {
    UninstantiableClass = 4002,
    ArrayAccessRead = 4005,
    ArrayAppend = 4006,
    ArrayCast = 4007,
    ArrayGetArity = 4008,
    BadCall = 4009,
    ConstMutation = 4011,
    ConstructorNoArgs = 4012,
    CyclicClassDef = 4013,
    CyclicTypedef = 4014,
    DiscardedAwaitable = 4015,
    IssetEmptyInStrict = 4016,
    EnumConstantTypeBad = 4018,
    EnumSwitchNonexhaustive = 4019,
    EnumSwitchNotConst = 4020,
    EnumSwitchRedundant = 4021,
    EnumSwitchRedundantDefault = 4022,
    EnumSwitchWrongClass = 4023,
    EnumTypeBad = 4024,
    ExpectedClass = 4026,
    ExpectedLiteralFormatString = 4027,
    ExpectedTparam = 4029,
    ExpectingReturnTypeHint = 4030,
    ExpectingTypeHint = 4032,
    ExpectingTypeHintVariadic = 4033,
    ExtendFinal = 4035,
    FieldKinds = 4036,
    FormatString = 4038,
    FunArityMismatch = 4039,
    FunTooFewArgs = 4040,
    FunTooManyArgs = 4041,
    FunUnexpectedNonvariadic = 4042,
    FunVariadicityHhVsPhp56 = 4043,
    GenericArrayStrict = 4045,
    GenericStatic = 4046,
    ImplementAbstract = 4047,
    InvalidShapeFieldConst = 4049,
    InvalidShapeFieldLiteral = 4050,
    InvalidShapeFieldName = 4051,
    InvalidShapeFieldType = 4052,
    MemberNotFound = 4053,
    MemberNotImplemented = 4054,
    MissingAssign = 4055,
    MissingConstructor = 4056,
    MissingField = 4057,
    SelfOutsideClass = 4059,
    NewStaticInconsistent = 4060,
    StaticOutsideClass = 4061,
    NonObjectMemberRead = 4062,
    NullContainer = 4063,
    NullMemberRead = 4064,
    OptionReturnOnlyTypehint = 4066,
    ObjectString = 4067,
    OptionMixed = 4068,
    OverrideFinal = 4070,
    OverridePerTrait = 4071,
    AbstractCall = 4073,
    ParentInTrait = 4074,
    ParentOutsideClass = 4075,
    ParentUndefined = 4076,
    PreviousDefault = 4077,
    PrivateClassMeth = 4078,
    PrivateInstMeth = 4079,
    PrivateOverride = 4080,
    ProtectedClassMeth = 4081,
    ProtectedInstMeth = 4082,
    ReadBeforeWrite = 4083,
    ReturnInVoid = 4084,
    ShapeFieldClassMismatch = 4085,
    ShapeFieldTypeMismatch = 4086,
    ShouldBeOverride = 4087,
    SmemberNotFound = 4090,
    StaticDynamic = 4091,
    ThisVarOutsideClass = 4095,
    TupleSyntax = 4100,
    TypeArityMismatch = 4101,
    TypingTooFewArgs = 4104,
    TypingTooManyArgs = 4105,
    UnboundGlobal = 4106,
    UnboundNameTyping = 4107,
    UndefinedField = 4108,
    UndefinedParent = 4109,
    UnifyError = 4110,
    UnsatisfiedReq = 4111,
    Visibility = 4112,
    VisibilityExtends = 4113,
    WrongExtendKind = 4115,
    GenericUnify = 4116,
    TrivialStrictEq = 4118,
    VoidUsage = 4119,
    DeclaredCovariant = 4120,
    DeclaredContravariant = 4121,
    StrictMembersNotKnown = 4123,
    ErasedGenericAtRuntime = 4124,
    AttributeTooManyArguments = 4126,
    AttributeParamType = 4127,
    DeprecatedUse = 4128,
    AbstractConstUsage = 4129,
    CannotDeclareConstant = 4130,
    CyclicTypeconst = 4131,
    NullsafePropertyWriteContext = 4132,
    NoreturnUsage = 4133,
    UnsetNonidxInStrict = 4135,
    InvalidShapeFieldNameEmpty = 4136,
    ShapeFieldsUnknown = 4138,
    InvalidShapeRemoveKey = 4139,
    ShapeFieldUnset = 4141,
    AbstractConcreteOverride = 4142,
    LocalVariableModifedAndUsed = 4143,
    LocalVariableModifedTwice = 4144,
    AssignDuringCase = 4145,
    CyclicEnumConstraint = 4146,
    UnpackingDisallowed = 4147,
    InvalidClassname = 4148,
    InvalidMemoizedParam = 4149,
    IllegalTypeStructure = 4150,
    NotNullableCompareNullTrivial = 4151,
    AttributeTooFewArguments = 4153,
    UnificationCycle = 4155,
    KeysetSet = 4156,
    EqIncompatibleTypes = 4157,
    ContravariantThis = 4158,
    RequiredFieldIsOptional = 4163,
    FinalProperty = 4164,
    ArrayGetWithOptionalField = 4165,
    UnknownFieldDisallowedInShape = 4166,
    NullableCast = 4167,
    DollardollarLvalue = 4176,
    DuplicateUsingVar = 4178,
    IllegalDisposable = 4179,
    EscapingDisposable = 4180,
    InoutAnnotationMissing = 4182,
    InoutAnnotationUnexpected = 4183,
    InoutnessMismatch = 4184,
    StaticSyntheticMethod = 4185,
    TraitReuse = 4186,
    InvalidNewDisposable = 4187,
    EscapingDisposableParameter = 4188,
    AcceptDisposableInvariant = 4189,
    InvalidDisposableHint = 4190,
    XhpRequired = 4191,
    EscapingThis = 4192,
    IllegalXhpChild = 4193,
    MustExtendDisposable = 4194,
    InvalidIsAsExpressionHint = 4195,
    AssigningToConst = 4196,
    SelfConstParentNot = 4197,
    OverridingPropConstMismatch = 4204,
    InvalidReturnDisposable = 4205,
    InvalidDisposableReturnHint = 4206,
    ReturnDisposableMismatch = 4207,
    InoutArgumentBadType = 4208,
    EnumTypeTypedefNonnull = 4219,
    AmbiguousLambda = 4222,
    EllipsisStrictMode = 4223,
    UntypedLambdaStrictMode = 4224,
    OutputInWrongContext = 4226,
    StaticPropertyInWrongContext = 4228,
    WrongExpressionKindAttribute = 4231,
    DeclOverrideMissingHint = 4236,
    ExtendSealed = 4238,
    ComparisonInvalidTypes = 4240,
    ShapesKeyExistsAlwaysTrue = 4249,
    ShapesKeyExistsAlwaysFalse = 4250,
    ShapesMethodAccessWithNonExistentField = 4251,
    NonClassMember = 4252,
    AmbiguousObjectAccess = 4256,
    RePrefixedNonString = 4274,
    BadRegexPattern = 4275,
    LateInitWithDefault = 4277,
    OverrideMemoizeLSB = 4278,
    ClassVarTypeGenericParam = 4279,
    InvalidSwitchCaseValueType = 4280,
    StringCast = 4281,
    BadLateInitOverride = 4282,
    OverrideLSB = 4284,
    MultipleConcreteDefs = 4285,
    InvalidMoveUse = 4287,
    InvalidMoveTarget = 4288,
    UnexpectedTy = 4291,
    UnserializableType = 4292,
    OptionNull = 4295,
    UnknownObjectMember = 4296,
    UnknownType = 4297,
    InvalidArrayKeyRead = 4298,
    RedeclaringMissingMethod = 4301,
    InvalidEnforceableTypeArgument = 4302,
    RequireArgsReify = 4303,
    TypecheckerTimeout = 4304,
    InvalidReifiedArgument = 4305,
    GenericsNotAllowed = 4306,
    InvalidNewableTypeArgument = 4307,
    InvalidNewableTypeParamConstraints = 4308,
    NewWithoutNewable = 4309,
    NewClassReified = 4310,
    MemoizeReified = 4311,
    ConsistentConstructReified = 4312,
    MethodVariance = 4313,
    MissingXhpRequiredAttr = 4314,
    BadXhpAttrRequiredOverride = 4315,
    UnresolvedTypeVariable = 4317,
    InvalidSubString = 4318,
    InvalidArrayKeyConstraint = 4319,
    OverrideNoDefaultTypeconst = 4320,
    ShapeAccessWithNonExistentField = 4321,
    DisallowPHPArraysAttr = 4322,
    TypeConstraintViolation = 4323,
    IndexTypeMismatch = 4324,
    ExpectedStringlike = 4325,
    TypeConstantMismatch = 4326,
    ConstantDoesNotMatchEnumType = 4328,
    EnumConstraintMustBeArraykey = 4329,
    EnumSubtypeMustHaveCompatibleConstraint = 4330,
    ParameterDefaultValueWrongType = 4331,
    NewtypeAliasMustSatisfyConstraint = 4332,
    MissingReturnInNonVoidFunction = 4336,
    InoutReturnTypeMismatch = 4337,
    ClassConstantValueDoesNotMatchHint = 4338,
    ClassPropertyInitializerTypeDoesNotMatchHint = 4339,
    BadDeclOverride = 4340,
    BadMethodOverride = 4341,
    BadEnumExtends = 4342,
    XhpAttributeValueDoesNotMatchHint = 4343,
    TraitPropConstClass = 4344,
    EnumUnderlyingTypeMustBeArraykey = 4345,
    ClassGetReified = 4346,
    RequireGenericExplicit = 4347,
    ClassConstantTypeMismatch = 4348,
    RecordInitValueDoesNotMatchHint = 4351,
    AbstractTconstNotAllowed = 4352,
    NewAbstractRecord = 4353,
    RecordMissingRequiredField = 4354,
    RecordUnknownField = 4355,
    CyclicRecordDef = 4356,
    InvalidDestructure = 4357,
    StaticMethWithClassReifiedGeneric = 4358,
    SplatArrayRequired = 4359,
    SplatArrayVariadic = 4360,
    ExceptionOccurred = 4361,
    InvalidReifiedFunctionPointer = 4362,
    BadFunctionPointerConstruction = 4363,
    NotARecord = 4364,
    TraitReuseInsideClass = 4365,
    RedundantGeneric = 4366,
    ArrayAccessWrite = 4370,
    InvalidArrayKeyWrite = 4371,
    NullMemberWrite = 4372,
    NonObjectMemberWrite = 4373,
    ConcreteConstInterfaceOverride = 4374,
    MethCallerTrait = 4375,
    DuplicateInterface = 4377,
    TypeParameterNameAlreadyUsedNonShadow = 4378,
    IllegalInformationFlow = 4379,
    ContextImplicitPolicyLeakage = 4380,
    ReifiedFunctionReference = 4381,
    ClassMethAbstractCall = 4382,
    KindMismatch = 4383,
    UnboundNameTypeConstantAccess = 4384,
    UnknownInformationFlow = 4385,
    CallsiteCIPPMismatch = 4386,
    NonpureFunctionCall = 4387,
    IncompatibleEnumInclusion = 4388,
    RedeclaringClassishConstant = 4389,
    CallCoeffects = 4390,
    AbstractFunctionPointer = 4391,
    UnnecessaryAttribute = 4392,
    InheritedMethodCaseDiffers = 4393,
    EnumClassLabelUnknown = 4394,
    ViaLabelInvalidParameter = 4395,
    EnumClassLabelAsExpression = 4396,
    EnumClassLabelInvalidArgument = 4397,
    IFCInternalError = 4398,
    IFCExternalContravariant = 4399,
    IFCPolicyMismatch = 4400,
    OpCoeffects = 4401,
    ImplementsDynamic = 4402,
    SubtypeCoeffects = 4403,
    ImmutableLocal = 4404,
    EnumClassesReservedSyntax = 4405,
    NonsenseMemberSelection = 4406,
    ConsiderMethCaller = 4407,
    EnumSupertypingReservedSyntax = 4408,
    ReadonlyValueModified = 4409,
    ReadonlyMismatch = 4411,
    ExplicitReadonlyCast = 4412,
    ReadonlyMethodCall = 4413,
    StrictStrConcatTypeMismatch = 4414,
    StrictStrInterpTypeMismatch = 4415,
    InvalidMethCallerCallingConvention = 4416,
    UnsafeCast = 4417,
    ReadonlyException = 4418,
    InvalidTypeHint = 4419,
    ExperimentalExpressionTrees = 4420,
    ReturnsWithAndWithoutValue = 4421,
    NonVoidAnnotationOnReturnVoidFun = 4422,
    BitwiseMathInvalidArgument = 4423,
    CyclicClassConstant = 4424,
    PrivateDynamicRead = 4425,
    PrivateDynamicWrite = 4426,
    IncDecInvalidArgument = 4427,
    ReadonlyClosureCall = 4428,
    MathInvalidArgument = 4429,
    TypeconstConcreteConcreteOverride = 4430,
    PrivateMethCaller = 4431,
    ProtectedMethCaller = 4432,
    BadConditionalSupportDynamic = 4433,
    ReadonlyInvalidAsMut = 4434,
    InvalidKeysetValue = 4435,
    UnresolvedTypeVariableProjection = 4436,
    FunctionPointerWithViaLabel = 4437,
    InvalidEchoArgument = 4438,
    DiamondTraitMethod = 4439,
    ReifiedStaticMethodInExprTree = 4440,
    InvariantViolated = 4441,
    RigidTVarEscape = 4442,
    StrictEqValueIncompatibleTypes = 4443,
    ModuleError = 4444,
    SealedNotSubtype = 4445,
    ModuleHintError = 4446,
    MemoizeObjectWithoutGlobals = 4447,
    ExpressionTreeNonPublicProperty = 4448,
    CovariantIndexTypeMismatch = 4449,
}
impl TrivialDrop for Typing {}
arena_deserializer::impl_deserialize_in_arena!(Typing);

#[derive(
    Clone,
    Copy,
    Debug,
    Deserialize,
    Eq,
    EqModuloPos,
    FromOcamlRep,
    FromOcamlRepIn,
    Hash,
    NoPosHash,
    Ord,
    PartialEq,
    PartialOrd,
    Serialize,
    ToOcamlRep
)]
#[repr(C)]
pub enum Init {
    ForwardCompatibilityNotCurrent = 8001,
    ForwardCompatibilityBelowMinimum = 8002,
}
impl TrivialDrop for Init {}
arena_deserializer::impl_deserialize_in_arena!(Init);
