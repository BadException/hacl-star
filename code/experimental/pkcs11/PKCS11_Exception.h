/* This file was auto-generated by KreMLin! */
#include "kremlib.h"
#ifndef __PKCS11_Exception_H
#define __PKCS11_Exception_H


#include "PKCS11_DateTime.h"
#include "PKCS11_TypeDeclaration.h"
#include "PKCS11_Mechanism.h"
#include "PKCS11_Attribute.h"
#include "PKCS11_Cast.h"


typedef enum { CKR_GENERAL_ERROR, CKR_HOST_MEMORY, CKR_FUNCTION_FAILED } exp_ckr_general;

bool uu___is_CKR_GENERAL_ERROR(exp_ckr_general projectee);

bool uu___is_CKR_HOST_MEMORY(exp_ckr_general projectee);

bool uu___is_CKR_FUNCTION_FAILED(exp_ckr_general projectee);

typedef enum { CKR_SESSION_HANDLE_INVALID, CKR_DEVICE_REMOVED_Session, CKR_SESSION_CLOSED }
exp_ckr_session;

bool uu___is_CKR_SESSION_HANDLE_INVALID(exp_ckr_session projectee);

bool uu___is_CKR_DEVICE_REMOVED_Session(exp_ckr_session projectee);

bool uu___is_CKR_SESSION_CLOSED(exp_ckr_session projectee);

typedef enum {
  CKR_DEVICE_MEMORY,
  CKR_DEVICE_ERROR,
  CKR_TOKEN_NOT_PRESENT,
  CKR_DEVICE_REMOVED_Token
}
exp_ckr_token;

bool uu___is_CKR_DEVICE_MEMORY(exp_ckr_token projectee);

bool uu___is_CKR_DEVICE_ERROR(exp_ckr_token projectee);

bool uu___is_CKR_TOKEN_NOT_PRESENT(exp_ckr_token projectee);

bool uu___is_CKR_DEVICE_REMOVED_Token(exp_ckr_token projectee);

typedef enum { CKR_CANCEL } exp_ckr_callback;

bool uu___is_CKR_CANCEL(exp_ckr_callback projectee);

typedef enum { CKR_MUTEX_BAD, CKR_MUTEX_NOT_LOCKED } exp_ckr_mutex;

bool uu___is_CKR_MUTEX_BAD(exp_ckr_mutex projectee);

bool uu___is_CKR_MUTEX_NOT_LOCKED(exp_ckr_mutex projectee);

typedef enum {
  CKR_ACTION_PROHIBITED,
  CKR_ARGUMENTS_BAD,
  CKR_ATTRIBUTE_READ_ONLY,
  CKR_ATTRIBUTE_SENSITIVE,
  CKR_ATTRIBUTE_TYPE_INVALID,
  CKR_ATTRIBUTE_VALUE_INVALID,
  CKR_BUFFER_TOO_SMALL,
  CKR_CANT_LOCK,
  CKR_CRYPTOKI_ALREADY_INITIALIZED,
  CKR_CRYPTOKI_NOT_INITIALIZED,
  CKR_CURVE_NOT_SUPPORTED,
  CKR_DATA_INVALID,
  CKR_DATA_LEN_RANGE,
  CKR_DOMAIN_PARAMS_INVALID,
  CKR_ENCRYPTED_DATA_INVALID,
  CKR_ENCRYPTED_DATA_LEN_RANGE,
  CKR_EXCEEDED_MAX_ITERATIONS,
  CKR_FIPS_SELF_TEST_FAILED,
  CKR_FUNCTION_CANCELED,
  CKR_FUNCTION_NOT_PARALLEL,
  CKR_FUNCTION_NOT_SUPPORTED,
  CKR_FUNCTION_REJECTED,
  CKR_INFORMATION_SENSITIVE,
  CKR_KEY_CHANGED,
  CKR_KEY_FUNCTION_NOT_PERMITTED,
  CKR_KEY_HANDLE_INVALID,
  CKR_KEY_INDIGESTIBLE,
  CKR_KEY_NEEDED,
  CKR_KEY_NOT_NEEDED,
  CKR_KEY_NOT_WRAPPABLE,
  CKR_KEY_SIZE_RANGE,
  CKR_KEY_TYPE_INCONSISTENT,
  CKR_KEY_UNEXTRACTABLE,
  CKR_LIBRARY_LOAD_FAILED,
  CKR_MECHANISM_INVALID,
  CKR_MECHANISM_PARAM_INVALID,
  CKR_NEED_TO_CREATE_THREADS,
  CKR_NO_EVENT,
  CKR_OBJECT_HANDLE_INVALID,
  CKR_OPERATION_ACTIVE,
  CKR_OPERATION_NOT_INITIALIZED,
  CKR_PIN_EXPIRED,
  CKR_PIN_INCORRECT,
  CKR_PIN_INVALID,
  CKR_PIN_LEN_RANGE,
  CKR_PIN_LOCKED,
  CKR_PIN_TOO_WEAK,
  CKR_PUBLIC_KEY_INVALID,
  CKR_RANDOM_NO_RNG,
  CKR_RANDOM_SEED_NOT_SUPPORTED,
  CKR_SAVED_STATE_INVALID,
  CKR_SESSION_COUNT,
  CKR_SESSION_EXISTS,
  CKR_SESSION_PARALLEL_NOT_SUPPORTED,
  CKR_SESSION_READ_ONLY,
  CKR_SESSION_READ_ONLY_EXISTS,
  CKR_SESSION_READ_WRITE_SO_EXISTS,
  CKR_SIGNATURE_LEN_RANGE,
  CKR_SIGNATURE_INVALID,
  CKR_SLOT_ID_INVALID,
  CKR_STATE_UNSAVEABLE,
  CKR_TEMPLATE_INCOMPLETE,
  CKR_TEMPLATE_INCONSISTENT,
  CKR_TOKEN_NOT_RECOGNIZED,
  CKR_TOKEN_WRITE_PROTECTED,
  CKR_UNWRAPPING_KEY_HANDLE_INVALID,
  CKR_UNWRAPPING_KEY_SIZE_RANGE,
  CKR_UNWRAPPING_KEY_TYPE_INCONSISTENT,
  CKR_USER_ALREADY_LOGGED_IN,
  CKR_USER_ANOTHER_ALREADY_LOGGED_IN,
  CKR_USER_NOT_LOGGED_IN,
  CKR_USER_PIN_NOT_INITIALIZED,
  CKR_USER_TOO_MANY_TYPES,
  CKR_USER_TYPE_INVALID,
  CKR_WRAPPED_KEY_INVALID,
  CKR_WRAPPED_KEY_LEN_RANGE,
  CKR_WRAPPING_KEY_HANDLE_INVALID,
  CKR_WRAPPING_KEY_SIZE_RANGE,
  CKR_WRAPPING_KEY_TYPE_INCONSISTENT
}
exp_ckr_other;

bool uu___is_CKR_ACTION_PROHIBITED(exp_ckr_other projectee);

bool uu___is_CKR_ARGUMENTS_BAD(exp_ckr_other projectee);

bool uu___is_CKR_ATTRIBUTE_READ_ONLY(exp_ckr_other projectee);

bool uu___is_CKR_ATTRIBUTE_SENSITIVE(exp_ckr_other projectee);

bool uu___is_CKR_ATTRIBUTE_TYPE_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_ATTRIBUTE_VALUE_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_BUFFER_TOO_SMALL(exp_ckr_other projectee);

bool uu___is_CKR_CANT_LOCK(exp_ckr_other projectee);

bool uu___is_CKR_CRYPTOKI_ALREADY_INITIALIZED(exp_ckr_other projectee);

bool uu___is_CKR_CRYPTOKI_NOT_INITIALIZED(exp_ckr_other projectee);

bool uu___is_CKR_CURVE_NOT_SUPPORTED(exp_ckr_other projectee);

bool uu___is_CKR_DATA_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_DATA_LEN_RANGE(exp_ckr_other projectee);

bool uu___is_CKR_DOMAIN_PARAMS_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_ENCRYPTED_DATA_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_ENCRYPTED_DATA_LEN_RANGE(exp_ckr_other projectee);

bool uu___is_CKR_EXCEEDED_MAX_ITERATIONS(exp_ckr_other projectee);

bool uu___is_CKR_FIPS_SELF_TEST_FAILED(exp_ckr_other projectee);

bool uu___is_CKR_FUNCTION_CANCELED(exp_ckr_other projectee);

bool uu___is_CKR_FUNCTION_NOT_PARALLEL(exp_ckr_other projectee);

bool uu___is_CKR_FUNCTION_NOT_SUPPORTED(exp_ckr_other projectee);

bool uu___is_CKR_FUNCTION_REJECTED(exp_ckr_other projectee);

bool uu___is_CKR_INFORMATION_SENSITIVE(exp_ckr_other projectee);

bool uu___is_CKR_KEY_CHANGED(exp_ckr_other projectee);

bool uu___is_CKR_KEY_FUNCTION_NOT_PERMITTED(exp_ckr_other projectee);

bool uu___is_CKR_KEY_HANDLE_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_KEY_INDIGESTIBLE(exp_ckr_other projectee);

bool uu___is_CKR_KEY_NEEDED(exp_ckr_other projectee);

bool uu___is_CKR_KEY_NOT_NEEDED(exp_ckr_other projectee);

bool uu___is_CKR_KEY_NOT_WRAPPABLE(exp_ckr_other projectee);

bool uu___is_CKR_KEY_SIZE_RANGE(exp_ckr_other projectee);

bool uu___is_CKR_KEY_TYPE_INCONSISTENT(exp_ckr_other projectee);

bool uu___is_CKR_KEY_UNEXTRACTABLE(exp_ckr_other projectee);

bool uu___is_CKR_LIBRARY_LOAD_FAILED(exp_ckr_other projectee);

bool uu___is_CKR_MECHANISM_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_MECHANISM_PARAM_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_NEED_TO_CREATE_THREADS(exp_ckr_other projectee);

bool uu___is_CKR_NO_EVENT(exp_ckr_other projectee);

bool uu___is_CKR_OBJECT_HANDLE_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_OPERATION_ACTIVE(exp_ckr_other projectee);

bool uu___is_CKR_OPERATION_NOT_INITIALIZED(exp_ckr_other projectee);

bool uu___is_CKR_PIN_EXPIRED(exp_ckr_other projectee);

bool uu___is_CKR_PIN_INCORRECT(exp_ckr_other projectee);

bool uu___is_CKR_PIN_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_PIN_LEN_RANGE(exp_ckr_other projectee);

bool uu___is_CKR_PIN_LOCKED(exp_ckr_other projectee);

bool uu___is_CKR_PIN_TOO_WEAK(exp_ckr_other projectee);

bool uu___is_CKR_PUBLIC_KEY_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_RANDOM_NO_RNG(exp_ckr_other projectee);

bool uu___is_CKR_RANDOM_SEED_NOT_SUPPORTED(exp_ckr_other projectee);

bool uu___is_CKR_SAVED_STATE_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_SESSION_COUNT(exp_ckr_other projectee);

bool uu___is_CKR_SESSION_EXISTS(exp_ckr_other projectee);

bool uu___is_CKR_SESSION_PARALLEL_NOT_SUPPORTED(exp_ckr_other projectee);

bool uu___is_CKR_SESSION_READ_ONLY(exp_ckr_other projectee);

bool uu___is_CKR_SESSION_READ_ONLY_EXISTS(exp_ckr_other projectee);

bool uu___is_CKR_SESSION_READ_WRITE_SO_EXISTS(exp_ckr_other projectee);

bool uu___is_CKR_SIGNATURE_LEN_RANGE(exp_ckr_other projectee);

bool uu___is_CKR_SIGNATURE_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_SLOT_ID_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_STATE_UNSAVEABLE(exp_ckr_other projectee);

bool uu___is_CKR_TEMPLATE_INCOMPLETE(exp_ckr_other projectee);

bool uu___is_CKR_TEMPLATE_INCONSISTENT(exp_ckr_other projectee);

bool uu___is_CKR_TOKEN_NOT_RECOGNIZED(exp_ckr_other projectee);

bool uu___is_CKR_TOKEN_WRITE_PROTECTED(exp_ckr_other projectee);

bool uu___is_CKR_UNWRAPPING_KEY_HANDLE_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_UNWRAPPING_KEY_SIZE_RANGE(exp_ckr_other projectee);

bool uu___is_CKR_UNWRAPPING_KEY_TYPE_INCONSISTENT(exp_ckr_other projectee);

bool uu___is_CKR_USER_ALREADY_LOGGED_IN(exp_ckr_other projectee);

bool uu___is_CKR_USER_ANOTHER_ALREADY_LOGGED_IN(exp_ckr_other projectee);

bool uu___is_CKR_USER_NOT_LOGGED_IN(exp_ckr_other projectee);

bool uu___is_CKR_USER_PIN_NOT_INITIALIZED(exp_ckr_other projectee);

bool uu___is_CKR_USER_TOO_MANY_TYPES(exp_ckr_other projectee);

bool uu___is_CKR_USER_TYPE_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_WRAPPED_KEY_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_WRAPPED_KEY_LEN_RANGE(exp_ckr_other projectee);

bool uu___is_CKR_WRAPPING_KEY_HANDLE_INVALID(exp_ckr_other projectee);

bool uu___is_CKR_WRAPPING_KEY_SIZE_RANGE(exp_ckr_other projectee);

bool uu___is_CKR_WRAPPING_KEY_TYPE_INCONSISTENT(exp_ckr_other projectee);

typedef enum { G, S, T, C, M, O, TestExc } exception_t_tags;

typedef struct 
{
  exception_t_tags tag;
  union {
    struct  { exp_ckr_general exp; } case_G;
    struct  { exp_ckr_session exp; } case_S;
    struct  { exp_ckr_token exp; } case_T;
    struct  { exp_ckr_callback exp; } case_C;
    struct  { exp_ckr_mutex exp; } case_M;
    struct  { exp_ckr_other exp; } case_O;
  }
  ;
}
exception_t;

bool uu___is_G(exception_t projectee);

exp_ckr_general __proj__G__item__exp(exception_t projectee);

bool uu___is_S(exception_t projectee);

exp_ckr_session __proj__S__item__exp(exception_t projectee);

bool uu___is_T(exception_t projectee);

exp_ckr_token __proj__T__item__exp(exception_t projectee);

bool uu___is_C(exception_t projectee);

exp_ckr_callback __proj__C__item__exp(exception_t projectee);

bool uu___is_M(exception_t projectee);

exp_ckr_mutex __proj__M__item__exp(exception_t projectee);

bool uu___is_O(exception_t projectee);

exp_ckr_other __proj__O__item__exp(exception_t projectee);

bool uu___is_TestExc(exception_t projectee);
#endif