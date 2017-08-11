# 1 "Instrumentation code beginning"
struct __CvT__module_info____                                   
{                                                               
    char const **file;                                          
    int files;                                                  
    void const **str;   // string version of file names above   
    int *  line;  // pairs of ints stored here                  
                  // the first is the index into file           
                  // the second is the line number in that file 
    int lines;    // count of PAIRS not ints at line            
                                                                
    int struct_size;    // validates this struct                
    int * inst;   // counts of instrumented lines per file      
                                                                
    void construct();                                           
                                                                
    __CvT__module_info____(char const **f, int fs,              
                           int   *l, int ls,                    
                           int *i                               
                          )                                     
    : file(f), files(fs), str(0), line(l), lines(ls),           
      struct_size(sizeof(__CvT__module_info____)), inst(i)      
    {                                                           
      construct();                                              
    }                                                           
                                                                
    ~__CvT__module_info____();                                  
                                                                
};

static __CvT__module_info____* __CvT_miT;
extern void __CvT__record_line____(__CvT__module_info____ const*, int,int);
# 1 "hard.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "/usr/include/stdc-predef.h" 1 3 4 
# 1 "<command-line>" 2 
# 1 "hard.c" 
# 1 "/usr/include/c++/4.8/string" 1 3 
# 36 "/usr/include/c++/4.8/string" 3 

# 37 "/usr/include/c++/4.8/string" 3 

# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 1 3 
# 184 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 3 
namespace std 
{ 
typedef long unsigned int size_t ; 
typedef long int ptrdiff_t ; 




} 
# 426 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/os_defines.h" 1 3 
# 39 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/os_defines.h" 3 
# 1 "/usr/include/features.h" 1 3 4 
# 374 "/usr/include/features.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4 
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4 
# 375 "/usr/include/features.h" 2 3 4 
# 398 "/usr/include/features.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4 
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4 
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4 
# 399 "/usr/include/features.h" 2 3 4 
# 40 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/os_defines.h" 2 3 
# 427 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 2 3 


# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/cpu_defines.h" 1 3 
# 430 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h" 2 3 
# 39 "/usr/include/c++/4.8/string" 2 3 
# 1 "/usr/include/c++/4.8/bits/stringfwd.h" 1 3 
# 37 "/usr/include/c++/4.8/bits/stringfwd.h" 3 

# 38 "/usr/include/c++/4.8/bits/stringfwd.h" 3 


# 1 "/usr/include/c++/4.8/bits/memoryfwd.h" 1 3 
# 46 "/usr/include/c++/4.8/bits/memoryfwd.h" 3 

# 47 "/usr/include/c++/4.8/bits/memoryfwd.h" 3 



namespace std 
{ 

# 63 "/usr/include/c++/4.8/bits/memoryfwd.h" 3 
template < typename > 
class allocator ; 

template <> 
class allocator < void > ; 


template < typename , typename > 
struct uses_allocator ; 




} 
# 41 "/usr/include/c++/4.8/bits/stringfwd.h" 2 3 

namespace std 
{ 








template < class _CharT > 
struct char_traits ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_string ; 

template <> struct char_traits < char > ; 


typedef basic_string < char > string ; 


template <> struct char_traits < wchar_t > ; 


typedef basic_string < wchar_t > wstring ; 
# 86 "/usr/include/c++/4.8/bits/stringfwd.h" 3 

} 
# 40 "/usr/include/c++/4.8/string" 2 3 
# 1 "/usr/include/c++/4.8/bits/char_traits.h" 1 3 
# 37 "/usr/include/c++/4.8/bits/char_traits.h" 3 

# 38 "/usr/include/c++/4.8/bits/char_traits.h" 3 

# 1 "/usr/include/c++/4.8/bits/stl_algobase.h" 1 3 
# 60 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
# 1 "/usr/include/c++/4.8/bits/functexcept.h" 1 3 
# 40 "/usr/include/c++/4.8/bits/functexcept.h" 3 
# 1 "/usr/include/c++/4.8/bits/exception_defines.h" 1 3 
# 41 "/usr/include/c++/4.8/bits/functexcept.h" 2 3 

namespace std 
{ 



void 
__throw_bad_exception ( void ) ; 


void 
__throw_bad_alloc ( void ) ; 


void 
__throw_bad_cast ( void ) ; 

void 
__throw_bad_typeid ( void ) ; 


void 
__throw_logic_error ( const char * ) ; 

void 
__throw_domain_error ( const char * ) ; 

void 
__throw_invalid_argument ( const char * ) ; 

void 
__throw_length_error ( const char * ) ; 

void 
__throw_out_of_range ( const char * ) ; 

void 
__throw_runtime_error ( const char * ) ; 

void 
__throw_range_error ( const char * ) ; 

void 
__throw_overflow_error ( const char * ) ; 

void 
__throw_underflow_error ( const char * ) ; 


void 
__throw_ios_failure ( const char * ) ; 

void 
__throw_system_error ( int ) ; 

void 
__throw_future_error ( int ) ; 


void 
__throw_bad_function_call ( ) ; 


} 
# 61 "/usr/include/c++/4.8/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 1 3 
# 35 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3 

# 36 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3 
# 68 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3 
namespace __gnu_cxx 
{ 


template < typename _Iterator , typename _Container > 
class __normal_iterator ; 


} 

namespace std 
{ 


struct __true_type { } ; 
struct __false_type { } ; 

template < bool > 
struct __truth_type 
{ typedef __false_type __type ; } ; 

template <> 
struct __truth_type < true > 
{ typedef __true_type __type ; } ; 



template < class _Sp , class _Tp > 
struct __traitor 
{ 
enum { __value = bool ( _Sp :: __value ) || bool ( _Tp :: __value ) } ; 
typedef typename __truth_type < __value >:: __type __type ; 
} ; 


template < typename , typename > 
struct __are_same 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template < typename _Tp > 
struct __are_same < _Tp , _Tp > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template < typename _Tp > 
struct __is_void 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template <> 
struct __is_void < void > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_integer 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 




template <> 
struct __is_integer < bool > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < signed char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template <> 
struct __is_integer < wchar_t > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 
# 198 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3 
template <> 
struct __is_integer < short > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned short > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < int > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned int > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < long long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_integer < unsigned long long > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_floating 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 


template <> 
struct __is_floating < float > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_floating < double > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_floating < long double > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_pointer 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template < typename _Tp > 
struct __is_pointer < _Tp *> 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_normal_iterator 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template < typename _Iterator , typename _Container > 
struct __is_normal_iterator < __gnu_cxx :: __normal_iterator < _Iterator , 
_Container > > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_arithmetic 
: public __traitor < __is_integer < _Tp > , __is_floating < _Tp > > 
{ } ; 




template < typename _Tp > 
struct __is_fundamental 
: public __traitor < __is_void < _Tp > , __is_arithmetic < _Tp > > 
{ } ; 




template < typename _Tp > 
struct __is_scalar 
: public __traitor < __is_arithmetic < _Tp > , __is_pointer < _Tp > > 
{ } ; 




template < typename _Tp > 
struct __is_char 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template <> 
struct __is_char < char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template <> 
struct __is_char < wchar_t > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 


template < typename _Tp > 
struct __is_byte 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 

template <> 
struct __is_byte < char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_byte < signed char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 

template <> 
struct __is_byte < unsigned char > 
{ 
enum { __value = 1 } ; 
typedef __true_type __type ; 
} ; 




template < typename _Tp > 
struct __is_move_iterator 
{ 
enum { __value = 0 } ; 
typedef __false_type __type ; 
} ; 
# 421 "/usr/include/c++/4.8/bits/cpp_type_traits.h" 3 

} 
# 62 "/usr/include/c++/4.8/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/4.8/ext/type_traits.h" 1 3 
# 32 "/usr/include/c++/4.8/ext/type_traits.h" 3 

# 33 "/usr/include/c++/4.8/ext/type_traits.h" 3 




namespace __gnu_cxx 
{ 



template < bool , typename > 
struct __enable_if 
{ } ; 

template < typename _Tp > 
struct __enable_if < true , _Tp > 
{ typedef _Tp __type ; } ; 



template < bool _Cond , typename _Iftrue , typename _Iffalse > 
struct __conditional_type 
{ typedef _Iftrue __type ; } ; 

template < typename _Iftrue , typename _Iffalse > 
struct __conditional_type < false , _Iftrue , _Iffalse > 
{ typedef _Iffalse __type ; } ; 



template < typename _Tp > 
struct __add_unsigned 
{ 
private : 
typedef __enable_if < std :: __is_integer < _Tp >:: __value , _Tp > __if_type ; 

public : 
typedef typename __if_type :: __type __type ; 
} ; 

template <> 
struct __add_unsigned < char > 
{ typedef unsigned char __type ; } ; 

template <> 
struct __add_unsigned < signed char > 
{ typedef unsigned char __type ; } ; 

template <> 
struct __add_unsigned < short > 
{ typedef unsigned short __type ; } ; 

template <> 
struct __add_unsigned < int > 
{ typedef unsigned int __type ; } ; 

template <> 
struct __add_unsigned < long > 
{ typedef unsigned long __type ; } ; 

template <> 
struct __add_unsigned < long long > 
{ typedef unsigned long long __type ; } ; 


template <> 
struct __add_unsigned < bool > ; 

template <> 
struct __add_unsigned < wchar_t > ; 



template < typename _Tp > 
struct __remove_unsigned 
{ 
private : 
typedef __enable_if < std :: __is_integer < _Tp >:: __value , _Tp > __if_type ; 

public : 
typedef typename __if_type :: __type __type ; 
} ; 

template <> 
struct __remove_unsigned < char > 
{ typedef signed char __type ; } ; 

template <> 
struct __remove_unsigned < unsigned char > 
{ typedef signed char __type ; } ; 

template <> 
struct __remove_unsigned < unsigned short > 
{ typedef short __type ; } ; 

template <> 
struct __remove_unsigned < unsigned int > 
{ typedef int __type ; } ; 

template <> 
struct __remove_unsigned < unsigned long > 
{ typedef long __type ; } ; 

template <> 
struct __remove_unsigned < unsigned long long > 
{ typedef long long __type ; } ; 


template <> 
struct __remove_unsigned < bool > ; 

template <> 
struct __remove_unsigned < wchar_t > ; 



template < typename _Type > 
inline bool 
__is_null_pointer ( _Type * __ptr ) 
{ __CvT__record_line____(__CvT_miT,20,151);return __ptr == 0 ; } 

template < typename _Type > 
inline bool 
__is_null_pointer ( _Type ) 
{ __CvT__record_line____(__CvT_miT,20,156);return false ; } 



template < typename _Tp , bool = std :: __is_integer < _Tp >:: __value > 
struct __promote 
{ typedef double __type ; } ; 




template < typename _Tp > 
struct __promote < _Tp , false > 
{ } ; 

template <> 
struct __promote < long double > 
{ typedef long double __type ; } ; 

template <> 
struct __promote < double > 
{ typedef double __type ; } ; 

template <> 
struct __promote < float > 
{ typedef float __type ; } ; 

template < typename _Tp , typename _Up , 
typename _Tp2 = typename __promote < _Tp >:: __type , 
typename _Up2 = typename __promote < _Up >:: __type > 
struct __promote_2 
{ 
typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) ) __type ; 
} ; 

template < typename _Tp , typename _Up , typename _Vp , 
typename _Tp2 = typename __promote < _Tp >:: __type , 
typename _Up2 = typename __promote < _Up >:: __type , 
typename _Vp2 = typename __promote < _Vp >:: __type > 
struct __promote_3 
{ 
typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) + _Vp2 ( ) ) __type ; 
} ; 

template < typename _Tp , typename _Up , typename _Vp , typename _Wp , 
typename _Tp2 = typename __promote < _Tp >:: __type , 
typename _Up2 = typename __promote < _Up >:: __type , 
typename _Vp2 = typename __promote < _Vp >:: __type , 
typename _Wp2 = typename __promote < _Wp >:: __type > 
struct __promote_4 
{ 
typedef __typeof__ ( _Tp2 ( ) + _Up2 ( ) + _Vp2 ( ) + _Wp2 ( ) ) __type ; 
} ; 


} 
# 63 "/usr/include/c++/4.8/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/4.8/ext/numeric_traits.h" 1 3 
# 32 "/usr/include/c++/4.8/ext/numeric_traits.h" 3 

# 33 "/usr/include/c++/4.8/ext/numeric_traits.h" 3 




namespace __gnu_cxx 
{ 

# 54 "/usr/include/c++/4.8/ext/numeric_traits.h" 3 
template < typename _Value > 
struct __numeric_traits_integer 
{ 

static const _Value __min = ( ( ( _Value ) ( - 1 ) < 0 ) ? ( _Value ) 1 << ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) : ( _Value ) 0 ) ; 
static const _Value __max = ( ( ( _Value ) ( - 1 ) < 0 ) ? ( ( ( ( ( _Value ) 1 << ( ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) - 1 ) ) - 1 ) << 1 ) + 1 ) : ~ ( _Value ) 0 ) ; 



static const bool __is_signed = ( ( _Value ) ( - 1 ) < 0 ) ; 
static const int __digits = ( sizeof ( _Value ) * 8 - ( ( _Value ) ( - 1 ) < 0 ) ) ; 
} ; 

template < typename _Value > 
const _Value __numeric_traits_integer < _Value >:: __min ; 

template < typename _Value > 
const _Value __numeric_traits_integer < _Value >:: __max ; 

template < typename _Value > 
const bool __numeric_traits_integer < _Value >:: __is_signed ; 

template < typename _Value > 
const int __numeric_traits_integer < _Value >:: __digits ; 
# 99 "/usr/include/c++/4.8/ext/numeric_traits.h" 3 
template < typename _Value > 
struct __numeric_traits_floating 
{ 

static const int __max_digits10 = ( 2 + ( std :: __are_same < _Value , float >:: __value ? 24 : std :: __are_same < _Value , double >:: __value ? 53 : 64 ) * 643L / 2136 ) ; 


static const bool __is_signed = true ; 
static const int __digits10 = ( std :: __are_same < _Value , float >:: __value ? 6 : std :: __are_same < _Value , double >:: __value ? 15 : 18 ) ; 
static const int __max_exponent10 = ( std :: __are_same < _Value , float >:: __value ? 38 : std :: __are_same < _Value , double >:: __value ? 308 : 4932 ) ; 
} ; 

template < typename _Value > 
const int __numeric_traits_floating < _Value >:: __max_digits10 ; 

template < typename _Value > 
const bool __numeric_traits_floating < _Value >:: __is_signed ; 

template < typename _Value > 
const int __numeric_traits_floating < _Value >:: __digits10 ; 

template < typename _Value > 
const int __numeric_traits_floating < _Value >:: __max_exponent10 ; 

template < typename _Value > 
struct __numeric_traits 
: public __conditional_type < std :: __is_integer < _Value >:: __value , 
__numeric_traits_integer < _Value > , 
__numeric_traits_floating < _Value > >:: __type 
{ } ; 


} 
# 64 "/usr/include/c++/4.8/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/4.8/bits/stl_pair.h" 1 3 
# 59 "/usr/include/c++/4.8/bits/stl_pair.h" 3 
# 1 "/usr/include/c++/4.8/bits/move.h" 1 3 
# 34 "/usr/include/c++/4.8/bits/move.h" 3 
# 1 "/usr/include/c++/4.8/bits/concept_check.h" 1 3 
# 33 "/usr/include/c++/4.8/bits/concept_check.h" 3 

# 34 "/usr/include/c++/4.8/bits/concept_check.h" 3 
# 35 "/usr/include/c++/4.8/bits/move.h" 2 3 

namespace std 
{ 







template < typename _Tp > 
inline _Tp * 
__addressof ( _Tp & __r ) 
{ __CvT__record_line____(__CvT_miT,23,48);
__CvT__record_line____(__CvT_miT,23,49);return reinterpret_cast < _Tp *> 
( & const_cast < char &> ( reinterpret_cast < const volatile char &> ( __r ) ) ) ; 
} 


} 
# 149 "/usr/include/c++/4.8/bits/move.h" 3 
namespace std 
{ 

# 164 "/usr/include/c++/4.8/bits/move.h" 3 
template < typename _Tp > 
inline void 
swap ( _Tp & __a , _Tp & __b ) 




{ 



_Tp __tmp = ( __a ) ; 
__a = ( __b ) ; 
__b = ( __tmp ) ; 
} 




template < typename _Tp , size_t _Nm > 
inline void 
swap ( _Tp ( & __a ) [ _Nm ] , _Tp ( & __b ) [ _Nm ] ) 



{ __CvT__record_line____(__CvT_miT,23,189);
__CvT__record_line____(__CvT_miT,23,190);for ( size_t __n = 0 ; __n < _Nm ; ++ __n ) 
{__CvT__record_line____(__CvT_miT,23,191);swap ( __a [ __n ] , __b [ __n ] ) ; 
}} 



} 
# 60 "/usr/include/c++/4.8/bits/stl_pair.h" 2 3 





namespace std 
{ 

# 95 "/usr/include/c++/4.8/bits/stl_pair.h" 3 
template < class _T1 , class _T2 > 
struct pair 
{ 
typedef _T1 first_type ; 
typedef _T2 second_type ; 

_T1 first ; 
_T2 second ; 





pair ( ) 
: first ( ) , second ( ) { __CvT__record_line____(__CvT_miT,22,109);} 


pair ( const _T1 & __a , const _T2 & __b ) 
: first ( __a ) , second ( __b ) { __CvT__record_line____(__CvT_miT,22,113);} 



template < class _U1 , class _U2 > 
pair ( const pair < _U1 , _U2 >& __p ) 
: first ( __p . first ) , second ( __p . second ) { __CvT__record_line____(__CvT_miT,22,119);} 
# 209 "/usr/include/c++/4.8/bits/stl_pair.h" 3 
} ; 


template < class _T1 , class _T2 > 
inline bool 
operator == ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,215);return __x . first == __y . first && __x . second == __y . second ; } 


template < class _T1 , class _T2 > 
inline bool 
operator < ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,221);return __x . first < __y . first 
|| ( ! ( __y . first < __x . first ) && __x . second < __y . second ) ; } 


template < class _T1 , class _T2 > 
inline bool 
operator != ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,228);return ! ( __x == __y ) ; } 


template < class _T1 , class _T2 > 
inline bool 
operator > ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,234);return __y < __x ; } 


template < class _T1 , class _T2 > 
inline bool 
operator <= ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,240);return ! ( __y < __x ) ; } 


template < class _T1 , class _T2 > 
inline bool 
operator >= ( const pair < _T1 , _T2 >& __x , const pair < _T1 , _T2 >& __y ) 
{ __CvT__record_line____(__CvT_miT,22,246);return ! ( __x < __y ) ; } 
# 284 "/usr/include/c++/4.8/bits/stl_pair.h" 3 
template < class _T1 , class _T2 > 
inline pair < _T1 , _T2 > 
make_pair ( _T1 __x , _T2 __y ) 
{ __CvT__record_line____(__CvT_miT,22,287);return pair < _T1 , _T2 > ( __x , __y ) ; } 





} 
# 65 "/usr/include/c++/4.8/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 1 3 
# 62 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3 

# 63 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3 







namespace std 
{ 

# 89 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3 
struct input_iterator_tag { } ; 


struct output_iterator_tag { } ; 


struct forward_iterator_tag : public input_iterator_tag { } ; 



struct bidirectional_iterator_tag : public forward_iterator_tag { } ; 



struct random_access_iterator_tag : public bidirectional_iterator_tag { } ; 
# 116 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3 
template < typename _Category , typename _Tp , typename _Distance = ptrdiff_t , 
typename _Pointer = _Tp * , typename _Reference = _Tp &> 
struct iterator 
{ 

typedef _Category iterator_category ; 

typedef _Tp value_type ; 

typedef _Distance difference_type ; 

typedef _Pointer pointer ; 

typedef _Reference reference ; 
} ; 
# 162 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3 
template < typename _Iterator > 
struct iterator_traits 
{ 
typedef typename _Iterator :: iterator_category iterator_category ; 
typedef typename _Iterator :: value_type value_type ; 
typedef typename _Iterator :: difference_type difference_type ; 
typedef typename _Iterator :: pointer pointer ; 
typedef typename _Iterator :: reference reference ; 
} ; 



template < typename _Tp > 
struct iterator_traits < _Tp *> 
{ 
typedef random_access_iterator_tag iterator_category ; 
typedef _Tp value_type ; 
typedef ptrdiff_t difference_type ; 
typedef _Tp * pointer ; 
typedef _Tp & reference ; 
} ; 


template < typename _Tp > 
struct iterator_traits < const _Tp *> 
{ 
typedef random_access_iterator_tag iterator_category ; 
typedef _Tp value_type ; 
typedef ptrdiff_t difference_type ; 
typedef const _Tp * pointer ; 
typedef const _Tp & reference ; 
} ; 





template < typename _Iter > 
inline typename iterator_traits < _Iter >:: iterator_category 
__iterator_category ( const _Iter & ) 
{ return typename iterator_traits < _Iter >:: iterator_category ( ) ; } 





template < typename _Iterator , bool _HasBase > 
struct _Iter_base 
{ 
typedef _Iterator iterator_type ; 
static iterator_type _S_base ( _Iterator __it ) 
{ return __it ; } 
} ; 

template < typename _Iterator > 
struct _Iter_base < _Iterator , true > 
{ 
typedef typename _Iterator :: iterator_type iterator_type ; 
static iterator_type _S_base ( _Iterator __it ) 
{ return __it . base ( ) ; } 
} ; 
# 232 "/usr/include/c++/4.8/bits/stl_iterator_base_types.h" 3 

} 
# 66 "/usr/include/c++/4.8/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 1 3 
# 62 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 3 

# 63 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 3 


# 1 "/usr/include/c++/4.8/debug/debug.h" 1 3 
# 46 "/usr/include/c++/4.8/debug/debug.h" 3 
namespace std 
{ 
namespace __debug { } 
} 




namespace __gnu_debug 
{ 
using namespace std :: __debug ; 
} 
# 66 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 2 3 

namespace std 
{ 


template < typename _InputIterator > 
inline typename iterator_traits < _InputIterator >:: difference_type 
__distance ( _InputIterator __first , _InputIterator __last , 
input_iterator_tag ) 
{ 



typename iterator_traits < _InputIterator >:: difference_type __n = 0 ; 
while ( __first != __last ) 
{ 
++ __first ; 
++ __n ; 
} 
return __n ; 
} 

template < typename _RandomAccessIterator > 
inline typename iterator_traits < _RandomAccessIterator >:: difference_type 
__distance ( _RandomAccessIterator __first , _RandomAccessIterator __last , 
random_access_iterator_tag ) 
{ 



return __last - __first ; 
} 
# 112 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 3 
template < typename _InputIterator > 
inline typename iterator_traits < _InputIterator >:: difference_type 
distance ( _InputIterator __first , _InputIterator __last ) 
{ 

return std :: __distance ( __first , __last , 
std :: __iterator_category ( __first ) ) ; 
} 

template < typename _InputIterator , typename _Distance > 
inline void 
__advance ( _InputIterator & __i , _Distance __n , input_iterator_tag ) 
{ 


; 
while ( __n -- ) 
++ __i ; 
} 

template < typename _BidirectionalIterator , typename _Distance > 
inline void 
__advance ( _BidirectionalIterator & __i , _Distance __n , 
bidirectional_iterator_tag ) 
{ 



if ( __n > 0 ) 
while ( __n -- ) 
++ __i ; 
else 
while ( __n ++ ) 
-- __i ; 
} 

template < typename _RandomAccessIterator , typename _Distance > 
inline void 
__advance ( _RandomAccessIterator & __i , _Distance __n , 
random_access_iterator_tag ) 
{ 



__i += __n ; 
} 
# 171 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 3 
template < typename _InputIterator , typename _Distance > 
inline void 
advance ( _InputIterator & __i , _Distance __n ) 
{ 

typename iterator_traits < _InputIterator >:: difference_type __d = __n ; 
std :: __advance ( __i , __d , std :: __iterator_category ( __i ) ) ; 
} 
# 202 "/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h" 3 

} 
# 67 "/usr/include/c++/4.8/bits/stl_algobase.h" 2 3 
# 1 "/usr/include/c++/4.8/bits/stl_iterator.h" 1 3 
# 67 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
namespace std 
{ 

# 95 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
template < typename _Iterator > 
class reverse_iterator 
: public iterator < typename iterator_traits < _Iterator >:: iterator_category , 
typename iterator_traits < _Iterator >:: value_type , 
typename iterator_traits < _Iterator >:: difference_type , 
typename iterator_traits < _Iterator >:: pointer , 
typename iterator_traits < _Iterator >:: reference > 
{ 
protected : 
_Iterator current ; 

typedef iterator_traits < _Iterator > __traits_type ; 

public : 
typedef _Iterator iterator_type ; 
typedef typename __traits_type :: difference_type difference_type ; 
typedef typename __traits_type :: pointer pointer ; 
typedef typename __traits_type :: reference reference ; 







reverse_iterator ( ) : current ( ) { } 




explicit 
reverse_iterator ( iterator_type __x ) : current ( __x ) { } 




reverse_iterator ( const reverse_iterator & __x ) 
: current ( __x . current ) { } 





template < typename _Iter > 
reverse_iterator ( const reverse_iterator < _Iter >& __x ) 
: current ( __x . base ( ) ) { } 




iterator_type 
base ( ) const 
{ return current ; } 
# 159 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
reference 
operator * ( ) const 
{ 
_Iterator __tmp = current ; 
return *-- __tmp ; 
} 






pointer 
operator -> ( ) const 
{ return & ( operator * ( ) ) ; } 






reverse_iterator & 
operator ++ ( ) 
{ 
-- current ; 
return * this ; 
} 






reverse_iterator 
operator ++ ( int ) 
{ 
reverse_iterator __tmp = * this ; 
-- current ; 
return __tmp ; 
} 






reverse_iterator & 
operator -- ( ) 
{ 
++ current ; 
return * this ; 
} 






reverse_iterator 
operator -- ( int ) 
{ 
reverse_iterator __tmp = * this ; 
++ current ; 
return __tmp ; 
} 






reverse_iterator 
operator + ( difference_type __n ) const 
{ return reverse_iterator ( current - __n ) ; } 







reverse_iterator & 
operator += ( difference_type __n ) 
{ 
current -= __n ; 
return * this ; 
} 






reverse_iterator 
operator - ( difference_type __n ) const 
{ return reverse_iterator ( current + __n ) ; } 







reverse_iterator & 
operator -= ( difference_type __n ) 
{ 
current += __n ; 
return * this ; 
} 






reference 
operator [ ] ( difference_type __n ) const 
{ return * ( * this + __n ) ; } 
} ; 
# 289 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
template < typename _Iterator > 
inline bool 
operator == ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __x . base ( ) == __y . base ( ) ; } 

template < typename _Iterator > 
inline bool 
operator < ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __y . base ( ) < __x . base ( ) ; } 

template < typename _Iterator > 
inline bool 
operator != ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return ! ( __x == __y ) ; } 

template < typename _Iterator > 
inline bool 
operator > ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __y < __x ; } 

template < typename _Iterator > 
inline bool 
operator <= ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return ! ( __y < __x ) ; } 

template < typename _Iterator > 
inline bool 
operator >= ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return ! ( __x < __y ) ; } 

template < typename _Iterator > 
inline typename reverse_iterator < _Iterator >:: difference_type 
operator - ( const reverse_iterator < _Iterator >& __x , 
const reverse_iterator < _Iterator >& __y ) 
{ return __y . base ( ) - __x . base ( ) ; } 

template < typename _Iterator > 
inline reverse_iterator < _Iterator > 
operator + ( typename reverse_iterator < _Iterator >:: difference_type __n , 
const reverse_iterator < _Iterator >& __x ) 
{ return reverse_iterator < _Iterator > ( __x . base ( ) - __n ) ; } 



template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator == ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return __x . base ( ) == __y . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator < ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return __y . base ( ) < __x . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator != ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return ! ( __x == __y ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator > ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return __y < __x ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator <= ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return ! ( __y < __x ) ; } 

template < typename _IteratorL , typename _IteratorR > 
inline bool 
operator >= ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 
{ return ! ( __x < __y ) ; } 

template < typename _IteratorL , typename _IteratorR > 







inline typename reverse_iterator < _IteratorL >:: difference_type 
operator - ( const reverse_iterator < _IteratorL >& __x , 
const reverse_iterator < _IteratorR >& __y ) 

{ return __y . base ( ) - __x . base ( ) ; } 
# 401 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
template < typename _Container > 
class back_insert_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
protected : 
_Container * container ; 

public : 

typedef _Container container_type ; 


explicit 
back_insert_iterator ( _Container & __x ) : container ( & __x ) { } 
# 428 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
back_insert_iterator & 
operator = ( typename _Container :: const_reference __value ) 
{ 
container -> push_back ( __value ) ; 
return * this ; 
} 
# 451 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
back_insert_iterator & 
operator * ( ) 
{ return * this ; } 


back_insert_iterator & 
operator ++ ( ) 
{ return * this ; } 


back_insert_iterator 
operator ++ ( int ) 
{ return * this ; } 
} ; 
# 477 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
template < typename _Container > 
inline back_insert_iterator < _Container > 
back_inserter ( _Container & __x ) 
{ return back_insert_iterator < _Container > ( __x ) ; } 
# 492 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
template < typename _Container > 
class front_insert_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
protected : 
_Container * container ; 

public : 

typedef _Container container_type ; 


explicit front_insert_iterator ( _Container & __x ) : container ( & __x ) { } 
# 518 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
front_insert_iterator & 
operator = ( typename _Container :: const_reference __value ) 
{ 
container -> push_front ( __value ) ; 
return * this ; 
} 
# 541 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
front_insert_iterator & 
operator * ( ) 
{ return * this ; } 


front_insert_iterator & 
operator ++ ( ) 
{ return * this ; } 


front_insert_iterator 
operator ++ ( int ) 
{ return * this ; } 
} ; 
# 567 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
template < typename _Container > 
inline front_insert_iterator < _Container > 
front_inserter ( _Container & __x ) 
{ return front_insert_iterator < _Container > ( __x ) ; } 
# 586 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
template < typename _Container > 
class insert_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
protected : 
_Container * container ; 
typename _Container :: iterator iter ; 

public : 

typedef _Container container_type ; 





insert_iterator ( _Container & __x , typename _Container :: iterator __i ) 
: container ( & __x ) , iter ( __i ) { } 
# 629 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
insert_iterator & 
operator = ( typename _Container :: const_reference __value ) 
{ 
iter = container -> insert ( iter , __value ) ; 
++ iter ; 
return * this ; 
} 
# 655 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
insert_iterator & 
operator * ( ) 
{ return * this ; } 


insert_iterator & 
operator ++ ( ) 
{ return * this ; } 


insert_iterator & 
operator ++ ( int ) 
{ return * this ; } 
} ; 
# 681 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
template < typename _Container , typename _Iterator > 
inline insert_iterator < _Container > 
inserter ( _Container & __x , _Iterator __i ) 
{ 
return insert_iterator < _Container > ( __x , 
typename _Container :: iterator ( __i ) ) ; 
} 




} 

namespace __gnu_cxx 
{ 

# 705 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
using std :: iterator_traits ; 
using std :: iterator ; 
template < typename _Iterator , typename _Container > 
class __normal_iterator 
{ 
protected : 
_Iterator _M_current ; 

typedef iterator_traits < _Iterator > __traits_type ; 

public : 
typedef _Iterator iterator_type ; 
typedef typename __traits_type :: iterator_category iterator_category ; 
typedef typename __traits_type :: value_type value_type ; 
typedef typename __traits_type :: difference_type difference_type ; 
typedef typename __traits_type :: reference reference ; 
typedef typename __traits_type :: pointer pointer ; 

__normal_iterator ( ) : _M_current ( _Iterator ( ) ) { } 

explicit 
__normal_iterator ( const _Iterator & __i ) : _M_current ( __i ) { } 


template < typename _Iter > 
__normal_iterator ( const __normal_iterator < _Iter , 
typename __enable_if < 
( std :: __are_same < _Iter , typename _Container :: pointer >:: __value ) , 
_Container >:: __type >& __i ) 
: _M_current ( __i . base ( ) ) { } 


reference 
operator * ( ) const 
{ return * _M_current ; } 

pointer 
operator -> ( ) const 
{ return _M_current ; } 

__normal_iterator & 
operator ++ ( ) 
{ 
++ _M_current ; 
return * this ; 
} 

__normal_iterator 
operator ++ ( int ) 
{ return __normal_iterator ( _M_current ++ ) ; } 


__normal_iterator & 
operator -- ( ) 
{ 
-- _M_current ; 
return * this ; 
} 

__normal_iterator 
operator -- ( int ) 
{ return __normal_iterator ( _M_current -- ) ; } 


reference 
operator [ ] ( const difference_type & __n ) const 
{ return _M_current [ __n ] ; } 

__normal_iterator & 
operator += ( const difference_type & __n ) 
{ _M_current += __n ; return * this ; } 

__normal_iterator 
operator + ( const difference_type & __n ) const 
{ return __normal_iterator ( _M_current + __n ) ; } 

__normal_iterator & 
operator -= ( const difference_type & __n ) 
{ _M_current -= __n ; return * this ; } 

__normal_iterator 
operator - ( const difference_type & __n ) const 
{ return __normal_iterator ( _M_current - __n ) ; } 

const _Iterator & 
base ( ) const 
{ return _M_current ; } 
} ; 
# 803 "/usr/include/c++/4.8/bits/stl_iterator.h" 3 
template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator == ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
{ return __lhs . base ( ) == __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator == ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
{ return __lhs . base ( ) == __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator != ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
{ return __lhs . base ( ) != __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator != ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
{ return __lhs . base ( ) != __rhs . base ( ) ; } 


template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator < ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
{ return __lhs . base ( ) < __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator < ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
{ return __lhs . base ( ) < __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator > ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
{ return __lhs . base ( ) > __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator > ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
{ return __lhs . base ( ) > __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator <= ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
{ return __lhs . base ( ) <= __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator <= ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
{ return __lhs . base ( ) <= __rhs . base ( ) ; } 

template < typename _IteratorL , typename _IteratorR , typename _Container > 
inline bool 
operator >= ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 
{ return __lhs . base ( ) >= __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline bool 
operator >= ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
{ return __lhs . base ( ) >= __rhs . base ( ) ; } 





template < typename _IteratorL , typename _IteratorR , typename _Container > 







inline typename __normal_iterator < _IteratorL , _Container >:: difference_type 
operator - ( const __normal_iterator < _IteratorL , _Container >& __lhs , 
const __normal_iterator < _IteratorR , _Container >& __rhs ) 

{ return __lhs . base ( ) - __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline typename __normal_iterator < _Iterator , _Container >:: difference_type 
operator - ( const __normal_iterator < _Iterator , _Container >& __lhs , 
const __normal_iterator < _Iterator , _Container >& __rhs ) 
{ return __lhs . base ( ) - __rhs . base ( ) ; } 

template < typename _Iterator , typename _Container > 
inline __normal_iterator < _Iterator , _Container > 
operator + ( typename __normal_iterator < _Iterator , _Container >:: difference_type 
__n , const __normal_iterator < _Iterator , _Container >& __i ) 
{ return __normal_iterator < _Iterator , _Container > ( __i . base ( ) + __n ) ; } 


} 
# 68 "/usr/include/c++/4.8/bits/stl_algobase.h" 2 3 




namespace std 
{ 






template < bool _BoolType > 
struct __iter_swap 
{ 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
static void 
iter_swap ( _ForwardIterator1 __a , _ForwardIterator2 __b ) 
{ 
typedef typename iterator_traits < _ForwardIterator1 >:: value_type 
_ValueType1 ; 
_ValueType1 __tmp = ( * __a ) ; 
* __a = ( * __b ) ; 
* __b = ( __tmp ) ; 
} 
} ; 

template <> 
struct __iter_swap < true > 
{ 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
static void 
iter_swap ( _ForwardIterator1 __a , _ForwardIterator2 __b ) 
{ __CvT__record_line____(__CvT_miT,16,101);
__CvT__record_line____(__CvT_miT,16,102);swap ( * __a , * __b ) ; 
} 
} ; 
# 117 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
inline void 
iter_swap ( _ForwardIterator1 __a , _ForwardIterator2 __b ) 
{ __CvT__record_line____(__CvT_miT,16,120);







typedef typename iterator_traits < _ForwardIterator1 >:: value_type 
_ValueType1 ; 
typedef typename iterator_traits < _ForwardIterator2 >:: value_type 
_ValueType2 ; 






typedef typename iterator_traits < _ForwardIterator1 >:: reference 
_ReferenceType1 ; 
typedef typename iterator_traits < _ForwardIterator2 >:: reference 
_ReferenceType2 ; 
__CvT__record_line____(__CvT_miT,16,142);std :: __iter_swap < __are_same < _ValueType1 , _ValueType2 >:: __value 
&& __are_same < _ValueType1 & , _ReferenceType1 >:: __value 
&& __are_same < _ValueType2 & , _ReferenceType2 >:: __value >:: 
iter_swap ( __a , __b ) ; 



} 
# 163 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _ForwardIterator1 , typename _ForwardIterator2 > 
_ForwardIterator2 
swap_ranges ( _ForwardIterator1 __first1 , _ForwardIterator1 __last1 , 
_ForwardIterator2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,167);





; 

__CvT__record_line____(__CvT_miT,16,175);for ( ; __first1 != __last1 ; ++ __first1 , ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,16,176);std :: iter_swap ( __first1 , __first2 ) ; 
}__CvT__record_line____(__CvT_miT,16,177);return __first2 ; 
} 
# 191 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _Tp > 
inline const _Tp & 
min ( const _Tp & __a , const _Tp & __b ) 
{ __CvT__record_line____(__CvT_miT,16,194);



__CvT__record_line____(__CvT_miT,16,198);if ( __b < __a ) 
{__CvT__record_line____(__CvT_miT,16,199);return __b ; 
}__CvT__record_line____(__CvT_miT,16,200);return __a ; 
} 
# 214 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _Tp > 
inline const _Tp & 
max ( const _Tp & __a , const _Tp & __b ) 
{ __CvT__record_line____(__CvT_miT,16,217);



__CvT__record_line____(__CvT_miT,16,221);if ( __a < __b ) 
{__CvT__record_line____(__CvT_miT,16,222);return __b ; 
}__CvT__record_line____(__CvT_miT,16,223);return __a ; 
} 
# 237 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _Tp , typename _Compare > 
inline const _Tp & 
min ( const _Tp & __a , const _Tp & __b , _Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,16,240);

__CvT__record_line____(__CvT_miT,16,242);if ( __comp ( __b , __a ) ) 
{__CvT__record_line____(__CvT_miT,16,243);return __b ; 
}__CvT__record_line____(__CvT_miT,16,244);return __a ; 
} 
# 258 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _Tp , typename _Compare > 
inline const _Tp & 
max ( const _Tp & __a , const _Tp & __b , _Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,16,261);

__CvT__record_line____(__CvT_miT,16,263);if ( __comp ( __a , __b ) ) 
{__CvT__record_line____(__CvT_miT,16,264);return __b ; 
}__CvT__record_line____(__CvT_miT,16,265);return __a ; 
} 



template < typename _Iterator > 
struct _Niter_base 
: _Iter_base < _Iterator , __is_normal_iterator < _Iterator >:: __value > 
{ } ; 

template < typename _Iterator > 
inline typename _Niter_base < _Iterator >:: iterator_type 
__niter_base ( _Iterator __it ) 
{ __CvT__record_line____(__CvT_miT,16,278);return std :: _Niter_base < _Iterator >:: _S_base ( __it ) ; } 


template < typename _Iterator > 
struct _Miter_base 
: _Iter_base < _Iterator , __is_move_iterator < _Iterator >:: __value > 
{ } ; 

template < typename _Iterator > 
inline typename _Miter_base < _Iterator >:: iterator_type 
__miter_base ( _Iterator __it ) 
{ __CvT__record_line____(__CvT_miT,16,289);return std :: _Miter_base < _Iterator >:: _S_base ( __it ) ; } 







template < bool , bool , typename > 
struct __copy_move 
{ 
template < typename _II , typename _OI > 
static _OI 
__copy_m ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,303);
__CvT__record_line____(__CvT_miT,16,304);for ( ; __first != __last ; ++ __result , ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,305);* __result = * __first ; 
}__CvT__record_line____(__CvT_miT,16,306);return __result ; 
} 
} ; 
# 325 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template <> 
struct __copy_move < false , false , random_access_iterator_tag > 
{ 
template < typename _II , typename _OI > 
static _OI 
__copy_m ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,331);
typedef typename iterator_traits < _II >:: difference_type _Distance ; 
__CvT__record_line____(__CvT_miT,16,333);for ( _Distance __n = __last - __first ; __n > 0 ; -- __n ) 
{{ 
__CvT__record_line____(__CvT_miT,16,335);* __result = * __first ; 
__CvT__record_line____(__CvT_miT,16,336);++ __first ; 
__CvT__record_line____(__CvT_miT,16,337);++ __result ; 
} 
}__CvT__record_line____(__CvT_miT,16,339);return __result ; 
} 
} ; 
# 363 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < bool _IsMove > 
struct __copy_move < _IsMove , true , random_access_iterator_tag > 
{ 
template < typename _Tp > 
static _Tp * 
__copy_m ( const _Tp * __first , const _Tp * __last , _Tp * __result ) 
{ __CvT__record_line____(__CvT_miT,16,369);
__CvT__record_line____(__CvT_miT,16,370);const ptrdiff_t _Num = __last - __first ; 
__CvT__record_line____(__CvT_miT,16,371);if ( _Num ) 
{__CvT__record_line____(__CvT_miT,16,372);__builtin_memmove ( __result , __first , sizeof ( _Tp ) * _Num ) ; 
}__CvT__record_line____(__CvT_miT,16,373);return __result + _Num ; 
} 
} ; 

template < bool _IsMove , typename _II , typename _OI > 
inline _OI 
__copy_move_a ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,380);
typedef typename iterator_traits < _II >:: value_type _ValueTypeI ; 
typedef typename iterator_traits < _OI >:: value_type _ValueTypeO ; 
typedef typename iterator_traits < _II >:: iterator_category _Category ; 
__CvT__record_line____(__CvT_miT,16,384);const bool __simple = ( __is_trivial ( _ValueTypeI ) 
&& __is_pointer < _II >:: __value 
&& __is_pointer < _OI >:: __value 
&& __are_same < _ValueTypeI , _ValueTypeO >:: __value ) ; 

__CvT__record_line____(__CvT_miT,16,389);return std :: __copy_move < _IsMove , __simple , 
_Category >:: __copy_m ( __first , __last , __result ) ; 
} 



template < typename _CharT > 
struct char_traits ; 

template < typename _CharT , typename _Traits > 
class istreambuf_iterator ; 

template < typename _CharT , typename _Traits > 
class ostreambuf_iterator ; 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > >:: __type 
__copy_move_a2 ( _CharT * , _CharT * , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > ) ; 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > >:: __type 
__copy_move_a2 ( const _CharT * , const _CharT * , 
ostreambuf_iterator < _CharT , char_traits < _CharT > > ) ; 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
_CharT *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT , char_traits < _CharT > > , 
istreambuf_iterator < _CharT , char_traits < _CharT > > , _CharT * ) ; 

template < bool _IsMove , typename _II , typename _OI > 
inline _OI 
__copy_move_a2 ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,425);
__CvT__record_line____(__CvT_miT,16,426);return _OI ( std :: __copy_move_a < _IsMove > ( std :: __niter_base ( __first ) , 
std :: __niter_base ( __last ) , 
std :: __niter_base ( __result ) ) ) ; 
} 
# 448 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _II , typename _OI > 
inline _OI 
copy ( _II __first , _II __last , _OI __result ) 
{ __CvT__record_line____(__CvT_miT,16,451);




; 

__CvT__record_line____(__CvT_miT,16,458);return ( std :: __copy_move_a2 < __is_move_iterator < _II >:: __value > 
( std :: __miter_base ( __first ) , std :: __miter_base ( __last ) , 
__result ) ) ; 
} 
# 500 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < bool , bool , typename > 
struct __copy_move_backward 
{ 
template < typename _BI1 , typename _BI2 > 
static _BI2 
__copy_move_b ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,506);
__CvT__record_line____(__CvT_miT,16,507);while ( __first != __last ) 
{__CvT__record_line____(__CvT_miT,16,508);*-- __result = *-- __last ; 
}__CvT__record_line____(__CvT_miT,16,509);return __result ; 
} 
} ; 
# 528 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template <> 
struct __copy_move_backward < false , false , random_access_iterator_tag > 
{ 
template < typename _BI1 , typename _BI2 > 
static _BI2 
__copy_move_b ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,534);
__CvT__record_line____(__CvT_miT,16,535);typename iterator_traits < _BI1 >:: difference_type __n ; 
__CvT__record_line____(__CvT_miT,16,536);for ( __n = __last - __first ; __n > 0 ; -- __n ) 
{__CvT__record_line____(__CvT_miT,16,537);*-- __result = *-- __last ; 
}__CvT__record_line____(__CvT_miT,16,538);return __result ; 
} 
} ; 
# 558 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < bool _IsMove > 
struct __copy_move_backward < _IsMove , true , random_access_iterator_tag > 
{ 
template < typename _Tp > 
static _Tp * 
__copy_move_b ( const _Tp * __first , const _Tp * __last , _Tp * __result ) 
{ __CvT__record_line____(__CvT_miT,16,564);
__CvT__record_line____(__CvT_miT,16,565);const ptrdiff_t _Num = __last - __first ; 
__CvT__record_line____(__CvT_miT,16,566);if ( _Num ) 
{__CvT__record_line____(__CvT_miT,16,567);__builtin_memmove ( __result - _Num , __first , sizeof ( _Tp ) * _Num ) ; 
}__CvT__record_line____(__CvT_miT,16,568);return __result - _Num ; 
} 
} ; 

template < bool _IsMove , typename _BI1 , typename _BI2 > 
inline _BI2 
__copy_move_backward_a ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,575);
typedef typename iterator_traits < _BI1 >:: value_type _ValueType1 ; 
typedef typename iterator_traits < _BI2 >:: value_type _ValueType2 ; 
typedef typename iterator_traits < _BI1 >:: iterator_category _Category ; 
__CvT__record_line____(__CvT_miT,16,579);const bool __simple = ( __is_trivial ( _ValueType1 ) 
&& __is_pointer < _BI1 >:: __value 
&& __is_pointer < _BI2 >:: __value 
&& __are_same < _ValueType1 , _ValueType2 >:: __value ) ; 

__CvT__record_line____(__CvT_miT,16,584);return std :: __copy_move_backward < _IsMove , __simple , 
_Category >:: __copy_move_b ( __first , 
__last , 
__result ) ; 
} 

template < bool _IsMove , typename _BI1 , typename _BI2 > 
inline _BI2 
__copy_move_backward_a2 ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,593);
__CvT__record_line____(__CvT_miT,16,594);return _BI2 ( std :: __copy_move_backward_a < _IsMove > 
( std :: __niter_base ( __first ) , std :: __niter_base ( __last ) , 
std :: __niter_base ( __result ) ) ) ; 
} 
# 617 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _BI1 , typename _BI2 > 
inline _BI2 
copy_backward ( _BI1 __first , _BI1 __last , _BI2 __result ) 
{ __CvT__record_line____(__CvT_miT,16,620);






; 

__CvT__record_line____(__CvT_miT,16,629);return ( std :: __copy_move_backward_a2 < __is_move_iterator < _BI1 >:: __value > 
( std :: __miter_base ( __first ) , std :: __miter_base ( __last ) , 
__result ) ) ; 
} 
# 675 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _ForwardIterator , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if <! __is_scalar < _Tp >:: __value , void >:: __type 
__fill_a ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,680);
__CvT__record_line____(__CvT_miT,16,681);for ( ; __first != __last ; ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,682);* __first = __value ; 
}} 

template < typename _ForwardIterator , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_scalar < _Tp >:: __value , void >:: __type 
__fill_a ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,690);
__CvT__record_line____(__CvT_miT,16,691);const _Tp __tmp = __value ; 
__CvT__record_line____(__CvT_miT,16,692);for ( ; __first != __last ; ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,693);* __first = __tmp ; 
}} 


template < typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_byte < _Tp >:: __value , void >:: __type 
__fill_a ( _Tp * __first , _Tp * __last , const _Tp & __c ) 
{ __CvT__record_line____(__CvT_miT,16,701);
__CvT__record_line____(__CvT_miT,16,702);const _Tp __tmp = __c ; 
__CvT__record_line____(__CvT_miT,16,703);__builtin_memset ( __first , static_cast < unsigned char > ( __tmp ) , 
__last - __first ) ; 
} 
# 719 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _ForwardIterator , typename _Tp > 
inline void 
fill ( _ForwardIterator __first , _ForwardIterator __last , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,722);



; 

__CvT__record_line____(__CvT_miT,16,728);std :: __fill_a ( std :: __niter_base ( __first ) , std :: __niter_base ( __last ) , 
__value ) ; 
} 

template < typename _OutputIterator , typename _Size , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if <! __is_scalar < _Tp >:: __value , _OutputIterator >:: __type 
__fill_n_a ( _OutputIterator __first , _Size __n , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,736);
__CvT__record_line____(__CvT_miT,16,737);for ( __decltype ( __n + 0 ) __niter = __n ; 
__niter > 0 ; -- __niter , ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,739);* __first = __value ; 
}__CvT__record_line____(__CvT_miT,16,740);return __first ; 
} 

template < typename _OutputIterator , typename _Size , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_scalar < _Tp >:: __value , _OutputIterator >:: __type 
__fill_n_a ( _OutputIterator __first , _Size __n , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,747);
__CvT__record_line____(__CvT_miT,16,748);const _Tp __tmp = __value ; 
__CvT__record_line____(__CvT_miT,16,749);for ( __decltype ( __n + 0 ) __niter = __n ; 
__niter > 0 ; -- __niter , ++ __first ) 
{__CvT__record_line____(__CvT_miT,16,751);* __first = __tmp ; 
}__CvT__record_line____(__CvT_miT,16,752);return __first ; 
} 

template < typename _Size , typename _Tp > 
inline typename 
__gnu_cxx :: __enable_if < __is_byte < _Tp >:: __value , _Tp *>:: __type 
__fill_n_a ( _Tp * __first , _Size __n , const _Tp & __c ) 
{ __CvT__record_line____(__CvT_miT,16,759);
__CvT__record_line____(__CvT_miT,16,760);std :: __fill_a ( __first , __first + __n , __c ) ; 
__CvT__record_line____(__CvT_miT,16,761);return __first + __n ; 
} 
# 779 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _OI , typename _Size , typename _Tp > 
inline _OI 
fill_n ( _OI __first , _Size __n , const _Tp & __value ) 
{ __CvT__record_line____(__CvT_miT,16,782);



__CvT__record_line____(__CvT_miT,16,786);return _OI ( std :: __fill_n_a ( std :: __niter_base ( __first ) , __n , __value ) ) ; 
} 

template < bool _BoolType > 
struct __equal 
{ 
template < typename _II1 , typename _II2 > 
static bool 
equal ( _II1 __first1 , _II1 __last1 , _II2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,795);
__CvT__record_line____(__CvT_miT,16,796);for ( ; __first1 != __last1 ; ++ __first1 , ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,16,797);if ( ! ( * __first1 == * __first2 ) ) 
{__CvT__record_line____(__CvT_miT,16,798);return false ; 
}}__CvT__record_line____(__CvT_miT,16,799);return true ; 
} 
} ; 

template <> 
struct __equal < true > 
{ 
template < typename _Tp > 
static bool 
equal ( const _Tp * __first1 , const _Tp * __last1 , const _Tp * __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,809);
__CvT__record_line____(__CvT_miT,16,810);return ! __builtin_memcmp ( __first1 , __first2 , sizeof ( _Tp ) 
* ( __last1 - __first1 ) ) ; 
} 
} ; 

template < typename _II1 , typename _II2 > 
inline bool 
__equal_aux ( _II1 __first1 , _II1 __last1 , _II2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,818);
typedef typename iterator_traits < _II1 >:: value_type _ValueType1 ; 
typedef typename iterator_traits < _II2 >:: value_type _ValueType2 ; 
__CvT__record_line____(__CvT_miT,16,821);const bool __simple = ( ( __is_integer < _ValueType1 >:: __value 
|| __is_pointer < _ValueType1 >:: __value ) 
&& __is_pointer < _II1 >:: __value 
&& __is_pointer < _II2 >:: __value 
&& __are_same < _ValueType1 , _ValueType2 >:: __value ) ; 

__CvT__record_line____(__CvT_miT,16,827);return std :: __equal < __simple >:: equal ( __first1 , __last1 , __first2 ) ; 
} 


template < typename , typename > 
struct __lc_rai 
{ 
template < typename _II1 , typename _II2 > 
static _II1 
__newlast1 ( _II1 , _II1 __last1 , _II2 , _II2 ) 
{ __CvT__record_line____(__CvT_miT,16,837);return __last1 ; } 

template < typename _II > 
static bool 
__cnd2 ( _II __first , _II __last ) 
{ __CvT__record_line____(__CvT_miT,16,842);return __first != __last ; } 
} ; 

template <> 
struct __lc_rai < random_access_iterator_tag , random_access_iterator_tag > 
{ 
template < typename _RAI1 , typename _RAI2 > 
static _RAI1 
__newlast1 ( _RAI1 __first1 , _RAI1 __last1 , 
_RAI2 __first2 , _RAI2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,852);
__CvT__record_line____(__CvT_miT,16,853);const typename iterator_traits < _RAI1 >:: difference_type 
__diff1 = __last1 - __first1 ; 
__CvT__record_line____(__CvT_miT,16,855);const typename iterator_traits < _RAI2 >:: difference_type 
__diff2 = __last2 - __first2 ; 
__CvT__record_line____(__CvT_miT,16,857);return __diff2 < __diff1 ? __first1 + __diff2 : __last1 ; 
} 

template < typename _RAI > 
static bool 
__cnd2 ( _RAI , _RAI ) 
{ __CvT__record_line____(__CvT_miT,16,863);return true ; } 
} ; 

template < bool _BoolType > 
struct __lexicographical_compare 
{ 
template < typename _II1 , typename _II2 > 
static bool __lc ( _II1 , _II1 , _II2 , _II2 ) ; 
} ; 

template < bool _BoolType > 
template < typename _II1 , typename _II2 > 
bool 
__lexicographical_compare < _BoolType >:: 
__lc ( _II1 __first1 , _II1 __last1 , _II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,878);
typedef typename iterator_traits < _II1 >:: iterator_category _Category1 ; 
typedef typename iterator_traits < _II2 >:: iterator_category _Category2 ; 
typedef std :: __lc_rai < _Category1 , _Category2 > __rai_type ; 

__CvT__record_line____(__CvT_miT,16,883);__last1 = __rai_type :: __newlast1 ( __first1 , __last1 , 
__first2 , __last2 ) ; 
__CvT__record_line____(__CvT_miT,16,885);for ( ; __first1 != __last1 && __rai_type :: __cnd2 ( __first2 , __last2 ) ; 
++ __first1 , ++ __first2 ) 
{{ 
__CvT__record_line____(__CvT_miT,16,888);if ( * __first1 < * __first2 ) 
{__CvT__record_line____(__CvT_miT,16,889);return true ; 
}__CvT__record_line____(__CvT_miT,16,890);if ( * __first2 < * __first1 ) 
{__CvT__record_line____(__CvT_miT,16,891);return false ; 
}} 
}__CvT__record_line____(__CvT_miT,16,893);return __first1 == __last1 && __first2 != __last2 ; 
} 

template <> 
struct __lexicographical_compare < true > 
{ 
template < typename _Tp , typename _Up > 
static bool 
__lc ( const _Tp * __first1 , const _Tp * __last1 , 
const _Up * __first2 , const _Up * __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,903);
__CvT__record_line____(__CvT_miT,16,904);const size_t __len1 = __last1 - __first1 ; 
__CvT__record_line____(__CvT_miT,16,905);const size_t __len2 = __last2 - __first2 ; 
__CvT__record_line____(__CvT_miT,16,906);const int __result = __builtin_memcmp ( __first1 , __first2 , 
std :: min ( __len1 , __len2 ) ) ; 
__CvT__record_line____(__CvT_miT,16,908);return __result != 0 ? __result < 0 : __len1 < __len2 ; 
} 
} ; 

template < typename _II1 , typename _II2 > 
inline bool 
__lexicographical_compare_aux ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,916);
typedef typename iterator_traits < _II1 >:: value_type _ValueType1 ; 
typedef typename iterator_traits < _II2 >:: value_type _ValueType2 ; 
__CvT__record_line____(__CvT_miT,16,919);const bool __simple = 
( __is_byte < _ValueType1 >:: __value && __is_byte < _ValueType2 >:: __value 
&& ! __gnu_cxx :: __numeric_traits < _ValueType1 >:: __is_signed 
&& ! __gnu_cxx :: __numeric_traits < _ValueType2 >:: __is_signed 
&& __is_pointer < _II1 >:: __value 
&& __is_pointer < _II2 >:: __value ) ; 

__CvT__record_line____(__CvT_miT,16,926);return std :: __lexicographical_compare < __simple >:: __lc ( __first1 , __last1 , 
__first2 , __last2 ) ; 
} 
# 941 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _ForwardIterator , typename _Tp > 
_ForwardIterator 
lower_bound ( _ForwardIterator __first , _ForwardIterator __last , 
const _Tp & __val ) 
{ __CvT__record_line____(__CvT_miT,16,945);




typedef typename iterator_traits < _ForwardIterator >:: difference_type 
_DistanceType ; 




; 

__CvT__record_line____(__CvT_miT,16,958);_DistanceType __len = std :: distance ( __first , __last ) ; 

__CvT__record_line____(__CvT_miT,16,960);while ( __len > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,16,962);_DistanceType __half = __len >> 1 ; 
__CvT__record_line____(__CvT_miT,16,963);_ForwardIterator __middle = __first ; 
__CvT__record_line____(__CvT_miT,16,964);std :: advance ( __middle , __half ) ; 
__CvT__record_line____(__CvT_miT,16,965);if ( * __middle < __val ) 
{{ 
__CvT__record_line____(__CvT_miT,16,967);__first = __middle ; 
__CvT__record_line____(__CvT_miT,16,968);++ __first ; 
__CvT__record_line____(__CvT_miT,16,969);__len = __len - __half - 1 ; 
} 
}else {
__CvT__record_line____(__CvT_miT,16,972);__len = __half ; 
}} 
}__CvT__record_line____(__CvT_miT,16,974);return __first ; 
} 



inline int 
__lg ( int __n ) 
{ __CvT__record_line____(__CvT_miT,16,981);return sizeof ( int ) * 8 - 1 - __builtin_clz ( __n ) ; } 

inline unsigned 
__lg ( unsigned __n ) 
{ __CvT__record_line____(__CvT_miT,16,985);return sizeof ( int ) * 8 - 1 - __builtin_clz ( __n ) ; } 

inline long 
__lg ( long __n ) 
{ __CvT__record_line____(__CvT_miT,16,989);return sizeof ( long ) * 8 - 1 - __builtin_clzl ( __n ) ; } 

inline unsigned long 
__lg ( unsigned long __n ) 
{ __CvT__record_line____(__CvT_miT,16,993);return sizeof ( long ) * 8 - 1 - __builtin_clzl ( __n ) ; } 

inline long long 
__lg ( long long __n ) 
{ __CvT__record_line____(__CvT_miT,16,997);return sizeof ( long long ) * 8 - 1 - __builtin_clzll ( __n ) ; } 

inline unsigned long long 
__lg ( unsigned long long __n ) 
{ __CvT__record_line____(__CvT_miT,16,1001);return sizeof ( long long ) * 8 - 1 - __builtin_clzll ( __n ) ; } 




# 1019 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 > 
inline bool 
equal ( _II1 __first1 , _II1 __last1 , _II2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,1022);






; 

__CvT__record_line____(__CvT_miT,16,1031);return std :: __equal_aux ( std :: __niter_base ( __first1 ) , 
std :: __niter_base ( __last1 ) , 
std :: __niter_base ( __first2 ) ) ; 
} 
# 1051 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _IIter1 , typename _IIter2 , typename _BinaryPredicate > 
inline bool 
equal ( _IIter1 __first1 , _IIter1 __last1 , 
_IIter2 __first2 , _BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,16,1055);



; 

__CvT__record_line____(__CvT_miT,16,1061);for ( ; __first1 != __last1 ; ++ __first1 , ++ __first2 ) 
{__CvT__record_line____(__CvT_miT,16,1062);if ( ! bool ( __binary_pred ( * __first1 , * __first2 ) ) ) 
{__CvT__record_line____(__CvT_miT,16,1063);return false ; 
}}__CvT__record_line____(__CvT_miT,16,1064);return true ; 
} 
# 1082 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 > 
inline bool 
lexicographical_compare ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 ) 
{ __CvT__record_line____(__CvT_miT,16,1086);









; 
; 

__CvT__record_line____(__CvT_miT,16,1099);return std :: __lexicographical_compare_aux ( std :: __niter_base ( __first1 ) , 
std :: __niter_base ( __last1 ) , 
std :: __niter_base ( __first2 ) , 
std :: __niter_base ( __last2 ) ) ; 
} 
# 1118 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _II1 , typename _II2 , typename _Compare > 
bool 
lexicographical_compare ( _II1 __first1 , _II1 __last1 , 
_II2 __first2 , _II2 __last2 , _Compare __comp ) 
{ __CvT__record_line____(__CvT_miT,16,1122);
typedef typename iterator_traits < _II1 >:: iterator_category _Category1 ; 
typedef typename iterator_traits < _II2 >:: iterator_category _Category2 ; 
typedef std :: __lc_rai < _Category1 , _Category2 > __rai_type ; 




; 
; 

__CvT__record_line____(__CvT_miT,16,1133);__last1 = __rai_type :: __newlast1 ( __first1 , __last1 , __first2 , __last2 ) ; 
__CvT__record_line____(__CvT_miT,16,1134);for ( ; __first1 != __last1 && __rai_type :: __cnd2 ( __first2 , __last2 ) ; 
++ __first1 , ++ __first2 ) 
{{ 
__CvT__record_line____(__CvT_miT,16,1137);if ( __comp ( * __first1 , * __first2 ) ) 
{__CvT__record_line____(__CvT_miT,16,1138);return true ; 
}__CvT__record_line____(__CvT_miT,16,1139);if ( __comp ( * __first2 , * __first1 ) ) 
{__CvT__record_line____(__CvT_miT,16,1140);return false ; 
}} 
}__CvT__record_line____(__CvT_miT,16,1142);return __first1 == __last1 && __first2 != __last2 ; 
} 
# 1158 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _InputIterator1 , typename _InputIterator2 > 
pair < _InputIterator1 , _InputIterator2 > 
mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 ) 
{ __CvT__record_line____(__CvT_miT,16,1162);






; 

__CvT__record_line____(__CvT_miT,16,1171);while ( __first1 != __last1 && * __first1 == * __first2 ) 
{{ 
__CvT__record_line____(__CvT_miT,16,1173);++ __first1 ; 
__CvT__record_line____(__CvT_miT,16,1174);++ __first2 ; 
} 
}__CvT__record_line____(__CvT_miT,16,1176);return pair < _InputIterator1 , _InputIterator2 > ( __first1 , __first2 ) ; 
} 
# 1195 "/usr/include/c++/4.8/bits/stl_algobase.h" 3 
template < typename _InputIterator1 , typename _InputIterator2 , 
typename _BinaryPredicate > 
pair < _InputIterator1 , _InputIterator2 > 
mismatch ( _InputIterator1 __first1 , _InputIterator1 __last1 , 
_InputIterator2 __first2 , _BinaryPredicate __binary_pred ) 
{ __CvT__record_line____(__CvT_miT,16,1200);



; 

__CvT__record_line____(__CvT_miT,16,1206);while ( __first1 != __last1 && bool ( __binary_pred ( * __first1 , * __first2 ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,16,1208);++ __first1 ; 
__CvT__record_line____(__CvT_miT,16,1209);++ __first2 ; 
} 
}__CvT__record_line____(__CvT_miT,16,1211);return pair < _InputIterator1 , _InputIterator2 > ( __first1 , __first2 ) ; 
} 


} 
# 40 "/usr/include/c++/4.8/bits/char_traits.h" 2 3 
# 1 "/usr/include/c++/4.8/bits/postypes.h" 1 3 
# 38 "/usr/include/c++/4.8/bits/postypes.h" 3 

# 39 "/usr/include/c++/4.8/bits/postypes.h" 3 

# 1 "/usr/include/c++/4.8/cwchar" 1 3 
# 39 "/usr/include/c++/4.8/cwchar" 3 

# 40 "/usr/include/c++/4.8/cwchar" 3 




# 1 "/usr/include/wchar.h" 1 3 4 
# 36 "/usr/include/wchar.h" 3 4 
# 1 "/usr/include/stdio.h" 1 3 4 
# 44 "/usr/include/stdio.h" 3 4 
struct _IO_FILE ; 



typedef struct _IO_FILE FILE ; 





# 64 "/usr/include/stdio.h" 3 4 
typedef struct _IO_FILE __FILE ; 
# 37 "/usr/include/wchar.h" 2 3 4 


# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4 
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4 
typedef __builtin_va_list __gnuc_va_list ; 
# 40 "/usr/include/wchar.h" 2 3 4 

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4 
# 42 "/usr/include/wchar.h" 2 3 4 
# 51 "/usr/include/wchar.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4 
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4 
typedef long unsigned int size_t ; 
# 353 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4 
typedef unsigned int wint_t ; 
# 52 "/usr/include/wchar.h" 2 3 4 
# 82 "/usr/include/wchar.h" 3 4 
typedef struct 
{ 
int __count ; 
union 
{ 

unsigned int __wch ; 



char __wchb [ 4 ] ; 
} __value ; 
} __mbstate_t ; 
# 104 "/usr/include/wchar.h" 3 4 


typedef __mbstate_t mbstate_t ; 






# 132 "/usr/include/wchar.h" 3 4 
extern "C" { 




struct tm ; 









extern wchar_t * wcscpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src ) throw ( ) ; 

extern wchar_t * wcsncpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src , size_t __n ) 
throw ( ) ; 


extern wchar_t * wcscat ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src ) throw ( ) ; 

extern wchar_t * wcsncat ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src , size_t __n ) 
throw ( ) ; 


extern int wcscmp ( const wchar_t * __s1 , const wchar_t * __s2 ) 
throw ( ) ; 

extern int wcsncmp ( const wchar_t * __s1 , const wchar_t * __s2 , size_t __n ) 
throw ( ) ; 




extern int wcscasecmp ( const wchar_t * __s1 , const wchar_t * __s2 ) throw ( ) ; 


extern int wcsncasecmp ( const wchar_t * __s1 , const wchar_t * __s2 , 
size_t __n ) throw ( ) ; 



# 1 "/usr/include/xlocale.h" 1 3 4 
# 27 "/usr/include/xlocale.h" 3 4 
typedef struct __locale_struct 
{ 

struct __locale_data * __locales [ 13 ] ; 


const unsigned short int * __ctype_b ; 
const int * __ctype_tolower ; 
const int * __ctype_toupper ; 


const char * __names [ 13 ] ; 
} * __locale_t ; 


typedef __locale_t locale_t ; 
# 181 "/usr/include/wchar.h" 2 3 4 

extern int wcscasecmp_l ( const wchar_t * __s1 , const wchar_t * __s2 , 
__locale_t __loc ) throw ( ) ; 

extern int wcsncasecmp_l ( const wchar_t * __s1 , const wchar_t * __s2 , 
size_t __n , __locale_t __loc ) throw ( ) ; 





extern int wcscoll ( const wchar_t * __s1 , const wchar_t * __s2 ) throw ( ) ; 



extern size_t wcsxfrm ( wchar_t * __restrict __s1 , 
const wchar_t * __restrict __s2 , size_t __n ) throw ( ) ; 








extern int wcscoll_l ( const wchar_t * __s1 , const wchar_t * __s2 , 
__locale_t __loc ) throw ( ) ; 




extern size_t wcsxfrm_l ( wchar_t * __s1 , const wchar_t * __s2 , 
size_t __n , __locale_t __loc ) throw ( ) ; 


extern wchar_t * wcsdup ( const wchar_t * __s ) throw ( ) ; 





extern "C++" wchar_t * wcschr ( wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcschr" ) ; 
extern "C++" const wchar_t * wcschr ( const wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcschr" ) ; 






extern "C++" wchar_t * wcsrchr ( wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcsrchr" ) ; 
extern "C++" const wchar_t * wcsrchr ( const wchar_t * __wcs , wchar_t __wc ) 
throw ( ) __asm ( "wcsrchr" ) ; 









extern wchar_t * wcschrnul ( const wchar_t * __s , wchar_t __wc ) 
throw ( ) ; 





extern size_t wcscspn ( const wchar_t * __wcs , const wchar_t * __reject ) 
throw ( ) ; 


extern size_t wcsspn ( const wchar_t * __wcs , const wchar_t * __accept ) 
throw ( ) ; 


extern "C++" wchar_t * wcspbrk ( wchar_t * __wcs , const wchar_t * __accept ) 
throw ( ) __asm ( "wcspbrk" ) ; 
extern "C++" const wchar_t * wcspbrk ( const wchar_t * __wcs , 
const wchar_t * __accept ) 
throw ( ) __asm ( "wcspbrk" ) ; 






extern "C++" wchar_t * wcsstr ( wchar_t * __haystack , const wchar_t * __needle ) 
throw ( ) __asm ( "wcsstr" ) ; 
extern "C++" const wchar_t * wcsstr ( const wchar_t * __haystack , 
const wchar_t * __needle ) 
throw ( ) __asm ( "wcsstr" ) ; 






extern wchar_t * wcstok ( wchar_t * __restrict __s , 
const wchar_t * __restrict __delim , 
wchar_t ** __restrict __ptr ) throw ( ) ; 


extern size_t wcslen ( const wchar_t * __s ) throw ( ) ; 





extern "C++" wchar_t * wcswcs ( wchar_t * __haystack , const wchar_t * __needle ) 
throw ( ) __asm ( "wcswcs" ) ; 
extern "C++" const wchar_t * wcswcs ( const wchar_t * __haystack , 
const wchar_t * __needle ) 
throw ( ) __asm ( "wcswcs" ) ; 
# 306 "/usr/include/wchar.h" 3 4 
extern size_t wcsnlen ( const wchar_t * __s , size_t __maxlen ) 
throw ( ) ; 






extern "C++" wchar_t * wmemchr ( wchar_t * __s , wchar_t __c , size_t __n ) 
throw ( ) __asm ( "wmemchr" ) ; 
extern "C++" const wchar_t * wmemchr ( const wchar_t * __s , wchar_t __c , 
size_t __n ) 
throw ( ) __asm ( "wmemchr" ) ; 






extern int wmemcmp ( const wchar_t * __s1 , const wchar_t * __s2 , size_t __n ) 
throw ( ) ; 


extern wchar_t * wmemcpy ( wchar_t * __restrict __s1 , 
const wchar_t * __restrict __s2 , size_t __n ) throw ( ) ; 



extern wchar_t * wmemmove ( wchar_t * __s1 , const wchar_t * __s2 , size_t __n ) 
throw ( ) ; 


extern wchar_t * wmemset ( wchar_t * __s , wchar_t __c , size_t __n ) throw ( ) ; 





extern wchar_t * wmempcpy ( wchar_t * __restrict __s1 , 
const wchar_t * __restrict __s2 , size_t __n ) 
throw ( ) ; 






extern wint_t btowc ( int __c ) throw ( ) ; 



extern int wctob ( wint_t __c ) throw ( ) ; 



extern int mbsinit ( const mbstate_t * __ps ) throw ( ) ; 



extern size_t mbrtowc ( wchar_t * __restrict __pwc , 
const char * __restrict __s , size_t __n , 
mbstate_t * __restrict __p ) throw ( ) ; 


extern size_t wcrtomb ( char * __restrict __s , wchar_t __wc , 
mbstate_t * __restrict __ps ) throw ( ) ; 


extern size_t __mbrlen ( const char * __restrict __s , size_t __n , 
mbstate_t * __restrict __ps ) throw ( ) ; 
extern size_t mbrlen ( const char * __restrict __s , size_t __n , 
mbstate_t * __restrict __ps ) throw ( ) ; 

# 405 "/usr/include/wchar.h" 3 4 



extern size_t mbsrtowcs ( wchar_t * __restrict __dst , 
const char ** __restrict __src , size_t __len , 
mbstate_t * __restrict __ps ) throw ( ) ; 



extern size_t wcsrtombs ( char * __restrict __dst , 
const wchar_t ** __restrict __src , size_t __len , 
mbstate_t * __restrict __ps ) throw ( ) ; 






extern size_t mbsnrtowcs ( wchar_t * __restrict __dst , 
const char ** __restrict __src , size_t __nmc , 
size_t __len , mbstate_t * __restrict __ps ) throw ( ) ; 



extern size_t wcsnrtombs ( char * __restrict __dst , 
const wchar_t ** __restrict __src , 
size_t __nwc , size_t __len , 
mbstate_t * __restrict __ps ) throw ( ) ; 






extern int wcwidth ( wchar_t __c ) throw ( ) ; 



extern int wcswidth ( const wchar_t * __s , size_t __n ) throw ( ) ; 






extern double wcstod ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr ) throw ( ) ; 





extern float wcstof ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr ) throw ( ) ; 
extern long double wcstold ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr ) throw ( ) ; 







extern long int wcstol ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) throw ( ) ; 



extern unsigned long int wcstoul ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) 
throw ( ) ; 







extern long long int wcstoll ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) 
throw ( ) ; 




extern unsigned long long int wcstoull ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base ) throw ( ) ; 







extern long long int wcstoq ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base ) 
throw ( ) ; 




extern unsigned long long int wcstouq ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base ) throw ( ) ; 
# 530 "/usr/include/wchar.h" 3 4 
extern long int wcstol_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , int __base , 
__locale_t __loc ) throw ( ) ; 

extern unsigned long int wcstoul_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base , __locale_t __loc ) throw ( ) ; 


extern long long int wcstoll_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base , __locale_t __loc ) throw ( ) ; 


extern unsigned long long int wcstoull_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
int __base , __locale_t __loc ) 
throw ( ) ; 

extern double wcstod_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , __locale_t __loc ) 
throw ( ) ; 

extern float wcstof_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , __locale_t __loc ) 
throw ( ) ; 

extern long double wcstold_l ( const wchar_t * __restrict __nptr , 
wchar_t ** __restrict __endptr , 
__locale_t __loc ) throw ( ) ; 






extern wchar_t * wcpcpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src ) throw ( ) ; 



extern wchar_t * wcpncpy ( wchar_t * __restrict __dest , 
const wchar_t * __restrict __src , size_t __n ) 
throw ( ) ; 






extern __FILE * open_wmemstream ( wchar_t ** __bufloc , size_t * __sizeloc ) throw ( ) ; 






extern int fwide ( __FILE * __fp , int __mode ) throw ( ) ; 






extern int fwprintf ( __FILE * __restrict __stream , 
const wchar_t * __restrict __format , ... ) 
; 




extern int wprintf ( const wchar_t * __restrict __format , ... ) 
; 

extern int swprintf ( wchar_t * __restrict __s , size_t __n , 
const wchar_t * __restrict __format , ... ) 
throw ( ) ; 





extern int vfwprintf ( __FILE * __restrict __s , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 




extern int vwprintf ( const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 


extern int vswprintf ( wchar_t * __restrict __s , size_t __n , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
throw ( ) ; 






extern int fwscanf ( __FILE * __restrict __stream , 
const wchar_t * __restrict __format , ... ) 
; 




extern int wscanf ( const wchar_t * __restrict __format , ... ) 
; 

extern int swscanf ( const wchar_t * __restrict __s , 
const wchar_t * __restrict __format , ... ) 
throw ( ) ; 
# 680 "/usr/include/wchar.h" 3 4 









extern int vfwscanf ( __FILE * __restrict __s , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 




extern int vwscanf ( const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
; 

extern int vswscanf ( const wchar_t * __restrict __s , 
const wchar_t * __restrict __format , 
__gnuc_va_list __arg ) 
throw ( ) ; 
# 736 "/usr/include/wchar.h" 3 4 









extern wint_t fgetwc ( __FILE * __stream ) ; 
extern wint_t getwc ( __FILE * __stream ) ; 





extern wint_t getwchar ( void ) ; 






extern wint_t fputwc ( wchar_t __wc , __FILE * __stream ) ; 
extern wint_t putwc ( wchar_t __wc , __FILE * __stream ) ; 





extern wint_t putwchar ( wchar_t __wc ) ; 







extern wchar_t * fgetws ( wchar_t * __restrict __ws , int __n , 
__FILE * __restrict __stream ) ; 





extern int fputws ( const wchar_t * __restrict __ws , 
__FILE * __restrict __stream ) ; 






extern wint_t ungetwc ( wint_t __wc , __FILE * __stream ) ; 

# 801 "/usr/include/wchar.h" 3 4 
extern wint_t getwc_unlocked ( __FILE * __stream ) ; 
extern wint_t getwchar_unlocked ( void ) ; 







extern wint_t fgetwc_unlocked ( __FILE * __stream ) ; 







extern wint_t fputwc_unlocked ( wchar_t __wc , __FILE * __stream ) ; 
# 827 "/usr/include/wchar.h" 3 4 
extern wint_t putwc_unlocked ( wchar_t __wc , __FILE * __stream ) ; 
extern wint_t putwchar_unlocked ( wchar_t __wc ) ; 
# 837 "/usr/include/wchar.h" 3 4 
extern wchar_t * fgetws_unlocked ( wchar_t * __restrict __ws , int __n , 
__FILE * __restrict __stream ) ; 







extern int fputws_unlocked ( const wchar_t * __restrict __ws , 
__FILE * __restrict __stream ) ; 







extern size_t wcsftime ( wchar_t * __restrict __s , size_t __maxsize , 
const wchar_t * __restrict __format , 
const struct tm * __restrict __tp ) throw ( ) ; 







extern size_t wcsftime_l ( wchar_t * __restrict __s , size_t __maxsize , 
const wchar_t * __restrict __format , 
const struct tm * __restrict __tp , 
__locale_t __loc ) throw ( ) ; 
# 891 "/usr/include/wchar.h" 3 4 
} 
# 45 "/usr/include/c++/4.8/cwchar" 2 3 
# 62 "/usr/include/c++/4.8/cwchar" 3 
namespace std 
{ 
using :: mbstate_t ; 
} 
# 135 "/usr/include/c++/4.8/cwchar" 3 
namespace std 
{ 


using :: wint_t ; 

using :: btowc ; 
using :: fgetwc ; 
using :: fgetws ; 
using :: fputwc ; 
using :: fputws ; 
using :: fwide ; 
using :: fwprintf ; 
using :: fwscanf ; 
using :: getwc ; 
using :: getwchar ; 
using :: mbrlen ; 
using :: mbrtowc ; 
using :: mbsinit ; 
using :: mbsrtowcs ; 
using :: putwc ; 
using :: putwchar ; 

using :: swprintf ; 

using :: swscanf ; 
using :: ungetwc ; 
using :: vfwprintf ; 

using :: vfwscanf ; 


using :: vswprintf ; 


using :: vswscanf ; 

using :: vwprintf ; 

using :: vwscanf ; 

using :: wcrtomb ; 
using :: wcscat ; 
using :: wcscmp ; 
using :: wcscoll ; 
using :: wcscpy ; 
using :: wcscspn ; 
using :: wcsftime ; 
using :: wcslen ; 
using :: wcsncat ; 
using :: wcsncmp ; 
using :: wcsncpy ; 
using :: wcsrtombs ; 
using :: wcsspn ; 
using :: wcstod ; 

using :: wcstof ; 

using :: wcstok ; 
using :: wcstol ; 
using :: wcstoul ; 
using :: wcsxfrm ; 
using :: wctob ; 
using :: wmemcmp ; 
using :: wmemcpy ; 
using :: wmemmove ; 
using :: wmemset ; 
using :: wprintf ; 
using :: wscanf ; 
using :: wcschr ; 
using :: wcspbrk ; 
using :: wcsrchr ; 
using :: wcsstr ; 
using :: wmemchr ; 
# 232 "/usr/include/c++/4.8/cwchar" 3 

} 







namespace __gnu_cxx 
{ 





using :: wcstold ; 
# 257 "/usr/include/c++/4.8/cwchar" 3 
using :: wcstoll ; 
using :: wcstoull ; 

} 

namespace std 
{ 
using :: __gnu_cxx :: wcstold ; 
using :: __gnu_cxx :: wcstoll ; 
using :: __gnu_cxx :: wcstoull ; 
} 
# 41 "/usr/include/c++/4.8/bits/postypes.h" 2 3 
# 68 "/usr/include/c++/4.8/bits/postypes.h" 3 
namespace std 
{ 

# 88 "/usr/include/c++/4.8/bits/postypes.h" 3 
typedef long streamoff ; 
# 98 "/usr/include/c++/4.8/bits/postypes.h" 3 
typedef ptrdiff_t streamsize ; 
# 111 "/usr/include/c++/4.8/bits/postypes.h" 3 
template < typename _StateT > 
class fpos 
{ 
private : 
streamoff _M_off ; 
_StateT _M_state ; 

public : 




fpos ( ) 
: _M_off ( 0 ) , _M_state ( ) { __CvT__record_line____(__CvT_miT,29,124);} 
# 133 "/usr/include/c++/4.8/bits/postypes.h" 3 
fpos ( streamoff __off ) 
: _M_off ( __off ) , _M_state ( ) { __CvT__record_line____(__CvT_miT,29,134);} 


operator streamoff ( ) const { __CvT__record_line____(__CvT_miT,29,137);return _M_off ; } 


void 
state ( _StateT __st ) 
{ __CvT__record_line____(__CvT_miT,29,142);_M_state = __st ; } 


_StateT 
state ( ) const 
{ __CvT__record_line____(__CvT_miT,29,147);return _M_state ; } 





fpos & 
operator += ( streamoff __off ) 
{ __CvT__record_line____(__CvT_miT,29,155);
__CvT__record_line____(__CvT_miT,29,156);_M_off += __off ; 
__CvT__record_line____(__CvT_miT,29,157);return * this ; 
} 





fpos & 
operator -= ( streamoff __off ) 
{ __CvT__record_line____(__CvT_miT,29,166);
__CvT__record_line____(__CvT_miT,29,167);_M_off -= __off ; 
__CvT__record_line____(__CvT_miT,29,168);return * this ; 
} 







fpos 
operator + ( streamoff __off ) const 
{ __CvT__record_line____(__CvT_miT,29,179);
__CvT__record_line____(__CvT_miT,29,180);fpos __pos ( * this ) ; 
__CvT__record_line____(__CvT_miT,29,181);__pos += __off ; 
__CvT__record_line____(__CvT_miT,29,182);return __pos ; 
} 







fpos 
operator - ( streamoff __off ) const 
{ __CvT__record_line____(__CvT_miT,29,193);
__CvT__record_line____(__CvT_miT,29,194);fpos __pos ( * this ) ; 
__CvT__record_line____(__CvT_miT,29,195);__pos -= __off ; 
__CvT__record_line____(__CvT_miT,29,196);return __pos ; 
} 






streamoff 
operator - ( const fpos & __other ) const 
{ __CvT__record_line____(__CvT_miT,29,206);return _M_off - __other . _M_off ; } 
} ; 






template < typename _StateT > 
inline bool 
operator == ( const fpos < _StateT >& __lhs , const fpos < _StateT >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,29,217);return streamoff ( __lhs ) == streamoff ( __rhs ) ; } 

template < typename _StateT > 
inline bool 
operator != ( const fpos < _StateT >& __lhs , const fpos < _StateT >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,29,222);return streamoff ( __lhs ) != streamoff ( __rhs ) ; } 





typedef fpos < mbstate_t > streampos ; 

typedef fpos < mbstate_t > wstreampos ; 
# 239 "/usr/include/c++/4.8/bits/postypes.h" 3 

} 
# 41 "/usr/include/c++/4.8/bits/char_traits.h" 2 3 
# 1 "/usr/include/c++/4.8/cwchar" 1 3 
# 39 "/usr/include/c++/4.8/cwchar" 3 

# 40 "/usr/include/c++/4.8/cwchar" 3 




# 1 "/usr/include/wchar.h" 1 3 4 
# 45 "/usr/include/c++/4.8/cwchar" 2 3 
# 42 "/usr/include/c++/4.8/bits/char_traits.h" 2 3 

namespace __gnu_cxx 
{ 

# 57 "/usr/include/c++/4.8/bits/char_traits.h" 3 
template < typename _CharT > 
struct _Char_types 
{ 
typedef unsigned long int_type ; 
typedef std :: streampos pos_type ; 
typedef std :: streamoff off_type ; 
typedef std :: mbstate_t state_type ; 
} ; 
# 82 "/usr/include/c++/4.8/bits/char_traits.h" 3 
template < typename _CharT > 
struct char_traits 
{ 
typedef _CharT char_type ; 
typedef typename _Char_types < _CharT >:: int_type int_type ; 
typedef typename _Char_types < _CharT >:: pos_type pos_type ; 
typedef typename _Char_types < _CharT >:: off_type off_type ; 
typedef typename _Char_types < _CharT >:: state_type state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,93);__c1 = __c2 ; } 

static bool 
eq ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,97);return __c1 == __c2 ; } 

static bool 
lt ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,101);return __c1 < __c2 ; } 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , std :: size_t __n ) ; 

static std :: size_t 
length ( const char_type * __s ) ; 

static const char_type * 
find ( const char_type * __s , std :: size_t __n , const char_type & __a ) ; 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) ; 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) ; 

static char_type * 
assign ( char_type * __s , std :: size_t __n , char_type __a ) ; 

static char_type 
to_char_type ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,123);return static_cast < char_type > ( __c ) ; } 

static int_type 
to_int_type ( const char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,127);return static_cast < int_type > ( __c ) ; } 

static bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,131);return __c1 == __c2 ; } 

static int_type 
eof ( ) 
{ __CvT__record_line____(__CvT_miT,15,135);return static_cast < int_type > ( - 1 ) ; } 

static int_type 
not_eof ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,139);return ! eq_int_type ( __c , eof ( ) ) ? __c : to_int_type ( char_type ( ) ) ; } 
} ; 

template < typename _CharT > 
int 
char_traits < _CharT >:: 
compare ( const char_type * __s1 , const char_type * __s2 , std :: size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,146);
__CvT__record_line____(__CvT_miT,15,147);for ( std :: size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,15,148);if ( lt ( __s1 [ __i ] , __s2 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,15,149);return - 1 ; 
}else {__CvT__record_line____(__CvT_miT,15,150);if ( lt ( __s2 [ __i ] , __s1 [ __i ] ) ) 
{__CvT__record_line____(__CvT_miT,15,151);return 1 ; 
}}}__CvT__record_line____(__CvT_miT,15,152);return 0 ; 
} 

template < typename _CharT > 
std :: size_t 
char_traits < _CharT >:: 
length ( const char_type * __p ) 
{ __CvT__record_line____(__CvT_miT,15,159);
__CvT__record_line____(__CvT_miT,15,160);std :: size_t __i = 0 ; 
__CvT__record_line____(__CvT_miT,15,161);while ( ! eq ( __p [ __i ] , char_type ( ) ) ) 
{__CvT__record_line____(__CvT_miT,15,162);++ __i ; 
}__CvT__record_line____(__CvT_miT,15,163);return __i ; 
} 

template < typename _CharT > 
const typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
find ( const char_type * __s , std :: size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,15,170);
__CvT__record_line____(__CvT_miT,15,171);for ( std :: size_t __i = 0 ; __i < __n ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,15,172);if ( eq ( __s [ __i ] , __a ) ) 
{__CvT__record_line____(__CvT_miT,15,173);return __s + __i ; 
}}__CvT__record_line____(__CvT_miT,15,174);return 0 ; 
} 

template < typename _CharT > 
typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
move ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,181);
__CvT__record_line____(__CvT_miT,15,182);return static_cast < _CharT *> ( __builtin_memmove ( __s1 , __s2 , 
__n * sizeof ( char_type ) ) ) ; 
} 

template < typename _CharT > 
typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
copy ( char_type * __s1 , const char_type * __s2 , std :: size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,190);

__CvT__record_line____(__CvT_miT,15,192);std :: copy ( __s2 , __s2 + __n , __s1 ) ; 
__CvT__record_line____(__CvT_miT,15,193);return __s1 ; 
} 

template < typename _CharT > 
typename char_traits < _CharT >:: char_type * 
char_traits < _CharT >:: 
assign ( char_type * __s , std :: size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,15,200);

__CvT__record_line____(__CvT_miT,15,202);std :: fill_n ( __s , __n , __a ) ; 
__CvT__record_line____(__CvT_miT,15,203);return __s ; 
} 


} 

namespace std 
{ 

# 226 "/usr/include/c++/4.8/bits/char_traits.h" 3 
template < class _CharT > 
struct char_traits : public __gnu_cxx :: char_traits < _CharT > 
{ } ; 



template <> 
struct char_traits < char > 
{ 
typedef char char_type ; 
typedef int int_type ; 
typedef streampos pos_type ; 
typedef streamoff off_type ; 
typedef mbstate_t state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,243);__c1 = __c2 ; } 

static bool 
eq ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,247);return __c1 == __c2 ; } 

static bool 
lt ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,251);return __c1 < __c2 ; } 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,255);return __builtin_memcmp ( __s1 , __s2 , __n ) ; } 

static size_t 
length ( const char_type * __s ) 
{ __CvT__record_line____(__CvT_miT,15,259);return __builtin_strlen ( __s ) ; } 

static const char_type * 
find ( const char_type * __s , size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,15,263);return static_cast < const char_type *> ( __builtin_memchr ( __s , __a , __n ) ) ; } 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,267);return static_cast < char_type *> ( __builtin_memmove ( __s1 , __s2 , __n ) ) ; } 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,271);return static_cast < char_type *> ( __builtin_memcpy ( __s1 , __s2 , __n ) ) ; } 

static char_type * 
assign ( char_type * __s , size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,15,275);return static_cast < char_type *> ( __builtin_memset ( __s , __a , __n ) ) ; } 

static char_type 
to_char_type ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,279);return static_cast < char_type > ( __c ) ; } 



static int_type 
to_int_type ( const char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,285);return static_cast < int_type > ( static_cast < unsigned char > ( __c ) ) ; } 

static bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,289);return __c1 == __c2 ; } 

static int_type 
eof ( ) 
{ __CvT__record_line____(__CvT_miT,15,293);return static_cast < int_type > ( - 1 ) ; } 

static int_type 
not_eof ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,297);return ( __c == eof ( ) ) ? 0 : __c ; } 
} ; 




template <> 
struct char_traits < wchar_t > 
{ 
typedef wchar_t char_type ; 
typedef wint_t int_type ; 
typedef streamoff off_type ; 
typedef wstreampos pos_type ; 
typedef mbstate_t state_type ; 

static void 
assign ( char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,314);__c1 = __c2 ; } 

static bool 
eq ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,318);return __c1 == __c2 ; } 

static bool 
lt ( const char_type & __c1 , const char_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,322);return __c1 < __c2 ; } 

static int 
compare ( const char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,326);return wmemcmp ( __s1 , __s2 , __n ) ; } 

static size_t 
length ( const char_type * __s ) 
{ __CvT__record_line____(__CvT_miT,15,330);return wcslen ( __s ) ; } 

static const char_type * 
find ( const char_type * __s , size_t __n , const char_type & __a ) 
{ __CvT__record_line____(__CvT_miT,15,334);return wmemchr ( __s , __a , __n ) ; } 

static char_type * 
move ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,338);return wmemmove ( __s1 , __s2 , __n ) ; } 

static char_type * 
copy ( char_type * __s1 , const char_type * __s2 , size_t __n ) 
{ __CvT__record_line____(__CvT_miT,15,342);return wmemcpy ( __s1 , __s2 , __n ) ; } 

static char_type * 
assign ( char_type * __s , size_t __n , char_type __a ) 
{ __CvT__record_line____(__CvT_miT,15,346);return wmemset ( __s , __a , __n ) ; } 

static char_type 
to_char_type ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,350);return char_type ( __c ) ; } 

static int_type 
to_int_type ( const char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,354);return int_type ( __c ) ; } 

static bool 
eq_int_type ( const int_type & __c1 , const int_type & __c2 ) 
{ __CvT__record_line____(__CvT_miT,15,358);return __c1 == __c2 ; } 

static int_type 
eof ( ) 
{ __CvT__record_line____(__CvT_miT,15,362);return static_cast < int_type > ( ( 0xffffffffu ) ) ; } 

static int_type 
not_eof ( const int_type & __c ) 
{ __CvT__record_line____(__CvT_miT,15,366);return eq_int_type ( __c , eof ( ) ) ? 0 : __c ; } 
} ; 



} 
# 41 "/usr/include/c++/4.8/string" 2 3 
# 1 "/usr/include/c++/4.8/bits/allocator.h" 1 3 
# 46 "/usr/include/c++/4.8/bits/allocator.h" 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++allocator.h" 1 3 
# 33 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++allocator.h" 3 
# 1 "/usr/include/c++/4.8/ext/new_allocator.h" 1 3 
# 33 "/usr/include/c++/4.8/ext/new_allocator.h" 3 
# 1 "/usr/include/c++/4.8/new" 1 3 
# 37 "/usr/include/c++/4.8/new" 3 

# 38 "/usr/include/c++/4.8/new" 3 


# 1 "/usr/include/c++/4.8/exception" 1 3 
# 33 "/usr/include/c++/4.8/exception" 3 

# 34 "/usr/include/c++/4.8/exception" 3 

# pragma GCC visibility push ( default ) 
 

# 1 "/usr/include/c++/4.8/bits/atomic_lockfree_defines.h" 1 3 
# 33 "/usr/include/c++/4.8/bits/atomic_lockfree_defines.h" 3 

# 34 "/usr/include/c++/4.8/bits/atomic_lockfree_defines.h" 3 
# 39 "/usr/include/c++/4.8/exception" 2 3 

extern "C++" { 

namespace std 
{ 
# 60 "/usr/include/c++/4.8/exception" 3 
class exception 
{ 
public : 
exception ( ) throw ( ) { } 
virtual ~ exception ( ) throw ( ) ; 



virtual const char * what ( ) const throw ( ) ; 
} ; 



class bad_exception : public exception 
{ 
public : 
bad_exception ( ) throw ( ) { __CvT__record_line____(__CvT_miT,41,76);} 



virtual ~ bad_exception ( ) throw ( ) ; 


virtual const char * what ( ) const throw ( ) ; 
} ; 


typedef void ( * terminate_handler ) ( ) ; 


typedef void ( * unexpected_handler ) ( ) ; 


terminate_handler set_terminate ( terminate_handler ) throw ( ) ; 



void terminate ( ) throw ( ) ; 


unexpected_handler set_unexpected ( unexpected_handler ) throw ( ) ; 



void unexpected ( ) ; 
# 117 "/usr/include/c++/4.8/exception" 3 
bool uncaught_exception ( ) throw ( ) ; 


} 

namespace __gnu_cxx 
{ 

# 142 "/usr/include/c++/4.8/exception" 3 
void __verbose_terminate_handler ( ) ; 


} 

} 

# pragma GCC visibility pop 
 # 41 "/usr/include/c++/4.8/new" 2 3 

# pragma GCC visibility push ( default ) 
 
extern "C++" { 

namespace std 
{ 






class bad_alloc : public exception 
{ 
public : 
bad_alloc ( ) throw ( ) { __CvT__record_line____(__CvT_miT,40,56);} 



virtual ~ bad_alloc ( ) throw ( ) ; 


virtual const char * what ( ) const throw ( ) ; 
} ; 

struct nothrow_t { } ; 

extern const nothrow_t nothrow ; 



typedef void ( * new_handler ) ( ) ; 



new_handler set_new_handler ( new_handler ) throw ( ) ; 
} 
# 91 "/usr/include/c++/4.8/new" 3 
void * operator new ( std :: size_t ) throw ( std :: bad_alloc ) 
; 
void * operator new [ ] ( std :: size_t ) throw ( std :: bad_alloc ) 
; 
void operator delete ( void * ) throw ( ) 
; 
void operator delete [ ] ( void * ) throw ( ) 
; 
void * operator new ( std :: size_t , const std :: nothrow_t & ) throw ( ) 
; 
void * operator new [ ] ( std :: size_t , const std :: nothrow_t & ) throw ( ) 
; 
void operator delete ( void * , const std :: nothrow_t & ) throw ( ) 
; 
void operator delete [ ] ( void * , const std :: nothrow_t & ) throw ( ) 
; 


inline void * operator new ( std :: size_t , void * __p ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,40,110);return __p ; } 
inline void * operator new [ ] ( std :: size_t , void * __p ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,40,112);return __p ; } 


inline void operator delete ( void * , void * ) throw ( ) { __CvT__record_line____(__CvT_miT,40,115);} 
inline void operator delete [ ] ( void * , void * ) throw ( ) { __CvT__record_line____(__CvT_miT,40,116);} 

} 

# pragma GCC visibility pop 
 # 34 "/usr/include/c++/4.8/ext/new_allocator.h" 2 3 






namespace __gnu_cxx 
{ 


using std :: size_t ; 
using std :: ptrdiff_t ; 
# 57 "/usr/include/c++/4.8/ext/new_allocator.h" 3 
template < typename _Tp > 
class new_allocator 
{ 
public : 
typedef size_t size_type ; 
typedef ptrdiff_t difference_type ; 
typedef _Tp * pointer ; 
typedef const _Tp * const_pointer ; 
typedef _Tp & reference ; 
typedef const _Tp & const_reference ; 
typedef _Tp value_type ; 

template < typename _Tp1 > 
struct rebind 
{ typedef new_allocator < _Tp1 > other ; } ; 







new_allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,39,79);} 

new_allocator ( const new_allocator & ) throw ( ) { __CvT__record_line____(__CvT_miT,39,81);} 

template < typename _Tp1 > 
new_allocator ( const new_allocator < _Tp1 >& ) throw ( ) { __CvT__record_line____(__CvT_miT,39,84);} 

~ new_allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,39,86);} 

pointer 
address ( reference __x ) const 
{ __CvT__record_line____(__CvT_miT,39,90);return std :: __addressof ( __x ) ; } 

const_pointer 
address ( const_reference __x ) const 
{ __CvT__record_line____(__CvT_miT,39,94);return std :: __addressof ( __x ) ; } 



pointer 
allocate ( size_type __n , const void * = 0 ) 
{ __CvT__record_line____(__CvT_miT,39,100);
__CvT__record_line____(__CvT_miT,39,101);if ( __n > this -> max_size ( ) ) 
{__CvT__record_line____(__CvT_miT,39,102);std :: __throw_bad_alloc ( ) ; 

}__CvT__record_line____(__CvT_miT,39,104);return static_cast < _Tp *> ( :: operator new ( __n * sizeof ( _Tp ) ) ) ; 
} 


void 
deallocate ( pointer __p , size_type ) 
{ __CvT__record_line____(__CvT_miT,39,110);:: operator delete ( __p ) ; } 

size_type 
max_size ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,39,114);return size_t ( - 1 ) / sizeof ( _Tp ) ; } 
# 128 "/usr/include/c++/4.8/ext/new_allocator.h" 3 
void 
construct ( pointer __p , const _Tp & __val ) 
{ __CvT__record_line____(__CvT_miT,39,130);:: new ( ( void * ) __p ) _Tp ( __val ) ; } 

void 
destroy ( pointer __p ) { __CvT__record_line____(__CvT_miT,39,133);__p -> ~ _Tp ( ) ; } 

} ; 

template < typename _Tp > 
inline bool 
operator == ( const new_allocator < _Tp >& , const new_allocator < _Tp >& ) 
{ __CvT__record_line____(__CvT_miT,39,140);return true ; } 

template < typename _Tp > 
inline bool 
operator != ( const new_allocator < _Tp >& , const new_allocator < _Tp >& ) 
{ __CvT__record_line____(__CvT_miT,39,145);return false ; } 


} 
# 34 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++allocator.h" 2 3 
# 47 "/usr/include/c++/4.8/bits/allocator.h" 2 3 





namespace std 
{ 








template <> 
class allocator < void > 
{ 
public : 
typedef size_t size_type ; 
typedef ptrdiff_t difference_type ; 
typedef void * pointer ; 
typedef const void * const_pointer ; 
typedef void value_type ; 

template < typename _Tp1 > 
struct rebind 
{ typedef allocator < _Tp1 > other ; } ; 






} ; 
# 91 "/usr/include/c++/4.8/bits/allocator.h" 3 
template < typename _Tp > 
class allocator : public __gnu_cxx :: new_allocator < _Tp > 
{ 
public : 
typedef size_t size_type ; 
typedef ptrdiff_t difference_type ; 
typedef _Tp * pointer ; 
typedef const _Tp * const_pointer ; 
typedef _Tp & reference ; 
typedef const _Tp & const_reference ; 
typedef _Tp value_type ; 

template < typename _Tp1 > 
struct rebind 
{ typedef allocator < _Tp1 > other ; } ; 







allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,37,113);} 

allocator ( const allocator & __a ) throw ( ) 
: __gnu_cxx :: new_allocator < _Tp > ( __a ) { __CvT__record_line____(__CvT_miT,37,116);} 

template < typename _Tp1 > 
allocator ( const allocator < _Tp1 >& ) throw ( ) { __CvT__record_line____(__CvT_miT,37,119);} 

~ allocator ( ) throw ( ) { __CvT__record_line____(__CvT_miT,37,121);} 


} ; 

template < typename _T1 , typename _T2 > 
inline bool 
operator == ( const allocator < _T1 >& , const allocator < _T2 >& ) 
{ __CvT__record_line____(__CvT_miT,37,129);return true ; } 

template < typename _Tp > 
inline bool 
operator == ( const allocator < _Tp >& , const allocator < _Tp >& ) 
{ __CvT__record_line____(__CvT_miT,37,134);return true ; } 

template < typename _T1 , typename _T2 > 
inline bool 
operator != ( const allocator < _T1 >& , const allocator < _T2 >& ) 
{ __CvT__record_line____(__CvT_miT,37,139);return false ; } 

template < typename _Tp > 
inline bool 
operator != ( const allocator < _Tp >& , const allocator < _Tp >& ) 
{ __CvT__record_line____(__CvT_miT,37,144);return false ; } 






extern template class allocator < char > ; 
extern template class allocator < wchar_t > ; 






template < typename _Alloc , bool = __is_empty ( _Alloc ) > 
struct __alloc_swap 
{ static void _S_do_it ( _Alloc & , _Alloc & ) { __CvT__record_line____(__CvT_miT,37,161);} } ; 

template < typename _Alloc > 
struct __alloc_swap < _Alloc , false > 
{ 
static void 
_S_do_it ( _Alloc & __one , _Alloc & __two ) 
{ __CvT__record_line____(__CvT_miT,37,168);

__CvT__record_line____(__CvT_miT,37,170);if ( __one != __two ) 
{__CvT__record_line____(__CvT_miT,37,171);swap ( __one , __two ) ; 
}} 
} ; 


template < typename _Alloc , bool = __is_empty ( _Alloc ) > 
struct __alloc_neq 
{ 
static bool 
_S_do_it ( const _Alloc & , const _Alloc & ) 
{ __CvT__record_line____(__CvT_miT,37,181);return false ; } 
} ; 

template < typename _Alloc > 
struct __alloc_neq < _Alloc , false > 
{ 
static bool 
_S_do_it ( const _Alloc & __one , const _Alloc & __two ) 
{ __CvT__record_line____(__CvT_miT,37,189);return __one != __two ; } 
} ; 
# 218 "/usr/include/c++/4.8/bits/allocator.h" 3 

} 
# 42 "/usr/include/c++/4.8/string" 2 3 

# 1 "/usr/include/c++/4.8/bits/localefwd.h" 1 3 
# 37 "/usr/include/c++/4.8/bits/localefwd.h" 3 

# 38 "/usr/include/c++/4.8/bits/localefwd.h" 3 


# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++locale.h" 1 3 
# 39 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++locale.h" 3 

# 40 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++locale.h" 3 

# 1 "/usr/include/c++/4.8/clocale" 1 3 
# 39 "/usr/include/c++/4.8/clocale" 3 

# 40 "/usr/include/c++/4.8/clocale" 3 


# 1 "/usr/include/locale.h" 1 3 4 
# 28 "/usr/include/locale.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4 
# 29 "/usr/include/locale.h" 2 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4 
# 30 "/usr/include/locale.h" 2 3 4 

extern "C" { 
# 50 "/usr/include/locale.h" 3 4 



struct lconv 
{ 


char * decimal_point ; 
char * thousands_sep ; 





char * grouping ; 





char * int_curr_symbol ; 
char * currency_symbol ; 
char * mon_decimal_point ; 
char * mon_thousands_sep ; 
char * mon_grouping ; 
char * positive_sign ; 
char * negative_sign ; 
char int_frac_digits ; 
char frac_digits ; 

char p_cs_precedes ; 

char p_sep_by_space ; 

char n_cs_precedes ; 

char n_sep_by_space ; 






char p_sign_posn ; 
char n_sign_posn ; 


char int_p_cs_precedes ; 

char int_p_sep_by_space ; 

char int_n_cs_precedes ; 

char int_n_sep_by_space ; 






char int_p_sign_posn ; 
char int_n_sign_posn ; 
# 120 "/usr/include/locale.h" 3 4 
} ; 



extern char * setlocale ( int __category , const char * __locale ) throw ( ) ; 


extern struct lconv * localeconv ( void ) throw ( ) ; 


# 151 "/usr/include/locale.h" 3 4 
extern __locale_t newlocale ( int __category_mask , const char * __locale , 
__locale_t __base ) throw ( ) ; 
# 186 "/usr/include/locale.h" 3 4 
extern __locale_t duplocale ( __locale_t __dataset ) throw ( ) ; 



extern void freelocale ( __locale_t __dataset ) throw ( ) ; 






extern __locale_t uselocale ( __locale_t __dataset ) throw ( ) ; 







} 
# 43 "/usr/include/c++/4.8/clocale" 2 3 
# 51 "/usr/include/c++/4.8/clocale" 3 
namespace std 
{ 
using :: lconv ; 
using :: setlocale ; 
using :: localeconv ; 
} 
# 42 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++locale.h" 2 3 






namespace __gnu_cxx 
{ 


extern "C" __typeof ( uselocale ) __uselocale ; 


} 


namespace std 
{ 


typedef __locale_t __c_locale ; 





inline int 
__convert_from_v ( const __c_locale & __cloc , 
char * __out , 
const int __size , 
const char * __fmt , ... ) 
{ __CvT__record_line____(__CvT_miT,44,73);

__CvT__record_line____(__CvT_miT,44,75);__c_locale __old = __gnu_cxx :: __uselocale ( __cloc ) ; 
# 88 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++locale.h" 3 
__CvT__record_line____(__CvT_miT,44,88);__builtin_va_list __args ; 
__CvT__record_line____(__CvT_miT,44,89);__builtin_va_start ( __args , __fmt ) ; 


__CvT__record_line____(__CvT_miT,44,92);const int __ret = __builtin_vsnprintf ( __out , __size , __fmt , __args ) ; 




__CvT__record_line____(__CvT_miT,44,97);__builtin_va_end ( __args ) ; 


__CvT__record_line____(__CvT_miT,44,100);__gnu_cxx :: __uselocale ( __old ) ; 







__CvT__record_line____(__CvT_miT,44,108);return __ret ; 
} 


} 
# 41 "/usr/include/c++/4.8/bits/localefwd.h" 2 3 
# 1 "/usr/include/c++/4.8/iosfwd" 1 3 
# 36 "/usr/include/c++/4.8/iosfwd" 3 

# 37 "/usr/include/c++/4.8/iosfwd" 3 





namespace std 
{ 

# 74 "/usr/include/c++/4.8/iosfwd" 3 
class ios_base ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ios ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_streambuf ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_istream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ostream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_iostream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_stringbuf ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_istringstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_ostringstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > , 
typename _Alloc = allocator < _CharT > > 
class basic_stringstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_filebuf ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ifstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_ofstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class basic_fstream ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class istreambuf_iterator ; 

template < typename _CharT , typename _Traits = char_traits < _CharT > > 
class ostreambuf_iterator ; 



typedef basic_ios < char > ios ; 


typedef basic_streambuf < char > streambuf ; 


typedef basic_istream < char > istream ; 


typedef basic_ostream < char > ostream ; 


typedef basic_iostream < char > iostream ; 


typedef basic_stringbuf < char > stringbuf ; 


typedef basic_istringstream < char > istringstream ; 


typedef basic_ostringstream < char > ostringstream ; 


typedef basic_stringstream < char > stringstream ; 


typedef basic_filebuf < char > filebuf ; 


typedef basic_ifstream < char > ifstream ; 


typedef basic_ofstream < char > ofstream ; 


typedef basic_fstream < char > fstream ; 



typedef basic_ios < wchar_t > wios ; 


typedef basic_streambuf < wchar_t > wstreambuf ; 


typedef basic_istream < wchar_t > wistream ; 


typedef basic_ostream < wchar_t > wostream ; 


typedef basic_iostream < wchar_t > wiostream ; 


typedef basic_stringbuf < wchar_t > wstringbuf ; 


typedef basic_istringstream < wchar_t > wistringstream ; 


typedef basic_ostringstream < wchar_t > wostringstream ; 


typedef basic_stringstream < wchar_t > wstringstream ; 


typedef basic_filebuf < wchar_t > wfilebuf ; 


typedef basic_ifstream < wchar_t > wifstream ; 


typedef basic_ofstream < wchar_t > wofstream ; 


typedef basic_fstream < wchar_t > wfstream ; 




} 
# 42 "/usr/include/c++/4.8/bits/localefwd.h" 2 3 
# 1 "/usr/include/c++/4.8/cctype" 1 3 
# 39 "/usr/include/c++/4.8/cctype" 3 

# 40 "/usr/include/c++/4.8/cctype" 3 


# 1 "/usr/include/ctype.h" 1 3 4 
# 26 "/usr/include/ctype.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4 
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4 


typedef unsigned char __u_char ; 
typedef unsigned short int __u_short ; 
typedef unsigned int __u_int ; 
typedef unsigned long int __u_long ; 


typedef signed char __int8_t ; 
typedef unsigned char __uint8_t ; 
typedef signed short int __int16_t ; 
typedef unsigned short int __uint16_t ; 
typedef signed int __int32_t ; 
typedef unsigned int __uint32_t ; 

typedef signed long int __int64_t ; 
typedef unsigned long int __uint64_t ; 







typedef long int __quad_t ; 
typedef unsigned long int __u_quad_t ; 
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4 
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4 


typedef unsigned long int __dev_t ; 
typedef unsigned int __uid_t ; 
typedef unsigned int __gid_t ; 
typedef unsigned long int __ino_t ; 
typedef unsigned long int __ino64_t ; 
typedef unsigned int __mode_t ; 
typedef unsigned long int __nlink_t ; 
typedef long int __off_t ; 
typedef long int __off64_t ; 
typedef int __pid_t ; 
typedef struct { int __val [ 2 ] ; } __fsid_t ; 
typedef long int __clock_t ; 
typedef unsigned long int __rlim_t ; 
typedef unsigned long int __rlim64_t ; 
typedef unsigned int __id_t ; 
typedef long int __time_t ; 
typedef unsigned int __useconds_t ; 
typedef long int __suseconds_t ; 

typedef int __daddr_t ; 
typedef int __key_t ; 


typedef int __clockid_t ; 


typedef void * __timer_t ; 


typedef long int __blksize_t ; 




typedef long int __blkcnt_t ; 
typedef long int __blkcnt64_t ; 


typedef unsigned long int __fsblkcnt_t ; 
typedef unsigned long int __fsblkcnt64_t ; 


typedef unsigned long int __fsfilcnt_t ; 
typedef unsigned long int __fsfilcnt64_t ; 


typedef long int __fsword_t ; 

typedef long int __ssize_t ; 


typedef long int __syscall_slong_t ; 

typedef unsigned long int __syscall_ulong_t ; 



typedef __off64_t __loff_t ; 
typedef __quad_t * __qaddr_t ; 
typedef char * __caddr_t ; 


typedef long int __intptr_t ; 


typedef unsigned int __socklen_t ; 
# 27 "/usr/include/ctype.h" 2 3 4 

extern "C" { 
# 39 "/usr/include/ctype.h" 3 4 
# 1 "/usr/include/endian.h" 1 3 4 
# 36 "/usr/include/endian.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4 
# 37 "/usr/include/endian.h" 2 3 4 
# 60 "/usr/include/endian.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4 
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4 






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4 
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4 
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4 
static __inline unsigned int 
__bswap_32 ( unsigned int __bsx ) 
{ __CvT__record_line____(__CvT_miT,55,46);
__CvT__record_line____(__CvT_miT,55,47);return __builtin_bswap32 ( __bsx ) ; 
} 
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4 
static __inline __uint64_t 
__bswap_64 ( __uint64_t __bsx ) 
{ __CvT__record_line____(__CvT_miT,55,110);
__CvT__record_line____(__CvT_miT,55,111);return __builtin_bswap64 ( __bsx ) ; 
} 
# 61 "/usr/include/endian.h" 2 3 4 
# 40 "/usr/include/ctype.h" 2 3 4 






enum 
{ 
_ISupper = ( ( 0 ) < 8 ? ( ( 1 << ( 0 ) ) << 8 ) : ( ( 1 << ( 0 ) ) >> 8 ) ) , 
_ISlower = ( ( 1 ) < 8 ? ( ( 1 << ( 1 ) ) << 8 ) : ( ( 1 << ( 1 ) ) >> 8 ) ) , 
_ISalpha = ( ( 2 ) < 8 ? ( ( 1 << ( 2 ) ) << 8 ) : ( ( 1 << ( 2 ) ) >> 8 ) ) , 
_ISdigit = ( ( 3 ) < 8 ? ( ( 1 << ( 3 ) ) << 8 ) : ( ( 1 << ( 3 ) ) >> 8 ) ) , 
_ISxdigit = ( ( 4 ) < 8 ? ( ( 1 << ( 4 ) ) << 8 ) : ( ( 1 << ( 4 ) ) >> 8 ) ) , 
_ISspace = ( ( 5 ) < 8 ? ( ( 1 << ( 5 ) ) << 8 ) : ( ( 1 << ( 5 ) ) >> 8 ) ) , 
_ISprint = ( ( 6 ) < 8 ? ( ( 1 << ( 6 ) ) << 8 ) : ( ( 1 << ( 6 ) ) >> 8 ) ) , 
_ISgraph = ( ( 7 ) < 8 ? ( ( 1 << ( 7 ) ) << 8 ) : ( ( 1 << ( 7 ) ) >> 8 ) ) , 
_ISblank = ( ( 8 ) < 8 ? ( ( 1 << ( 8 ) ) << 8 ) : ( ( 1 << ( 8 ) ) >> 8 ) ) , 
_IScntrl = ( ( 9 ) < 8 ? ( ( 1 << ( 9 ) ) << 8 ) : ( ( 1 << ( 9 ) ) >> 8 ) ) , 
_ISpunct = ( ( 10 ) < 8 ? ( ( 1 << ( 10 ) ) << 8 ) : ( ( 1 << ( 10 ) ) >> 8 ) ) , 
_ISalnum = ( ( 11 ) < 8 ? ( ( 1 << ( 11 ) ) << 8 ) : ( ( 1 << ( 11 ) ) >> 8 ) ) 
} ; 
# 79 "/usr/include/ctype.h" 3 4 
extern const unsigned short int ** __ctype_b_loc ( void ) 
throw ( ) ; 
extern const __int32_t ** __ctype_tolower_loc ( void ) 
throw ( ) ; 
extern const __int32_t ** __ctype_toupper_loc ( void ) 
throw ( ) ; 
# 104 "/usr/include/ctype.h" 3 4 






extern int isalnum ( int ) throw ( ) ; 
extern int isalpha ( int ) throw ( ) ; 
extern int iscntrl ( int ) throw ( ) ; 
extern int isdigit ( int ) throw ( ) ; 
extern int islower ( int ) throw ( ) ; 
extern int isgraph ( int ) throw ( ) ; 
extern int isprint ( int ) throw ( ) ; 
extern int ispunct ( int ) throw ( ) ; 
extern int isspace ( int ) throw ( ) ; 
extern int isupper ( int ) throw ( ) ; 
extern int isxdigit ( int ) throw ( ) ; 



extern int tolower ( int __c ) throw ( ) ; 


extern int toupper ( int __c ) throw ( ) ; 








extern int isblank ( int ) throw ( ) ; 






extern int isctype ( int __c , int __mask ) throw ( ) ; 






extern int isascii ( int __c ) throw ( ) ; 



extern int toascii ( int __c ) throw ( ) ; 



extern int _toupper ( int ) throw ( ) ; 
extern int _tolower ( int ) throw ( ) ; 
# 271 "/usr/include/ctype.h" 3 4 
extern int isalnum_l ( int , __locale_t ) throw ( ) ; 
extern int isalpha_l ( int , __locale_t ) throw ( ) ; 
extern int iscntrl_l ( int , __locale_t ) throw ( ) ; 
extern int isdigit_l ( int , __locale_t ) throw ( ) ; 
extern int islower_l ( int , __locale_t ) throw ( ) ; 
extern int isgraph_l ( int , __locale_t ) throw ( ) ; 
extern int isprint_l ( int , __locale_t ) throw ( ) ; 
extern int ispunct_l ( int , __locale_t ) throw ( ) ; 
extern int isspace_l ( int , __locale_t ) throw ( ) ; 
extern int isupper_l ( int , __locale_t ) throw ( ) ; 
extern int isxdigit_l ( int , __locale_t ) throw ( ) ; 

extern int isblank_l ( int , __locale_t ) throw ( ) ; 



extern int __tolower_l ( int __c , __locale_t __l ) throw ( ) ; 
extern int tolower_l ( int __c , __locale_t __l ) throw ( ) ; 


extern int __toupper_l ( int __c , __locale_t __l ) throw ( ) ; 
extern int toupper_l ( int __c , __locale_t __l ) throw ( ) ; 
# 347 "/usr/include/ctype.h" 3 4 
} 
# 43 "/usr/include/c++/4.8/cctype" 2 3 
# 62 "/usr/include/c++/4.8/cctype" 3 
namespace std 
{ 
using :: isalnum ; 
using :: isalpha ; 
using :: iscntrl ; 
using :: isdigit ; 
using :: isgraph ; 
using :: islower ; 
using :: isprint ; 
using :: ispunct ; 
using :: isspace ; 
using :: isupper ; 
using :: isxdigit ; 
using :: tolower ; 
using :: toupper ; 
} 
# 43 "/usr/include/c++/4.8/bits/localefwd.h" 2 3 

namespace std 
{ 

# 55 "/usr/include/c++/4.8/bits/localefwd.h" 3 
class locale ; 

template < typename _Facet > 
bool 
has_facet ( const locale & ) throw ( ) ; 

template < typename _Facet > 
const _Facet & 
use_facet ( const locale & ) ; 


template < typename _CharT > 
bool 
isspace ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isprint ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
iscntrl ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isupper ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
islower ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isalpha ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isdigit ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
ispunct ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isxdigit ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isalnum ( _CharT , const locale & ) ; 

template < typename _CharT > 
bool 
isgraph ( _CharT , const locale & ) ; 

template < typename _CharT > 
_CharT 
toupper ( _CharT , const locale & ) ; 

template < typename _CharT > 
_CharT 
tolower ( _CharT , const locale & ) ; 


class ctype_base ; 
template < typename _CharT > 
class ctype ; 
template <> class ctype < char > ; 

template <> class ctype < wchar_t > ; 

template < typename _CharT > 
class ctype_byname ; 


class codecvt_base ; 
template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt ; 
template <> class codecvt < char , char , mbstate_t > ; 

template <> class codecvt < wchar_t , char , mbstate_t > ; 

template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt_byname ; 



template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class num_get ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class num_put ; 

template < typename _CharT > class numpunct ; 
template < typename _CharT > class numpunct_byname ; 


template < typename _CharT > 
class collate ; 
template < typename _CharT > class 
collate_byname ; 


class time_base ; 
template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class time_get ; 
template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class time_get_byname ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class time_put ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class time_put_byname ; 


class money_base ; 

template < typename _CharT , typename _InIter = istreambuf_iterator < _CharT > > 
class money_get ; 
template < typename _CharT , typename _OutIter = ostreambuf_iterator < _CharT > > 
class money_put ; 

template < typename _CharT , bool _Intl = false > 
class moneypunct ; 
template < typename _CharT , bool _Intl = false > 
class moneypunct_byname ; 


class messages_base ; 
template < typename _CharT > 
class messages ; 
template < typename _CharT > 
class messages_byname ; 


} 
# 44 "/usr/include/c++/4.8/string" 2 3 
# 1 "/usr/include/c++/4.8/bits/ostream_insert.h" 1 3 
# 33 "/usr/include/c++/4.8/bits/ostream_insert.h" 3 

# 34 "/usr/include/c++/4.8/bits/ostream_insert.h" 3 


# 1 "/usr/include/c++/4.8/bits/cxxabi_forced.h" 1 3 
# 34 "/usr/include/c++/4.8/bits/cxxabi_forced.h" 3 

# 35 "/usr/include/c++/4.8/bits/cxxabi_forced.h" 3 

# pragma GCC visibility push ( default ) 
 

namespace __cxxabiv1 
{ 







class __forced_unwind 
{ 
virtual ~ __forced_unwind ( ) throw ( ) ; 


virtual void __pure_dummy ( ) = 0 ; 
} ; 
} 


# pragma GCC visibility pop 
 # 37 "/usr/include/c++/4.8/bits/ostream_insert.h" 2 3 

namespace std 
{ 


template < typename _CharT , typename _Traits > 
inline void 
__ostream_write ( basic_ostream < _CharT , _Traits >& __out , 
const _CharT * __s , streamsize __n ) 
{ 
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef typename __ostream_type :: ios_base __ios_base ; 

const streamsize __put = __out . rdbuf ( ) -> sputn ( __s , __n ) ; 
if ( __put != __n ) 
__out . setstate ( __ios_base :: badbit ) ; 
} 

template < typename _CharT , typename _Traits > 
inline void 
__ostream_fill ( basic_ostream < _CharT , _Traits >& __out , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,57,58);
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef typename __ostream_type :: ios_base __ios_base ; 

__CvT__record_line____(__CvT_miT,57,62);const _CharT __c = __out . fill ( ) ; 
__CvT__record_line____(__CvT_miT,57,63);for ( ; __n > 0 ; -- __n ) 
{{ 
__CvT__record_line____(__CvT_miT,57,65);const typename _Traits :: int_type __put = __out . rdbuf ( ) -> sputc ( __c ) ; 
__CvT__record_line____(__CvT_miT,57,66);if ( _Traits :: eq_int_type ( __put , _Traits :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,57,68);__out . setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,57,69);break ; 
} 
}} 
}} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
__ostream_insert ( basic_ostream < _CharT , _Traits >& __out , 
const _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,57,78);
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef typename __ostream_type :: ios_base __ios_base ; 

__CvT__record_line____(__CvT_miT,57,82);typename __ostream_type :: sentry __cerb ( __out ) ; 
__CvT__record_line____(__CvT_miT,57,83);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,57,85);try 
{ 
__CvT__record_line____(__CvT_miT,57,87);const streamsize __w = __out . width ( ) ; 
__CvT__record_line____(__CvT_miT,57,88);if ( __w > __n ) 
{{ 
__CvT__record_line____(__CvT_miT,57,90);const bool __left = ( ( __out . flags ( ) 
& __ios_base :: adjustfield ) 
== __ios_base :: left ) ; 
__CvT__record_line____(__CvT_miT,57,93);if ( ! __left ) 
{__CvT__record_line____(__CvT_miT,57,94);__ostream_fill ( __out , __w - __n ) ; 
}__CvT__record_line____(__CvT_miT,57,95);if ( __out . good ( ) ) 
{__CvT__record_line____(__CvT_miT,57,96);__ostream_write ( __out , __s , __n ) ; 
}__CvT__record_line____(__CvT_miT,57,97);if ( __left && __out . good ( ) ) 
{__CvT__record_line____(__CvT_miT,57,98);__ostream_fill ( __out , __w - __n ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,57,101);__ostream_write ( __out , __s , __n ) ; 
}__CvT__record_line____(__CvT_miT,57,102);__out . width ( 0 ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,57,106);__out . _M_setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,57,107);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,57,110);__out . _M_setstate ( __ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,57,112);return __out ; 
} 




extern template ostream & __ostream_insert ( ostream & , const char * , streamsize ) ; 


extern template wostream & __ostream_insert ( wostream & , const wchar_t * , 
streamsize ) ; 




} 
# 45 "/usr/include/c++/4.8/string" 2 3 



# 1 "/usr/include/c++/4.8/bits/stl_function.h" 1 3 
# 59 "/usr/include/c++/4.8/bits/stl_function.h" 3 
namespace std 
{ 

# 100 "/usr/include/c++/4.8/bits/stl_function.h" 3 
template < typename _Arg , typename _Result > 
struct unary_function 
{ 

typedef _Arg argument_type ; 


typedef _Result result_type ; 
} ; 




template < typename _Arg1 , typename _Arg2 , typename _Result > 
struct binary_function 
{ 

typedef _Arg1 first_argument_type ; 


typedef _Arg2 second_argument_type ; 


typedef _Result result_type ; 
} ; 
# 139 "/usr/include/c++/4.8/bits/stl_function.h" 3 
template < typename _Tp > 
struct plus : public binary_function < _Tp , _Tp , _Tp > 
{ 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,144);return __x + __y ; } 
} ; 


template < typename _Tp > 
struct minus : public binary_function < _Tp , _Tp , _Tp > 
{ 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,153);return __x - __y ; } 
} ; 


template < typename _Tp > 
struct multiplies : public binary_function < _Tp , _Tp , _Tp > 
{ 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,162);return __x * __y ; } 
} ; 


template < typename _Tp > 
struct divides : public binary_function < _Tp , _Tp , _Tp > 
{ 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,171);return __x / __y ; } 
} ; 


template < typename _Tp > 
struct modulus : public binary_function < _Tp , _Tp , _Tp > 
{ 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,180);return __x % __y ; } 
} ; 


template < typename _Tp > 
struct negate : public unary_function < _Tp , _Tp > 
{ 
_Tp 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,59,189);return - __x ; } 
} ; 
# 203 "/usr/include/c++/4.8/bits/stl_function.h" 3 
template < typename _Tp > 
struct equal_to : public binary_function < _Tp , _Tp , bool > 
{ 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,208);return __x == __y ; } 
} ; 


template < typename _Tp > 
struct not_equal_to : public binary_function < _Tp , _Tp , bool > 
{ 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,217);return __x != __y ; } 
} ; 


template < typename _Tp > 
struct greater : public binary_function < _Tp , _Tp , bool > 
{ 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,226);return __x > __y ; } 
} ; 


template < typename _Tp > 
struct less : public binary_function < _Tp , _Tp , bool > 
{ 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,235);return __x < __y ; } 
} ; 


template < typename _Tp > 
struct greater_equal : public binary_function < _Tp , _Tp , bool > 
{ 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,244);return __x >= __y ; } 
} ; 


template < typename _Tp > 
struct less_equal : public binary_function < _Tp , _Tp , bool > 
{ 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,253);return __x <= __y ; } 
} ; 
# 267 "/usr/include/c++/4.8/bits/stl_function.h" 3 
template < typename _Tp > 
struct logical_and : public binary_function < _Tp , _Tp , bool > 
{ 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,272);return __x && __y ; } 
} ; 


template < typename _Tp > 
struct logical_or : public binary_function < _Tp , _Tp , bool > 
{ 
bool 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,281);return __x || __y ; } 
} ; 


template < typename _Tp > 
struct logical_not : public unary_function < _Tp , bool > 
{ 
bool 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,59,290);return ! __x ; } 
} ; 




template < typename _Tp > 
struct bit_and : public binary_function < _Tp , _Tp , _Tp > 
{ 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,301);return __x & __y ; } 
} ; 

template < typename _Tp > 
struct bit_or : public binary_function < _Tp , _Tp , _Tp > 
{ 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,309);return __x | __y ; } 
} ; 

template < typename _Tp > 
struct bit_xor : public binary_function < _Tp , _Tp , _Tp > 
{ 
_Tp 
operator ( ) ( const _Tp & __x , const _Tp & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,317);return __x ^ __y ; } 
} ; 
# 350 "/usr/include/c++/4.8/bits/stl_function.h" 3 
template < typename _Predicate > 
class unary_negate 
: public unary_function < typename _Predicate :: argument_type , bool > 
{ 
protected : 
_Predicate _M_pred ; 

public : 
explicit 
unary_negate ( const _Predicate & __x ) : _M_pred ( __x ) { __CvT__record_line____(__CvT_miT,59,359);} 

bool 
operator ( ) ( const typename _Predicate :: argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,59,363);return ! _M_pred ( __x ) ; } 
} ; 


template < typename _Predicate > 
inline unary_negate < _Predicate > 
not1 ( const _Predicate & __pred ) 
{ __CvT__record_line____(__CvT_miT,59,370);return unary_negate < _Predicate > ( __pred ) ; } 


template < typename _Predicate > 
class binary_negate 
: public binary_function < typename _Predicate :: first_argument_type , 
typename _Predicate :: second_argument_type , bool > 
{ 
protected : 
_Predicate _M_pred ; 

public : 
explicit 
binary_negate ( const _Predicate & __x ) : _M_pred ( __x ) { __CvT__record_line____(__CvT_miT,59,383);} 

bool 
operator ( ) ( const typename _Predicate :: first_argument_type & __x , 
const typename _Predicate :: second_argument_type & __y ) const 
{ __CvT__record_line____(__CvT_miT,59,388);return ! _M_pred ( __x , __y ) ; } 
} ; 


template < typename _Predicate > 
inline binary_negate < _Predicate > 
not2 ( const _Predicate & __pred ) 
{ __CvT__record_line____(__CvT_miT,59,395);return binary_negate < _Predicate > ( __pred ) ; } 
# 421 "/usr/include/c++/4.8/bits/stl_function.h" 3 
template < typename _Arg , typename _Result > 
class pointer_to_unary_function : public unary_function < _Arg , _Result > 
{ 
protected : 
_Result ( * _M_ptr ) ( _Arg ) ; 

public : 
pointer_to_unary_function ( ) { __CvT__record_line____(__CvT_miT,59,428);} 

explicit 
pointer_to_unary_function ( _Result ( * __x ) ( _Arg ) ) 
: _M_ptr ( __x ) { __CvT__record_line____(__CvT_miT,59,432);} 

_Result 
operator ( ) ( _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,59,436);return _M_ptr ( __x ) ; } 
} ; 


template < typename _Arg , typename _Result > 
inline pointer_to_unary_function < _Arg , _Result > 
ptr_fun ( _Result ( * __x ) ( _Arg ) ) 
{ __CvT__record_line____(__CvT_miT,59,443);return pointer_to_unary_function < _Arg , _Result > ( __x ) ; } 


template < typename _Arg1 , typename _Arg2 , typename _Result > 
class pointer_to_binary_function 
: public binary_function < _Arg1 , _Arg2 , _Result > 
{ 
protected : 
_Result ( * _M_ptr ) ( _Arg1 , _Arg2 ) ; 

public : 
pointer_to_binary_function ( ) { __CvT__record_line____(__CvT_miT,59,454);} 

explicit 
pointer_to_binary_function ( _Result ( * __x ) ( _Arg1 , _Arg2 ) ) 
: _M_ptr ( __x ) { __CvT__record_line____(__CvT_miT,59,458);} 

_Result 
operator ( ) ( _Arg1 __x , _Arg2 __y ) const 
{ __CvT__record_line____(__CvT_miT,59,462);return _M_ptr ( __x , __y ) ; } 
} ; 


template < typename _Arg1 , typename _Arg2 , typename _Result > 
inline pointer_to_binary_function < _Arg1 , _Arg2 , _Result > 
ptr_fun ( _Result ( * __x ) ( _Arg1 , _Arg2 ) ) 
{ __CvT__record_line____(__CvT_miT,59,469);return pointer_to_binary_function < _Arg1 , _Arg2 , _Result > ( __x ) ; } 


template < typename _Tp > 
struct _Identity 
: public unary_function < _Tp , _Tp > 
{ 
_Tp & 
operator ( ) ( _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,59,478);return __x ; } 

const _Tp & 
operator ( ) ( const _Tp & __x ) const 
{ __CvT__record_line____(__CvT_miT,59,482);return __x ; } 
} ; 

template < typename _Pair > 
struct _Select1st 
: public unary_function < _Pair , typename _Pair :: first_type > 
{ 
typename _Pair :: first_type & 
operator ( ) ( _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,59,491);return __x . first ; } 

const typename _Pair :: first_type & 
operator ( ) ( const _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,59,495);return __x . first ; } 
# 508 "/usr/include/c++/4.8/bits/stl_function.h" 3 
} ; 

template < typename _Pair > 
struct _Select2nd 
: public unary_function < _Pair , typename _Pair :: second_type > 
{ 
typename _Pair :: second_type & 
operator ( ) ( _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,59,516);return __x . second ; } 

const typename _Pair :: second_type & 
operator ( ) ( const _Pair & __x ) const 
{ __CvT__record_line____(__CvT_miT,59,520);return __x . second ; } 
} ; 
# 541 "/usr/include/c++/4.8/bits/stl_function.h" 3 
template < typename _Ret , typename _Tp > 
class mem_fun_t : public unary_function < _Tp * , _Ret > 
{ 
public : 
explicit 
mem_fun_t ( _Ret ( _Tp ::* __pf ) ( ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,59,547);} 

_Ret 
operator ( ) ( _Tp * __p ) const 
{ __CvT__record_line____(__CvT_miT,59,551);return ( __p ->* _M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) ; 
} ; 



template < typename _Ret , typename _Tp > 
class const_mem_fun_t : public unary_function < const _Tp * , _Ret > 
{ 
public : 
explicit 
const_mem_fun_t ( _Ret ( _Tp ::* __pf ) ( ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,59,565);} 

_Ret 
operator ( ) ( const _Tp * __p ) const 
{ __CvT__record_line____(__CvT_miT,59,569);return ( __p ->* _M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) const ; 
} ; 



template < typename _Ret , typename _Tp > 
class mem_fun_ref_t : public unary_function < _Tp , _Ret > 
{ 
public : 
explicit 
mem_fun_ref_t ( _Ret ( _Tp ::* __pf ) ( ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,59,583);} 

_Ret 
operator ( ) ( _Tp & __r ) const 
{ __CvT__record_line____(__CvT_miT,59,587);return ( __r .*_M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) ; 
} ; 



template < typename _Ret , typename _Tp > 
class const_mem_fun_ref_t : public unary_function < _Tp , _Ret > 
{ 
public : 
explicit 
const_mem_fun_ref_t ( _Ret ( _Tp ::* __pf ) ( ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,59,601);} 

_Ret 
operator ( ) ( const _Tp & __r ) const 
{ __CvT__record_line____(__CvT_miT,59,605);return ( __r .*_M_f ) ( ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( ) const ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class mem_fun1_t : public binary_function < _Tp * , _Arg , _Ret > 
{ 
public : 
explicit 
mem_fun1_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,59,619);} 

_Ret 
operator ( ) ( _Tp * __p , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,59,623);return ( __p ->* _M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class const_mem_fun1_t : public binary_function < const _Tp * , _Arg , _Ret > 
{ 
public : 
explicit 
const_mem_fun1_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,59,637);} 

_Ret 
operator ( ) ( const _Tp * __p , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,59,641);return ( __p ->* _M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) const ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class mem_fun1_ref_t : public binary_function < _Tp , _Arg , _Ret > 
{ 
public : 
explicit 
mem_fun1_ref_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,59,655);} 

_Ret 
operator ( ) ( _Tp & __r , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,59,659);return ( __r .*_M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) ; 
} ; 



template < typename _Ret , typename _Tp , typename _Arg > 
class const_mem_fun1_ref_t : public binary_function < _Tp , _Arg , _Ret > 
{ 
public : 
explicit 
const_mem_fun1_ref_t ( _Ret ( _Tp ::* __pf ) ( _Arg ) const ) 
: _M_f ( __pf ) { __CvT__record_line____(__CvT_miT,59,673);} 

_Ret 
operator ( ) ( const _Tp & __r , _Arg __x ) const 
{ __CvT__record_line____(__CvT_miT,59,677);return ( __r .*_M_f ) ( __x ) ; } 

private : 
_Ret ( _Tp ::* _M_f ) ( _Arg ) const ; 
} ; 



template < typename _Ret , typename _Tp > 
inline mem_fun_t < _Ret , _Tp > 
mem_fun ( _Ret ( _Tp ::* __f ) ( ) ) 
{ __CvT__record_line____(__CvT_miT,59,688);return mem_fun_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp > 
inline const_mem_fun_t < _Ret , _Tp > 
mem_fun ( _Ret ( _Tp ::* __f ) ( ) const ) 
{ __CvT__record_line____(__CvT_miT,59,693);return const_mem_fun_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp > 
inline mem_fun_ref_t < _Ret , _Tp > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( ) ) 
{ __CvT__record_line____(__CvT_miT,59,698);return mem_fun_ref_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp > 
inline const_mem_fun_ref_t < _Ret , _Tp > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( ) const ) 
{ __CvT__record_line____(__CvT_miT,59,703);return const_mem_fun_ref_t < _Ret , _Tp > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline mem_fun1_t < _Ret , _Tp , _Arg > 
mem_fun ( _Ret ( _Tp ::* __f ) ( _Arg ) ) 
{ __CvT__record_line____(__CvT_miT,59,708);return mem_fun1_t < _Ret , _Tp , _Arg > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline const_mem_fun1_t < _Ret , _Tp , _Arg > 
mem_fun ( _Ret ( _Tp ::* __f ) ( _Arg ) const ) 
{ __CvT__record_line____(__CvT_miT,59,713);return const_mem_fun1_t < _Ret , _Tp , _Arg > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline mem_fun1_ref_t < _Ret , _Tp , _Arg > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( _Arg ) ) 
{ __CvT__record_line____(__CvT_miT,59,718);return mem_fun1_ref_t < _Ret , _Tp , _Arg > ( __f ) ; } 

template < typename _Ret , typename _Tp , typename _Arg > 
inline const_mem_fun1_ref_t < _Ret , _Tp , _Arg > 
mem_fun_ref ( _Ret ( _Tp ::* __f ) ( _Arg ) const ) 
{ __CvT__record_line____(__CvT_miT,59,723);return const_mem_fun1_ref_t < _Ret , _Tp , _Arg > ( __f ) ; } 




} 


# 1 "/usr/include/c++/4.8/backward/binders.h" 1 3 
# 59 "/usr/include/c++/4.8/backward/binders.h" 3 
namespace std 
{ 

# 103 "/usr/include/c++/4.8/backward/binders.h" 3 
template < typename _Operation > 
class binder1st 
: public unary_function < typename _Operation :: second_argument_type , 
typename _Operation :: result_type > 
{ 
protected : 
_Operation op ; 
typename _Operation :: first_argument_type value ; 

public : 
binder1st ( const _Operation & __x , 
const typename _Operation :: first_argument_type & __y ) 
: op ( __x ) , value ( __y ) { __CvT__record_line____(__CvT_miT,60,115);} 

typename _Operation :: result_type 
operator ( ) ( const typename _Operation :: second_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,60,119);return op ( value , __x ) ; } 



typename _Operation :: result_type 
operator ( ) ( typename _Operation :: second_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,60,125);return op ( value , __x ) ; } 
} ; 


template < typename _Operation , typename _Tp > 
inline binder1st < _Operation > 
bind1st ( const _Operation & __fn , const _Tp & __x ) 
{ __CvT__record_line____(__CvT_miT,60,132);
typedef typename _Operation :: first_argument_type _Arg1_type ; 
__CvT__record_line____(__CvT_miT,60,134);return binder1st < _Operation > ( __fn , _Arg1_type ( __x ) ) ; 
} 


template < typename _Operation > 
class binder2nd 
: public unary_function < typename _Operation :: first_argument_type , 
typename _Operation :: result_type > 
{ 
protected : 
_Operation op ; 
typename _Operation :: second_argument_type value ; 

public : 
binder2nd ( const _Operation & __x , 
const typename _Operation :: second_argument_type & __y ) 
: op ( __x ) , value ( __y ) { __CvT__record_line____(__CvT_miT,60,150);} 

typename _Operation :: result_type 
operator ( ) ( const typename _Operation :: first_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,60,154);return op ( __x , value ) ; } 



typename _Operation :: result_type 
operator ( ) ( typename _Operation :: first_argument_type & __x ) const 
{ __CvT__record_line____(__CvT_miT,60,160);return op ( __x , value ) ; } 
} ; 


template < typename _Operation , typename _Tp > 
inline binder2nd < _Operation > 
bind2nd ( const _Operation & __fn , const _Tp & __x ) 
{ __CvT__record_line____(__CvT_miT,60,167);
typedef typename _Operation :: second_argument_type _Arg2_type ; 
__CvT__record_line____(__CvT_miT,60,169);return binder2nd < _Operation > ( __fn , _Arg2_type ( __x ) ) ; 
} 



} 
# 732 "/usr/include/c++/4.8/bits/stl_function.h" 2 3 
# 49 "/usr/include/c++/4.8/string" 2 3 


# 1 "/usr/include/c++/4.8/bits/range_access.h" 1 3 
# 33 "/usr/include/c++/4.8/bits/range_access.h" 3 

# 34 "/usr/include/c++/4.8/bits/range_access.h" 3 
# 52 "/usr/include/c++/4.8/string" 2 3 
# 1 "/usr/include/c++/4.8/bits/basic_string.h" 1 3 
# 37 "/usr/include/c++/4.8/bits/basic_string.h" 3 

# 38 "/usr/include/c++/4.8/bits/basic_string.h" 3 

# 1 "/usr/include/c++/4.8/ext/atomicity.h" 1 3 
# 32 "/usr/include/c++/4.8/ext/atomicity.h" 3 

# 33 "/usr/include/c++/4.8/ext/atomicity.h" 3 


# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr.h" 1 3 
# 30 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr.h" 3 
# pragma GCC visibility push ( default ) 
 # 148 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr.h" 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 1 3 
# 35 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3 
# 1 "/usr/include/pthread.h" 1 3 4 
# 23 "/usr/include/pthread.h" 3 4 
# 1 "/usr/include/sched.h" 1 3 4 
# 28 "/usr/include/sched.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4 
# 29 "/usr/include/sched.h" 2 3 4 



# 1 "/usr/include/time.h" 1 3 4 
# 73 "/usr/include/time.h" 3 4 


typedef __time_t time_t ; 



# 120 "/usr/include/time.h" 3 4 
struct timespec 
{ 
__time_t tv_sec ; 
__syscall_slong_t tv_nsec ; 
} ; 
# 33 "/usr/include/sched.h" 2 3 4 


typedef __pid_t pid_t ; 





# 1 "/usr/include/x86_64-linux-gnu/bits/sched.h" 1 3 4 
# 72 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4 
struct sched_param 
{ 
int __sched_priority ; 
} ; 

extern "C" { 



extern int clone ( int ( * __fn ) ( void * __arg ) , void * __child_stack , 
int __flags , void * __arg , ... ) throw ( ) ; 


extern int unshare ( int __flags ) throw ( ) ; 


extern int sched_getcpu ( void ) throw ( ) ; 


extern int setns ( int __fd , int __nstype ) throw ( ) ; 



} 







struct __sched_param 
{ 
int __sched_priority ; 
} ; 
# 118 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4 
typedef unsigned long int __cpu_mask ; 






typedef struct 
{ 
__cpu_mask __bits [ 1024 / ( 8 * sizeof ( __cpu_mask ) ) ] ; 
} cpu_set_t ; 
# 201 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4 
extern "C" { 

extern int __sched_cpucount ( size_t __setsize , const cpu_set_t * __setp ) 
throw ( ) ; 
extern cpu_set_t * __sched_cpualloc ( size_t __count ) throw ( ) ; 
extern void __sched_cpufree ( cpu_set_t * __set ) throw ( ) ; 

} 
# 42 "/usr/include/sched.h" 2 3 4 




extern "C" { 


extern int sched_setparam ( __pid_t __pid , const struct sched_param * __param ) 
throw ( ) ; 


extern int sched_getparam ( __pid_t __pid , struct sched_param * __param ) throw ( ) ; 


extern int sched_setscheduler ( __pid_t __pid , int __policy , 
const struct sched_param * __param ) throw ( ) ; 


extern int sched_getscheduler ( __pid_t __pid ) throw ( ) ; 


extern int sched_yield ( void ) throw ( ) ; 


extern int sched_get_priority_max ( int __algorithm ) throw ( ) ; 


extern int sched_get_priority_min ( int __algorithm ) throw ( ) ; 


extern int sched_rr_get_interval ( __pid_t __pid , struct timespec * __t ) throw ( ) ; 
# 116 "/usr/include/sched.h" 3 4 
extern int sched_setaffinity ( __pid_t __pid , size_t __cpusetsize , 
const cpu_set_t * __cpuset ) throw ( ) ; 


extern int sched_getaffinity ( __pid_t __pid , size_t __cpusetsize , 
cpu_set_t * __cpuset ) throw ( ) ; 


} 
# 24 "/usr/include/pthread.h" 2 3 4 
# 1 "/usr/include/time.h" 1 3 4 
# 29 "/usr/include/time.h" 3 4 
extern "C" { 







# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4 
# 38 "/usr/include/time.h" 2 3 4 



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4 
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4 
struct timeval 
{ 
__time_t tv_sec ; 
__suseconds_t tv_usec ; 
} ; 
# 86 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/timex.h" 1 3 4 
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4 
struct timex 
{ 
unsigned int modes ; 
__syscall_slong_t offset ; 
__syscall_slong_t freq ; 
__syscall_slong_t maxerror ; 
__syscall_slong_t esterror ; 
int status ; 
__syscall_slong_t constant ; 
__syscall_slong_t precision ; 
__syscall_slong_t tolerance ; 
struct timeval time ; 
__syscall_slong_t tick ; 
__syscall_slong_t ppsfreq ; 
__syscall_slong_t jitter ; 
int shift ; 
__syscall_slong_t stabil ; 
__syscall_slong_t jitcnt ; 
__syscall_slong_t calcnt ; 
__syscall_slong_t errcnt ; 
__syscall_slong_t stbcnt ; 

int tai ; 


int : 32 ; int : 32 ; int : 32 ; int : 32 ; 
int : 32 ; int : 32 ; int : 32 ; int : 32 ; 
int : 32 ; int : 32 ; int : 32 ; 
} ; 
# 87 "/usr/include/x86_64-linux-gnu/bits/time.h" 2 3 4 

extern "C" { 


extern int clock_adjtime ( __clockid_t __clock_id , struct timex * __utx ) throw ( ) ; 

} 
# 42 "/usr/include/time.h" 2 3 4 
# 57 "/usr/include/time.h" 3 4 


typedef __clock_t clock_t ; 



# 91 "/usr/include/time.h" 3 4 
typedef __clockid_t clockid_t ; 
# 103 "/usr/include/time.h" 3 4 
typedef __timer_t timer_t ; 
# 131 "/usr/include/time.h" 3 4 


struct tm 
{ 
int tm_sec ; 
int tm_min ; 
int tm_hour ; 
int tm_mday ; 
int tm_mon ; 
int tm_year ; 
int tm_wday ; 
int tm_yday ; 
int tm_isdst ; 


long int tm_gmtoff ; 
const char * tm_zone ; 




} ; 








struct itimerspec 
{ 
struct timespec it_interval ; 
struct timespec it_value ; 
} ; 


struct sigevent ; 
# 186 "/usr/include/time.h" 3 4 



extern clock_t clock ( void ) throw ( ) ; 


extern time_t time ( time_t * __timer ) throw ( ) ; 


extern double difftime ( time_t __time1 , time_t __time0 ) 
throw ( ) ; 


extern time_t mktime ( struct tm * __tp ) throw ( ) ; 





extern size_t strftime ( char * __restrict __s , size_t __maxsize , 
const char * __restrict __format , 
const struct tm * __restrict __tp ) throw ( ) ; 





extern char * strptime ( const char * __restrict __s , 
const char * __restrict __fmt , struct tm * __tp ) 
throw ( ) ; 







extern size_t strftime_l ( char * __restrict __s , size_t __maxsize , 
const char * __restrict __format , 
const struct tm * __restrict __tp , 
__locale_t __loc ) throw ( ) ; 



extern char * strptime_l ( const char * __restrict __s , 
const char * __restrict __fmt , struct tm * __tp , 
__locale_t __loc ) throw ( ) ; 






extern struct tm * gmtime ( const time_t * __timer ) throw ( ) ; 



extern struct tm * localtime ( const time_t * __timer ) throw ( ) ; 





extern struct tm * gmtime_r ( const time_t * __restrict __timer , 
struct tm * __restrict __tp ) throw ( ) ; 



extern struct tm * localtime_r ( const time_t * __restrict __timer , 
struct tm * __restrict __tp ) throw ( ) ; 





extern char * asctime ( const struct tm * __tp ) throw ( ) ; 


extern char * ctime ( const time_t * __timer ) throw ( ) ; 







extern char * asctime_r ( const struct tm * __restrict __tp , 
char * __restrict __buf ) throw ( ) ; 


extern char * ctime_r ( const time_t * __restrict __timer , 
char * __restrict __buf ) throw ( ) ; 




extern char * __tzname [ 2 ] ; 
extern int __daylight ; 
extern long int __timezone ; 




extern char * tzname [ 2 ] ; 



extern void tzset ( void ) throw ( ) ; 



extern int daylight ; 
extern long int timezone ; 





extern int stime ( const time_t * __when ) throw ( ) ; 
# 319 "/usr/include/time.h" 3 4 
extern time_t timegm ( struct tm * __tp ) throw ( ) ; 


extern time_t timelocal ( struct tm * __tp ) throw ( ) ; 


extern int dysize ( int __year ) throw ( ) ; 
# 334 "/usr/include/time.h" 3 4 
extern int nanosleep ( const struct timespec * __requested_time , 
struct timespec * __remaining ) ; 



extern int clock_getres ( clockid_t __clock_id , struct timespec * __res ) throw ( ) ; 


extern int clock_gettime ( clockid_t __clock_id , struct timespec * __tp ) throw ( ) ; 


extern int clock_settime ( clockid_t __clock_id , const struct timespec * __tp ) 
throw ( ) ; 






extern int clock_nanosleep ( clockid_t __clock_id , int __flags , 
const struct timespec * __req , 
struct timespec * __rem ) ; 


extern int clock_getcpuclockid ( pid_t __pid , clockid_t * __clock_id ) throw ( ) ; 




extern int timer_create ( clockid_t __clock_id , 
struct sigevent * __restrict __evp , 
timer_t * __restrict __timerid ) throw ( ) ; 


extern int timer_delete ( timer_t __timerid ) throw ( ) ; 


extern int timer_settime ( timer_t __timerid , int __flags , 
const struct itimerspec * __restrict __value , 
struct itimerspec * __restrict __ovalue ) throw ( ) ; 


extern int timer_gettime ( timer_t __timerid , struct itimerspec * __value ) 
throw ( ) ; 


extern int timer_getoverrun ( timer_t __timerid ) throw ( ) ; 





extern int timespec_get ( struct timespec * __ts , int __base ) 
throw ( ) ; 
# 403 "/usr/include/time.h" 3 4 
extern int getdate_err ; 
# 412 "/usr/include/time.h" 3 4 
extern struct tm * getdate ( const char * __string ) ; 
# 426 "/usr/include/time.h" 3 4 
extern int getdate_r ( const char * __restrict __string , 
struct tm * __restrict __resbufp ) ; 


} 
# 25 "/usr/include/pthread.h" 2 3 4 

# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4 
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4 
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
typedef unsigned long int pthread_t ; 


union pthread_attr_t 
{ 
char __size [ 56 ] ; 
long int __align ; 
} ; 

typedef union pthread_attr_t pthread_attr_t ; 





typedef struct __pthread_internal_list 
{ 
struct __pthread_internal_list * __prev ; 
struct __pthread_internal_list * __next ; 
} __pthread_list_t ; 
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
typedef union 
{ 
struct __pthread_mutex_s 
{ 
int __lock ; 
unsigned int __count ; 
int __owner ; 

unsigned int __nusers ; 



int __kind ; 

short __spins ; 
short __elision ; 
__pthread_list_t __list ; 
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
} __data ; 
char __size [ 40 ] ; 
long int __align ; 
} pthread_mutex_t ; 

typedef union 
{ 
char __size [ 4 ] ; 
int __align ; 
} pthread_mutexattr_t ; 




typedef union 
{ 
struct 
{ 
int __lock ; 
unsigned int __futex ; 
unsigned long long int __total_seq ; 
unsigned long long int __wakeup_seq ; 
unsigned long long int __woken_seq ; 
void * __mutex ; 
unsigned int __nwaiters ; 
unsigned int __broadcast_seq ; 
} __data ; 
char __size [ 48 ] ; 
long long int __align ; 
} pthread_cond_t ; 

typedef union 
{ 
char __size [ 4 ] ; 
int __align ; 
} pthread_condattr_t ; 



typedef unsigned int pthread_key_t ; 



typedef int pthread_once_t ; 





typedef union 
{ 

struct 
{ 
int __lock ; 
unsigned int __nr_readers ; 
unsigned int __readers_wakeup ; 
unsigned int __writer_wakeup ; 
unsigned int __nr_readers_queued ; 
unsigned int __nr_writers_queued ; 
int __writer ; 
int __shared ; 
unsigned long int __pad1 ; 
unsigned long int __pad2 ; 


unsigned int __flags ; 

} __data ; 
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4 
char __size [ 56 ] ; 
long int __align ; 
} pthread_rwlock_t ; 

typedef union 
{ 
char __size [ 8 ] ; 
long int __align ; 
} pthread_rwlockattr_t ; 





typedef volatile int pthread_spinlock_t ; 




typedef union 
{ 
char __size [ 32 ] ; 
long int __align ; 
} pthread_barrier_t ; 

typedef union 
{ 
char __size [ 4 ] ; 
int __align ; 
} pthread_barrierattr_t ; 
# 27 "/usr/include/pthread.h" 2 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4 
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4 




typedef long int __jmp_buf [ 8 ] ; 
# 28 "/usr/include/pthread.h" 2 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4 
# 29 "/usr/include/pthread.h" 2 3 4 



enum 
{ 
PTHREAD_CREATE_JOINABLE , 

PTHREAD_CREATE_DETACHED 

} ; 



enum 
{ 
PTHREAD_MUTEX_TIMED_NP , 
PTHREAD_MUTEX_RECURSIVE_NP , 
PTHREAD_MUTEX_ERRORCHECK_NP , 
PTHREAD_MUTEX_ADAPTIVE_NP 

, 
PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP , 
PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP , 
PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP , 
PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL 



, PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP 

} ; 




enum 
{ 
PTHREAD_MUTEX_STALLED , 
PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED , 
PTHREAD_MUTEX_ROBUST , 
PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST 
} ; 





enum 
{ 
PTHREAD_PRIO_NONE , 
PTHREAD_PRIO_INHERIT , 
PTHREAD_PRIO_PROTECT 
} ; 
# 125 "/usr/include/pthread.h" 3 4 
enum 
{ 
PTHREAD_RWLOCK_PREFER_READER_NP , 
PTHREAD_RWLOCK_PREFER_WRITER_NP , 
PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP , 
PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP 
} ; 
# 166 "/usr/include/pthread.h" 3 4 
enum 
{ 
PTHREAD_INHERIT_SCHED , 

PTHREAD_EXPLICIT_SCHED 

} ; 



enum 
{ 
PTHREAD_SCOPE_SYSTEM , 

PTHREAD_SCOPE_PROCESS 

} ; 



enum 
{ 
PTHREAD_PROCESS_PRIVATE , 

PTHREAD_PROCESS_SHARED 

} ; 
# 201 "/usr/include/pthread.h" 3 4 
struct _pthread_cleanup_buffer 
{ 
void ( * __routine ) ( void * ) ; 
void * __arg ; 
int __canceltype ; 
struct _pthread_cleanup_buffer * __prev ; 
} ; 


enum 
{ 
PTHREAD_CANCEL_ENABLE , 

PTHREAD_CANCEL_DISABLE 

} ; 
enum 
{ 
PTHREAD_CANCEL_DEFERRED , 

PTHREAD_CANCEL_ASYNCHRONOUS 

} ; 
# 239 "/usr/include/pthread.h" 3 4 
extern "C" { 




extern int pthread_create ( pthread_t * __restrict __newthread , 
const pthread_attr_t * __restrict __attr , 
void * ( * __start_routine ) ( void * ) , 
void * __restrict __arg ) throw ( ) ; 





extern void pthread_exit ( void * __retval ) ; 







extern int pthread_join ( pthread_t __th , void ** __thread_return ) ; 




extern int pthread_tryjoin_np ( pthread_t __th , void ** __thread_return ) throw ( ) ; 







extern int pthread_timedjoin_np ( pthread_t __th , void ** __thread_return , 
const struct timespec * __abstime ) ; 






extern int pthread_detach ( pthread_t __th ) throw ( ) ; 



extern pthread_t pthread_self ( void ) throw ( ) ; 


extern int pthread_equal ( pthread_t __thread1 , pthread_t __thread2 ) 
throw ( ) ; 







extern int pthread_attr_init ( pthread_attr_t * __attr ) throw ( ) ; 


extern int pthread_attr_destroy ( pthread_attr_t * __attr ) 
throw ( ) ; 


extern int pthread_attr_getdetachstate ( const pthread_attr_t * __attr , 
int * __detachstate ) 
throw ( ) ; 


extern int pthread_attr_setdetachstate ( pthread_attr_t * __attr , 
int __detachstate ) 
throw ( ) ; 



extern int pthread_attr_getguardsize ( const pthread_attr_t * __attr , 
size_t * __guardsize ) 
throw ( ) ; 


extern int pthread_attr_setguardsize ( pthread_attr_t * __attr , 
size_t __guardsize ) 
throw ( ) ; 



extern int pthread_attr_getschedparam ( const pthread_attr_t * __restrict __attr , 
struct sched_param * __restrict __param ) 
throw ( ) ; 


extern int pthread_attr_setschedparam ( pthread_attr_t * __restrict __attr , 
const struct sched_param * __restrict 
__param ) throw ( ) ; 


extern int pthread_attr_getschedpolicy ( const pthread_attr_t * __restrict 
__attr , int * __restrict __policy ) 
throw ( ) ; 


extern int pthread_attr_setschedpolicy ( pthread_attr_t * __attr , int __policy ) 
throw ( ) ; 


extern int pthread_attr_getinheritsched ( const pthread_attr_t * __restrict 
__attr , int * __restrict __inherit ) 
throw ( ) ; 


extern int pthread_attr_setinheritsched ( pthread_attr_t * __attr , 
int __inherit ) 
throw ( ) ; 



extern int pthread_attr_getscope ( const pthread_attr_t * __restrict __attr , 
int * __restrict __scope ) 
throw ( ) ; 


extern int pthread_attr_setscope ( pthread_attr_t * __attr , int __scope ) 
throw ( ) ; 


extern int pthread_attr_getstackaddr ( const pthread_attr_t * __restrict 
__attr , void ** __restrict __stackaddr ) 
throw ( ) ; 





extern int pthread_attr_setstackaddr ( pthread_attr_t * __attr , 
void * __stackaddr ) 
throw ( ) ; 


extern int pthread_attr_getstacksize ( const pthread_attr_t * __restrict 
__attr , size_t * __restrict __stacksize ) 
throw ( ) ; 




extern int pthread_attr_setstacksize ( pthread_attr_t * __attr , 
size_t __stacksize ) 
throw ( ) ; 



extern int pthread_attr_getstack ( const pthread_attr_t * __restrict __attr , 
void ** __restrict __stackaddr , 
size_t * __restrict __stacksize ) 
throw ( ) ; 




extern int pthread_attr_setstack ( pthread_attr_t * __attr , void * __stackaddr , 
size_t __stacksize ) throw ( ) ; 





extern int pthread_attr_setaffinity_np ( pthread_attr_t * __attr , 
size_t __cpusetsize , 
const cpu_set_t * __cpuset ) 
throw ( ) ; 



extern int pthread_attr_getaffinity_np ( const pthread_attr_t * __attr , 
size_t __cpusetsize , 
cpu_set_t * __cpuset ) 
throw ( ) ; 


extern int pthread_getattr_default_np ( pthread_attr_t * __attr ) 
throw ( ) ; 



extern int pthread_setattr_default_np ( const pthread_attr_t * __attr ) 
throw ( ) ; 




extern int pthread_getattr_np ( pthread_t __th , pthread_attr_t * __attr ) 
throw ( ) ; 







extern int pthread_setschedparam ( pthread_t __target_thread , int __policy , 
const struct sched_param * __param ) 
throw ( ) ; 


extern int pthread_getschedparam ( pthread_t __target_thread , 
int * __restrict __policy , 
struct sched_param * __restrict __param ) 
throw ( ) ; 


extern int pthread_setschedprio ( pthread_t __target_thread , int __prio ) 
throw ( ) ; 




extern int pthread_getname_np ( pthread_t __target_thread , char * __buf , 
size_t __buflen ) 
throw ( ) ; 


extern int pthread_setname_np ( pthread_t __target_thread , const char * __name ) 
throw ( ) ; 





extern int pthread_getconcurrency ( void ) throw ( ) ; 


extern int pthread_setconcurrency ( int __level ) throw ( ) ; 







extern int pthread_yield ( void ) throw ( ) ; 




extern int pthread_setaffinity_np ( pthread_t __th , size_t __cpusetsize , 
const cpu_set_t * __cpuset ) 
throw ( ) ; 


extern int pthread_getaffinity_np ( pthread_t __th , size_t __cpusetsize , 
cpu_set_t * __cpuset ) 
throw ( ) ; 
# 505 "/usr/include/pthread.h" 3 4 
extern int pthread_once ( pthread_once_t * __once_control , 
void ( * __init_routine ) ( void ) ) ; 
# 517 "/usr/include/pthread.h" 3 4 
extern int pthread_setcancelstate ( int __state , int * __oldstate ) ; 



extern int pthread_setcanceltype ( int __type , int * __oldtype ) ; 


extern int pthread_cancel ( pthread_t __th ) ; 




extern void pthread_testcancel ( void ) ; 




typedef struct 
{ 
struct 
{ 
__jmp_buf __cancel_jmp_buf ; 
int __mask_was_saved ; 
} __cancel_jmp_buf [ 1 ] ; 
void * __pad [ 4 ] ; 
} __pthread_unwind_buf_t ; 
# 551 "/usr/include/pthread.h" 3 4 
struct __pthread_cleanup_frame 
{ 
void ( * __cancel_routine ) ( void * ) ; 
void * __cancel_arg ; 
int __do_it ; 
int __cancel_type ; 
} ; 




class __pthread_cleanup_class 
{ 
void ( * __cancel_routine ) ( void * ) ; 
void * __cancel_arg ; 
int __do_it ; 
int __cancel_type ; 

public : 
__pthread_cleanup_class ( void ( * __fct ) ( void * ) , void * __arg ) 
: __cancel_routine ( __fct ) , __cancel_arg ( __arg ) , __do_it ( 1 ) { __CvT__record_line____(__CvT_miT,66,571);} 
~ __pthread_cleanup_class ( ) { __CvT__record_line____(__CvT_miT,66,572);if ( __do_it ) {__cancel_routine ( __cancel_arg ) ; }} 
void __setdoit ( int __newval ) { __CvT__record_line____(__CvT_miT,66,573);__do_it = __newval ; } 
void __defer ( ) { __CvT__record_line____(__CvT_miT,66,574);pthread_setcanceltype ( PTHREAD_CANCEL_DEFERRED , 
& __cancel_type ) ; } 
void __restore ( ) const { __CvT__record_line____(__CvT_miT,66,576);pthread_setcanceltype ( __cancel_type , 0 ) ; } 
} ; 
# 753 "/usr/include/pthread.h" 3 4 
struct __jmp_buf_tag ; 
extern int __sigsetjmp ( struct __jmp_buf_tag * __env , int __savemask ) throw ( ) ; 





extern int pthread_mutex_init ( pthread_mutex_t * __mutex , 
const pthread_mutexattr_t * __mutexattr ) 
throw ( ) ; 


extern int pthread_mutex_destroy ( pthread_mutex_t * __mutex ) 
throw ( ) ; 


extern int pthread_mutex_trylock ( pthread_mutex_t * __mutex ) 
throw ( ) ; 


extern int pthread_mutex_lock ( pthread_mutex_t * __mutex ) 
throw ( ) ; 



extern int pthread_mutex_timedlock ( pthread_mutex_t * __restrict __mutex , 
const struct timespec * __restrict 
__abstime ) throw ( ) ; 



extern int pthread_mutex_unlock ( pthread_mutex_t * __mutex ) 
throw ( ) ; 



extern int pthread_mutex_getprioceiling ( const pthread_mutex_t * 
__restrict __mutex , 
int * __restrict __prioceiling ) 
throw ( ) ; 



extern int pthread_mutex_setprioceiling ( pthread_mutex_t * __restrict __mutex , 
int __prioceiling , 
int * __restrict __old_ceiling ) 
throw ( ) ; 




extern int pthread_mutex_consistent ( pthread_mutex_t * __mutex ) 
throw ( ) ; 

extern int pthread_mutex_consistent_np ( pthread_mutex_t * __mutex ) 
throw ( ) ; 
# 817 "/usr/include/pthread.h" 3 4 
extern int pthread_mutexattr_init ( pthread_mutexattr_t * __attr ) 
throw ( ) ; 


extern int pthread_mutexattr_destroy ( pthread_mutexattr_t * __attr ) 
throw ( ) ; 


extern int pthread_mutexattr_getpshared ( const pthread_mutexattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_mutexattr_setpshared ( pthread_mutexattr_t * __attr , 
int __pshared ) 
throw ( ) ; 



extern int pthread_mutexattr_gettype ( const pthread_mutexattr_t * __restrict 
__attr , int * __restrict __kind ) 
throw ( ) ; 




extern int pthread_mutexattr_settype ( pthread_mutexattr_t * __attr , int __kind ) 
throw ( ) ; 



extern int pthread_mutexattr_getprotocol ( const pthread_mutexattr_t * 
__restrict __attr , 
int * __restrict __protocol ) 
throw ( ) ; 



extern int pthread_mutexattr_setprotocol ( pthread_mutexattr_t * __attr , 
int __protocol ) 
throw ( ) ; 


extern int pthread_mutexattr_getprioceiling ( const pthread_mutexattr_t * 
__restrict __attr , 
int * __restrict __prioceiling ) 
throw ( ) ; 


extern int pthread_mutexattr_setprioceiling ( pthread_mutexattr_t * __attr , 
int __prioceiling ) 
throw ( ) ; 



extern int pthread_mutexattr_getrobust ( const pthread_mutexattr_t * __attr , 
int * __robustness ) 
throw ( ) ; 

extern int pthread_mutexattr_getrobust_np ( const pthread_mutexattr_t * __attr , 
int * __robustness ) 
throw ( ) ; 



extern int pthread_mutexattr_setrobust ( pthread_mutexattr_t * __attr , 
int __robustness ) 
throw ( ) ; 

extern int pthread_mutexattr_setrobust_np ( pthread_mutexattr_t * __attr , 
int __robustness ) 
throw ( ) ; 
# 899 "/usr/include/pthread.h" 3 4 
extern int pthread_rwlock_init ( pthread_rwlock_t * __restrict __rwlock , 
const pthread_rwlockattr_t * __restrict 
__attr ) throw ( ) ; 


extern int pthread_rwlock_destroy ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 


extern int pthread_rwlock_rdlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 


extern int pthread_rwlock_tryrdlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 



extern int pthread_rwlock_timedrdlock ( pthread_rwlock_t * __restrict __rwlock , 
const struct timespec * __restrict 
__abstime ) throw ( ) ; 



extern int pthread_rwlock_wrlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 


extern int pthread_rwlock_trywrlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 



extern int pthread_rwlock_timedwrlock ( pthread_rwlock_t * __restrict __rwlock , 
const struct timespec * __restrict 
__abstime ) throw ( ) ; 



extern int pthread_rwlock_unlock ( pthread_rwlock_t * __rwlock ) 
throw ( ) ; 





extern int pthread_rwlockattr_init ( pthread_rwlockattr_t * __attr ) 
throw ( ) ; 


extern int pthread_rwlockattr_destroy ( pthread_rwlockattr_t * __attr ) 
throw ( ) ; 


extern int pthread_rwlockattr_getpshared ( const pthread_rwlockattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_rwlockattr_setpshared ( pthread_rwlockattr_t * __attr , 
int __pshared ) 
throw ( ) ; 


extern int pthread_rwlockattr_getkind_np ( const pthread_rwlockattr_t * 
__restrict __attr , 
int * __restrict __pref ) 
throw ( ) ; 


extern int pthread_rwlockattr_setkind_np ( pthread_rwlockattr_t * __attr , 
int __pref ) throw ( ) ; 







extern int pthread_cond_init ( pthread_cond_t * __restrict __cond , 
const pthread_condattr_t * __restrict __cond_attr ) 
throw ( ) ; 


extern int pthread_cond_destroy ( pthread_cond_t * __cond ) 
throw ( ) ; 


extern int pthread_cond_signal ( pthread_cond_t * __cond ) 
throw ( ) ; 


extern int pthread_cond_broadcast ( pthread_cond_t * __cond ) 
throw ( ) ; 






extern int pthread_cond_wait ( pthread_cond_t * __restrict __cond , 
pthread_mutex_t * __restrict __mutex ) 
; 
# 1011 "/usr/include/pthread.h" 3 4 
extern int pthread_cond_timedwait ( pthread_cond_t * __restrict __cond , 
pthread_mutex_t * __restrict __mutex , 
const struct timespec * __restrict __abstime ) 
; 




extern int pthread_condattr_init ( pthread_condattr_t * __attr ) 
throw ( ) ; 


extern int pthread_condattr_destroy ( pthread_condattr_t * __attr ) 
throw ( ) ; 


extern int pthread_condattr_getpshared ( const pthread_condattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_condattr_setpshared ( pthread_condattr_t * __attr , 
int __pshared ) throw ( ) ; 



extern int pthread_condattr_getclock ( const pthread_condattr_t * 
__restrict __attr , 
__clockid_t * __restrict __clock_id ) 
throw ( ) ; 


extern int pthread_condattr_setclock ( pthread_condattr_t * __attr , 
__clockid_t __clock_id ) 
throw ( ) ; 
# 1055 "/usr/include/pthread.h" 3 4 
extern int pthread_spin_init ( pthread_spinlock_t * __lock , int __pshared ) 
throw ( ) ; 


extern int pthread_spin_destroy ( pthread_spinlock_t * __lock ) 
throw ( ) ; 


extern int pthread_spin_lock ( pthread_spinlock_t * __lock ) 
throw ( ) ; 


extern int pthread_spin_trylock ( pthread_spinlock_t * __lock ) 
throw ( ) ; 


extern int pthread_spin_unlock ( pthread_spinlock_t * __lock ) 
throw ( ) ; 






extern int pthread_barrier_init ( pthread_barrier_t * __restrict __barrier , 
const pthread_barrierattr_t * __restrict 
__attr , unsigned int __count ) 
throw ( ) ; 


extern int pthread_barrier_destroy ( pthread_barrier_t * __barrier ) 
throw ( ) ; 


extern int pthread_barrier_wait ( pthread_barrier_t * __barrier ) 
throw ( ) ; 



extern int pthread_barrierattr_init ( pthread_barrierattr_t * __attr ) 
throw ( ) ; 


extern int pthread_barrierattr_destroy ( pthread_barrierattr_t * __attr ) 
throw ( ) ; 


extern int pthread_barrierattr_getpshared ( const pthread_barrierattr_t * 
__restrict __attr , 
int * __restrict __pshared ) 
throw ( ) ; 


extern int pthread_barrierattr_setpshared ( pthread_barrierattr_t * __attr , 
int __pshared ) 
throw ( ) ; 
# 1122 "/usr/include/pthread.h" 3 4 
extern int pthread_key_create ( pthread_key_t * __key , 
void ( * __destr_function ) ( void * ) ) 
throw ( ) ; 


extern int pthread_key_delete ( pthread_key_t __key ) throw ( ) ; 


extern void * pthread_getspecific ( pthread_key_t __key ) throw ( ) ; 


extern int pthread_setspecific ( pthread_key_t __key , 
const void * __pointer ) throw ( ) ; 




extern int pthread_getcpuclockid ( pthread_t __thread_id , 
__clockid_t * __clock_id ) 
throw ( ) ; 
# 1156 "/usr/include/pthread.h" 3 4 
extern int pthread_atfork ( void ( * __prepare ) ( void ) , 
void ( * __parent ) ( void ) , 
void ( * __child ) ( void ) ) throw ( ) ; 
# 1170 "/usr/include/pthread.h" 3 4 
} 
# 36 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 2 3 
# 47 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3 
typedef pthread_t __gthread_t ; 
typedef pthread_key_t __gthread_key_t ; 
typedef pthread_once_t __gthread_once_t ; 
typedef pthread_mutex_t __gthread_mutex_t ; 
typedef pthread_mutex_t __gthread_recursive_mutex_t ; 
typedef pthread_cond_t __gthread_cond_t ; 
typedef struct timespec __gthread_time_t ; 
# 101 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3 
static __typeof ( pthread_once ) __gthrw_pthread_once ; 
static __typeof ( pthread_getspecific ) __gthrw_pthread_getspecific ; 
static __typeof ( pthread_setspecific ) __gthrw_pthread_setspecific ; 

static __typeof ( pthread_create ) __gthrw_pthread_create ; 
static __typeof ( pthread_join ) __gthrw_pthread_join ; 
static __typeof ( pthread_equal ) __gthrw_pthread_equal ; 
static __typeof ( pthread_self ) __gthrw_pthread_self ; 
static __typeof ( pthread_detach ) __gthrw_pthread_detach ; 

static __typeof ( pthread_cancel ) __gthrw_pthread_cancel ; 

static __typeof ( sched_yield ) __gthrw_sched_yield ; 

static __typeof ( pthread_mutex_lock ) __gthrw_pthread_mutex_lock ; 
static __typeof ( pthread_mutex_trylock ) __gthrw_pthread_mutex_trylock ; 

static __typeof ( pthread_mutex_timedlock ) __gthrw_pthread_mutex_timedlock ; 

static __typeof ( pthread_mutex_unlock ) __gthrw_pthread_mutex_unlock ; 
static __typeof ( pthread_mutex_init ) __gthrw_pthread_mutex_init ; 
static __typeof ( pthread_mutex_destroy ) __gthrw_pthread_mutex_destroy ; 

static __typeof ( pthread_cond_init ) __gthrw_pthread_cond_init ; 
static __typeof ( pthread_cond_broadcast ) __gthrw_pthread_cond_broadcast ; 
static __typeof ( pthread_cond_signal ) __gthrw_pthread_cond_signal ; 
static __typeof ( pthread_cond_wait ) __gthrw_pthread_cond_wait ; 
static __typeof ( pthread_cond_timedwait ) __gthrw_pthread_cond_timedwait ; 
static __typeof ( pthread_cond_destroy ) __gthrw_pthread_cond_destroy ; 

static __typeof ( pthread_key_create ) __gthrw_pthread_key_create ; 
static __typeof ( pthread_key_delete ) __gthrw_pthread_key_delete ; 
static __typeof ( pthread_mutexattr_init ) __gthrw_pthread_mutexattr_init ; 
static __typeof ( pthread_mutexattr_settype ) __gthrw_pthread_mutexattr_settype ; 
static __typeof ( pthread_mutexattr_destroy ) __gthrw_pthread_mutexattr_destroy ; 
# 236 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3 
static __typeof ( pthread_key_create ) __gthrw___pthread_key_create ; 
# 246 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3 
static inline int 
__gthread_active_p ( void ) 
{ __CvT__record_line____(__CvT_miT,65,248);
__CvT__record_line____(__CvT_miT,65,249);static void * const __gthread_active_ptr 
= ( void * ) & __gthrw___pthread_key_create ; 
__CvT__record_line____(__CvT_miT,65,251);return __gthread_active_ptr != 0 ; 
} 
# 658 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3 
static inline int 
__gthread_create ( __gthread_t * __threadid , void * ( * __func ) ( void * ) , 
void * __args ) 
{ __CvT__record_line____(__CvT_miT,65,661);
__CvT__record_line____(__CvT_miT,65,662);return __gthrw_pthread_create ( __threadid , __null , __func , __args ) ; 
} 

static inline int 
__gthread_join ( __gthread_t __threadid , void ** __value_ptr ) 
{ __CvT__record_line____(__CvT_miT,65,667);
__CvT__record_line____(__CvT_miT,65,668);return __gthrw_pthread_join ( __threadid , __value_ptr ) ; 
} 

static inline int 
__gthread_detach ( __gthread_t __threadid ) 
{ __CvT__record_line____(__CvT_miT,65,673);
__CvT__record_line____(__CvT_miT,65,674);return __gthrw_pthread_detach ( __threadid ) ; 
} 

static inline int 
__gthread_equal ( __gthread_t __t1 , __gthread_t __t2 ) 
{ __CvT__record_line____(__CvT_miT,65,679);
__CvT__record_line____(__CvT_miT,65,680);return __gthrw_pthread_equal ( __t1 , __t2 ) ; 
} 

static inline __gthread_t 
__gthread_self ( void ) 
{ __CvT__record_line____(__CvT_miT,65,685);
__CvT__record_line____(__CvT_miT,65,686);return __gthrw_pthread_self ( ) ; 
} 

static inline int 
__gthread_yield ( void ) 
{ __CvT__record_line____(__CvT_miT,65,691);
__CvT__record_line____(__CvT_miT,65,692);return __gthrw_sched_yield ( ) ; 
} 

static inline int 
__gthread_once ( __gthread_once_t * __once , void ( * __func ) ( void ) ) 
{ __CvT__record_line____(__CvT_miT,65,697);
__CvT__record_line____(__CvT_miT,65,698);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,65,699);return __gthrw_pthread_once ( __once , __func ) ; 
}else {
__CvT__record_line____(__CvT_miT,65,701);return - 1 ; 
}} 

static inline int 
__gthread_key_create ( __gthread_key_t * __key , void ( * __dtor ) ( void * ) ) 
{ __CvT__record_line____(__CvT_miT,65,706);
__CvT__record_line____(__CvT_miT,65,707);return __gthrw_pthread_key_create ( __key , __dtor ) ; 
} 

static inline int 
__gthread_key_delete ( __gthread_key_t __key ) 
{ __CvT__record_line____(__CvT_miT,65,712);
__CvT__record_line____(__CvT_miT,65,713);return __gthrw_pthread_key_delete ( __key ) ; 
} 

static inline void * 
__gthread_getspecific ( __gthread_key_t __key ) 
{ __CvT__record_line____(__CvT_miT,65,718);
__CvT__record_line____(__CvT_miT,65,719);return __gthrw_pthread_getspecific ( __key ) ; 
} 

static inline int 
__gthread_setspecific ( __gthread_key_t __key , const void * __ptr ) 
{ __CvT__record_line____(__CvT_miT,65,724);
__CvT__record_line____(__CvT_miT,65,725);return __gthrw_pthread_setspecific ( __key , __ptr ) ; 
} 

static inline void 
__gthread_mutex_init_function ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,730);
__CvT__record_line____(__CvT_miT,65,731);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,65,732);__gthrw_pthread_mutex_init ( __mutex , __null ) ; 
}} 

static inline int 
__gthread_mutex_destroy ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,737);
__CvT__record_line____(__CvT_miT,65,738);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,65,739);return __gthrw_pthread_mutex_destroy ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,65,741);return 0 ; 
}} 

static inline int 
__gthread_mutex_lock ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,746);
__CvT__record_line____(__CvT_miT,65,747);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,65,748);return __gthrw_pthread_mutex_lock ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,65,750);return 0 ; 
}} 

static inline int 
__gthread_mutex_trylock ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,755);
__CvT__record_line____(__CvT_miT,65,756);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,65,757);return __gthrw_pthread_mutex_trylock ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,65,759);return 0 ; 
}} 


static inline int 
__gthread_mutex_timedlock ( __gthread_mutex_t * __mutex , 
const __gthread_time_t * __abs_timeout ) 
{ __CvT__record_line____(__CvT_miT,65,766);
__CvT__record_line____(__CvT_miT,65,767);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,65,768);return __gthrw_pthread_mutex_timedlock ( __mutex , __abs_timeout ) ; 
}else {
__CvT__record_line____(__CvT_miT,65,770);return 0 ; 
}} 


static inline int 
__gthread_mutex_unlock ( __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,776);
__CvT__record_line____(__CvT_miT,65,777);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,65,778);return __gthrw_pthread_mutex_unlock ( __mutex ) ; 
}else {
__CvT__record_line____(__CvT_miT,65,780);return 0 ; 
}} 
# 807 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3 
static inline int 
__gthread_recursive_mutex_lock ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,809);
__CvT__record_line____(__CvT_miT,65,810);return __gthread_mutex_lock ( __mutex ) ; 
} 

static inline int 
__gthread_recursive_mutex_trylock ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,815);
__CvT__record_line____(__CvT_miT,65,816);return __gthread_mutex_trylock ( __mutex ) ; 
} 


static inline int 
__gthread_recursive_mutex_timedlock ( __gthread_recursive_mutex_t * __mutex , 
const __gthread_time_t * __abs_timeout ) 
{ __CvT__record_line____(__CvT_miT,65,823);
__CvT__record_line____(__CvT_miT,65,824);return __gthread_mutex_timedlock ( __mutex , __abs_timeout ) ; 
} 


static inline int 
__gthread_recursive_mutex_unlock ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,830);
__CvT__record_line____(__CvT_miT,65,831);return __gthread_mutex_unlock ( __mutex ) ; 
} 

static inline int 
__gthread_recursive_mutex_destroy ( __gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,836);
__CvT__record_line____(__CvT_miT,65,837);return __gthread_mutex_destroy ( __mutex ) ; 
} 
# 849 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h" 3 
static inline int 
__gthread_cond_broadcast ( __gthread_cond_t * __cond ) 
{ __CvT__record_line____(__CvT_miT,65,851);
__CvT__record_line____(__CvT_miT,65,852);return __gthrw_pthread_cond_broadcast ( __cond ) ; 
} 

static inline int 
__gthread_cond_signal ( __gthread_cond_t * __cond ) 
{ __CvT__record_line____(__CvT_miT,65,857);
__CvT__record_line____(__CvT_miT,65,858);return __gthrw_pthread_cond_signal ( __cond ) ; 
} 

static inline int 
__gthread_cond_wait ( __gthread_cond_t * __cond , __gthread_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,863);
__CvT__record_line____(__CvT_miT,65,864);return __gthrw_pthread_cond_wait ( __cond , __mutex ) ; 
} 

static inline int 
__gthread_cond_timedwait ( __gthread_cond_t * __cond , __gthread_mutex_t * __mutex , 
const __gthread_time_t * __abs_timeout ) 
{ __CvT__record_line____(__CvT_miT,65,870);
__CvT__record_line____(__CvT_miT,65,871);return __gthrw_pthread_cond_timedwait ( __cond , __mutex , __abs_timeout ) ; 
} 

static inline int 
__gthread_cond_wait_recursive ( __gthread_cond_t * __cond , 
__gthread_recursive_mutex_t * __mutex ) 
{ __CvT__record_line____(__CvT_miT,65,877);
__CvT__record_line____(__CvT_miT,65,878);return __gthread_cond_wait ( __cond , __mutex ) ; 
} 

static inline int 
__gthread_cond_destroy ( __gthread_cond_t * __cond ) 
{ __CvT__record_line____(__CvT_miT,65,883);
__CvT__record_line____(__CvT_miT,65,884);return __gthrw_pthread_cond_destroy ( __cond ) ; 
} 
# 149 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr.h" 2 3 


# pragma GCC visibility pop 
 # 36 "/usr/include/c++/4.8/ext/atomicity.h" 2 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/atomic_word.h" 1 3 
# 32 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/atomic_word.h" 3 
typedef int _Atomic_word ; 
# 37 "/usr/include/c++/4.8/ext/atomicity.h" 2 3 

namespace __gnu_cxx 
{ 







static inline _Atomic_word 
__exchange_and_add ( volatile _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,63,49);return __atomic_fetch_add ( __mem , __val , 4 ) ; } 

static inline void 
__atomic_add ( volatile _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,63,53);__atomic_fetch_add ( __mem , __val , 4 ) ; } 
# 64 "/usr/include/c++/4.8/ext/atomicity.h" 3 
static inline _Atomic_word 
__exchange_and_add_single ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,63,66);
__CvT__record_line____(__CvT_miT,63,67);_Atomic_word __result = * __mem ; 
__CvT__record_line____(__CvT_miT,63,68);* __mem += __val ; 
__CvT__record_line____(__CvT_miT,63,69);return __result ; 
} 

static inline void 
__atomic_add_single ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,63,74);* __mem += __val ; } 

static inline _Atomic_word 

__exchange_and_add_dispatch ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,63,79);

__CvT__record_line____(__CvT_miT,63,81);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,63,82);return __exchange_and_add ( __mem , __val ) ; 
}else {
__CvT__record_line____(__CvT_miT,63,84);return __exchange_and_add_single ( __mem , __val ) ; 



}} 

static inline void 

__atomic_add_dispatch ( _Atomic_word * __mem , int __val ) 
{ __CvT__record_line____(__CvT_miT,63,93);

__CvT__record_line____(__CvT_miT,63,95);if ( __gthread_active_p ( ) ) 
{__CvT__record_line____(__CvT_miT,63,96);__atomic_add ( __mem , __val ) ; 
}else {
__CvT__record_line____(__CvT_miT,63,98);__atomic_add_single ( __mem , __val ) ; 



}} 


} 
# 40 "/usr/include/c++/4.8/bits/basic_string.h" 2 3 





namespace std 
{ 

# 111 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
class basic_string 
{ 
typedef typename _Alloc :: template rebind < _CharT >:: other _CharT_alloc_type ; 


public : 
typedef _Traits traits_type ; 
typedef typename _Traits :: char_type value_type ; 
typedef _Alloc allocator_type ; 
typedef typename _CharT_alloc_type :: size_type size_type ; 
typedef typename _CharT_alloc_type :: difference_type difference_type ; 
typedef typename _CharT_alloc_type :: reference reference ; 
typedef typename _CharT_alloc_type :: const_reference const_reference ; 
typedef typename _CharT_alloc_type :: pointer pointer ; 
typedef typename _CharT_alloc_type :: const_pointer const_pointer ; 
typedef __gnu_cxx :: __normal_iterator < pointer , basic_string > iterator ; 
typedef __gnu_cxx :: __normal_iterator < const_pointer , basic_string > 
const_iterator ; 
typedef std :: reverse_iterator < const_iterator > const_reverse_iterator ; 
typedef std :: reverse_iterator < iterator > reverse_iterator ; 

private : 
# 148 "/usr/include/c++/4.8/bits/basic_string.h" 3 
struct _Rep_base 
{ 
size_type _M_length ; 
size_type _M_capacity ; 
_Atomic_word _M_refcount ; 
} ; 

struct _Rep : _Rep_base 
{ 

typedef typename _Alloc :: template rebind < char >:: other _Raw_bytes_alloc ; 
# 173 "/usr/include/c++/4.8/bits/basic_string.h" 3 
static const size_type _S_max_size ; 
static const _CharT _S_terminal ; 



static size_type _S_empty_rep_storage [ ] ; 

static _Rep & 
_S_empty_rep ( ) 
{ __CvT__record_line____(__CvT_miT,62,182);



__CvT__record_line____(__CvT_miT,62,186);void * __p = reinterpret_cast < void *> ( & _S_empty_rep_storage ) ; 
__CvT__record_line____(__CvT_miT,62,187);return * reinterpret_cast < _Rep *> ( __p ) ; 
} 

bool 
_M_is_leaked ( ) const 
{ __CvT__record_line____(__CvT_miT,62,192);return this -> _M_refcount < 0 ; } 

bool 
_M_is_shared ( ) const 
{ __CvT__record_line____(__CvT_miT,62,196);return this -> _M_refcount > 0 ; } 

void 
_M_set_leaked ( ) 
{ __CvT__record_line____(__CvT_miT,62,200);this -> _M_refcount = - 1 ; } 

void 
_M_set_sharable ( ) 
{ __CvT__record_line____(__CvT_miT,62,204);this -> _M_refcount = 0 ; } 

void 
_M_set_length_and_sharable ( size_type __n ) 
{ __CvT__record_line____(__CvT_miT,62,208);

__CvT__record_line____(__CvT_miT,62,210);if ( __builtin_expect ( this != & _S_empty_rep ( ) , false ) ) 

{{ 
__CvT__record_line____(__CvT_miT,62,213);this -> _M_set_sharable ( ) ; 
__CvT__record_line____(__CvT_miT,62,214);this -> _M_length = __n ; 
__CvT__record_line____(__CvT_miT,62,215);traits_type :: assign ( this -> _M_refdata ( ) [ __n ] , _S_terminal ) ; 


} 
}} 

_CharT * 
_M_refdata ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,62,223);return reinterpret_cast < _CharT *> ( this + 1 ) ; } 

_CharT * 
_M_grab ( const _Alloc & __alloc1 , const _Alloc & __alloc2 ) 
{ __CvT__record_line____(__CvT_miT,62,227);
__CvT__record_line____(__CvT_miT,62,228);return ( ! _M_is_leaked ( ) && __alloc1 == __alloc2 ) 
? _M_refcopy ( ) : _M_clone ( __alloc1 ) ; 
} 


static _Rep * 
_S_create ( size_type , size_type , const _Alloc & ) ; 

void 
_M_dispose ( const _Alloc & __a ) 
{ __CvT__record_line____(__CvT_miT,62,238);

__CvT__record_line____(__CvT_miT,62,240);if ( __builtin_expect ( this != & _S_empty_rep ( ) , false ) ) 

{{ 

; 
__CvT__record_line____(__CvT_miT,62,245);if ( __gnu_cxx :: __exchange_and_add_dispatch ( & this -> _M_refcount , 
- 1 ) <= 0 ) 
{{ 
; 
__CvT__record_line____(__CvT_miT,62,249);_M_destroy ( __a ) ; 
} 
}} 
}} 

void 
_M_destroy ( const _Alloc & ) throw ( ) ; 

_CharT * 
_M_refcopy ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,62,259);

__CvT__record_line____(__CvT_miT,62,261);if ( __builtin_expect ( this != & _S_empty_rep ( ) , false ) ) 

{__CvT__record_line____(__CvT_miT,62,263);__gnu_cxx :: __atomic_add_dispatch ( & this -> _M_refcount , 1 ) ; 
}__CvT__record_line____(__CvT_miT,62,264);return _M_refdata ( ) ; 
} 

_CharT * 
_M_clone ( const _Alloc & , size_type __res = 0 ) ; 
} ; 


struct _Alloc_hider : _Alloc 
{ 
_Alloc_hider ( _CharT * __dat , const _Alloc & __a ) 
: _Alloc ( __a ) , _M_p ( __dat ) { __CvT__record_line____(__CvT_miT,62,275);} 

_CharT * _M_p ; 
} ; 

public : 




static const size_type npos = static_cast < size_type > ( - 1 ) ; 

private : 

mutable _Alloc_hider _M_dataplus ; 

_CharT * 
_M_data ( ) const 
{ __CvT__record_line____(__CvT_miT,62,293);return _M_dataplus . _M_p ; } 

_CharT * 
_M_data ( _CharT * __p ) 
{ __CvT__record_line____(__CvT_miT,62,297);return ( _M_dataplus . _M_p = __p ) ; } 

_Rep * 
_M_rep ( ) const 
{ __CvT__record_line____(__CvT_miT,62,301);return & ( ( reinterpret_cast < _Rep *> ( _M_data ( ) ) ) [ - 1 ] ) ; } 



iterator 
_M_ibegin ( ) const 
{ __CvT__record_line____(__CvT_miT,62,307);return iterator ( _M_data ( ) ) ; } 

iterator 
_M_iend ( ) const 
{ __CvT__record_line____(__CvT_miT,62,311);return iterator ( _M_data ( ) + this -> size ( ) ) ; } 

void 
_M_leak ( ) 
{ __CvT__record_line____(__CvT_miT,62,315);
__CvT__record_line____(__CvT_miT,62,316);if ( ! _M_rep ( ) -> _M_is_leaked ( ) ) 
{__CvT__record_line____(__CvT_miT,62,317);_M_leak_hard ( ) ; 
}} 

size_type 
_M_check ( size_type __pos , const char * __s ) const 
{ __CvT__record_line____(__CvT_miT,62,322);
__CvT__record_line____(__CvT_miT,62,323);if ( __pos > this -> size ( ) ) 
{__CvT__record_line____(__CvT_miT,62,324);__throw_out_of_range ( ( __s ) ) ; 
}__CvT__record_line____(__CvT_miT,62,325);return __pos ; 
} 

void 
_M_check_length ( size_type __n1 , size_type __n2 , const char * __s ) const 
{ __CvT__record_line____(__CvT_miT,62,330);
__CvT__record_line____(__CvT_miT,62,331);if ( this -> max_size ( ) - ( this -> size ( ) - __n1 ) < __n2 ) 
{__CvT__record_line____(__CvT_miT,62,332);__throw_length_error ( ( __s ) ) ; 
}} 


size_type 
_M_limit ( size_type __pos , size_type __off ) const 
{ __CvT__record_line____(__CvT_miT,62,338);
__CvT__record_line____(__CvT_miT,62,339);const bool __testoff = __off < this -> size ( ) - __pos ; 
__CvT__record_line____(__CvT_miT,62,340);return __testoff ? __off : this -> size ( ) - __pos ; 
} 


bool 
_M_disjunct ( const _CharT * __s ) const 
{ __CvT__record_line____(__CvT_miT,62,346);
__CvT__record_line____(__CvT_miT,62,347);return ( less < const _CharT *> ( ) ( __s , _M_data ( ) ) 
|| less < const _CharT *> ( ) ( _M_data ( ) + this -> size ( ) , __s ) ) ; 
} 



static void 
_M_copy ( _CharT * __d , const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,62,355);
__CvT__record_line____(__CvT_miT,62,356);if ( __n == 1 ) 
{__CvT__record_line____(__CvT_miT,62,357);traits_type :: assign ( * __d , * __s ) ; 
}else {
__CvT__record_line____(__CvT_miT,62,359);traits_type :: copy ( __d , __s , __n ) ; 
}} 

static void 
_M_move ( _CharT * __d , const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,62,364);
__CvT__record_line____(__CvT_miT,62,365);if ( __n == 1 ) 
{__CvT__record_line____(__CvT_miT,62,366);traits_type :: assign ( * __d , * __s ) ; 
}else {
__CvT__record_line____(__CvT_miT,62,368);traits_type :: move ( __d , __s , __n ) ; 
}} 

static void 
_M_assign ( _CharT * __d , size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,373);
__CvT__record_line____(__CvT_miT,62,374);if ( __n == 1 ) 
{__CvT__record_line____(__CvT_miT,62,375);traits_type :: assign ( * __d , __c ) ; 
}else {
__CvT__record_line____(__CvT_miT,62,377);traits_type :: assign ( __d , __n , __c ) ; 
}} 



template < class _Iterator > 
static void 
_S_copy_chars ( _CharT * __p , _Iterator __k1 , _Iterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,385);
__CvT__record_line____(__CvT_miT,62,386);for ( ; __k1 != __k2 ; ++ __k1 , ++ __p ) 
{__CvT__record_line____(__CvT_miT,62,387);traits_type :: assign ( * __p , * __k1 ) ; 
}} 

static void 
_S_copy_chars ( _CharT * __p , iterator __k1 , iterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,392);_S_copy_chars ( __p , __k1 . base ( ) , __k2 . base ( ) ) ; } 

static void 
_S_copy_chars ( _CharT * __p , const_iterator __k1 , const_iterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,396);_S_copy_chars ( __p , __k1 . base ( ) , __k2 . base ( ) ) ; } 

static void 
_S_copy_chars ( _CharT * __p , _CharT * __k1 , _CharT * __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,400);_M_copy ( __p , __k1 , __k2 - __k1 ) ; } 

static void 
_S_copy_chars ( _CharT * __p , const _CharT * __k1 , const _CharT * __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,404);_M_copy ( __p , __k1 , __k2 - __k1 ) ; } 

static int 
_S_compare ( size_type __n1 , size_type __n2 ) 
{ __CvT__record_line____(__CvT_miT,62,408);
__CvT__record_line____(__CvT_miT,62,409);const difference_type __d = difference_type ( __n1 - __n2 ) ; 

__CvT__record_line____(__CvT_miT,62,411);if ( __d > __gnu_cxx :: __numeric_traits < int >:: __max ) 
{__CvT__record_line____(__CvT_miT,62,412);return __gnu_cxx :: __numeric_traits < int >:: __max ; 
}else {__CvT__record_line____(__CvT_miT,62,413);if ( __d < __gnu_cxx :: __numeric_traits < int >:: __min ) 
{__CvT__record_line____(__CvT_miT,62,414);return __gnu_cxx :: __numeric_traits < int >:: __min ; 
}else {
__CvT__record_line____(__CvT_miT,62,416);return int ( __d ) ; 
}}} 

void 
_M_mutate ( size_type __pos , size_type __len1 , size_type __len2 ) ; 

void 
_M_leak_hard ( ) ; 

static _Rep & 
_S_empty_rep ( ) 
{ __CvT__record_line____(__CvT_miT,62,427);return _Rep :: _S_empty_rep ( ) ; } 

public : 







basic_string ( ) 

: _M_dataplus ( _S_empty_rep ( ) . _M_refdata ( ) , _Alloc ( ) ) { __CvT__record_line____(__CvT_miT,62,439);} 







explicit 
basic_string ( const _Alloc & __a ) ; 






basic_string ( const basic_string & __str ) ; 






basic_string ( const basic_string & __str , size_type __pos , 
size_type __n = npos ) ; 







basic_string ( const basic_string & __str , size_type __pos , 
size_type __n , const _Alloc & __a ) ; 
# 483 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string ( const _CharT * __s , size_type __n , 
const _Alloc & __a = _Alloc ( ) ) ; 





basic_string ( const _CharT * __s , const _Alloc & __a = _Alloc ( ) ) ; 






basic_string ( size_type __n , _CharT __c , const _Alloc & __a = _Alloc ( ) ) ; 
# 531 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < class _InputIterator > 
basic_string ( _InputIterator __beg , _InputIterator __end , 
const _Alloc & __a = _Alloc ( ) ) ; 




~ basic_string ( ) 
{ __CvT__record_line____(__CvT_miT,62,539);_M_rep ( ) -> _M_dispose ( this -> get_allocator ( ) ) ; } 





basic_string & 
operator = ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,62,547);return this -> assign ( __str ) ; } 





basic_string & 
operator = ( const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,62,555);return this -> assign ( __s ) ; } 
# 564 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
operator = ( _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,566);
__CvT__record_line____(__CvT_miT,62,567);this -> assign ( 1 , __c ) ; 
__CvT__record_line____(__CvT_miT,62,568);return * this ; 
} 
# 604 "/usr/include/c++/4.8/bits/basic_string.h" 3 
iterator 
begin ( ) 
{ __CvT__record_line____(__CvT_miT,62,606);
__CvT__record_line____(__CvT_miT,62,607);_M_leak ( ) ; 
__CvT__record_line____(__CvT_miT,62,608);return iterator ( _M_data ( ) ) ; 
} 





const_iterator 
begin ( ) const 
{ __CvT__record_line____(__CvT_miT,62,617);return const_iterator ( _M_data ( ) ) ; } 





iterator 
end ( ) 
{ __CvT__record_line____(__CvT_miT,62,625);
__CvT__record_line____(__CvT_miT,62,626);_M_leak ( ) ; 
__CvT__record_line____(__CvT_miT,62,627);return iterator ( _M_data ( ) + this -> size ( ) ) ; 
} 





const_iterator 
end ( ) const 
{ __CvT__record_line____(__CvT_miT,62,636);return const_iterator ( _M_data ( ) + this -> size ( ) ) ; } 






reverse_iterator 
rbegin ( ) 
{ __CvT__record_line____(__CvT_miT,62,645);return reverse_iterator ( this -> end ( ) ) ; } 






const_reverse_iterator 
rbegin ( ) const 
{ __CvT__record_line____(__CvT_miT,62,654);return const_reverse_iterator ( this -> end ( ) ) ; } 






reverse_iterator 
rend ( ) 
{ __CvT__record_line____(__CvT_miT,62,663);return reverse_iterator ( this -> begin ( ) ) ; } 






const_reverse_iterator 
rend ( ) const 
{ __CvT__record_line____(__CvT_miT,62,672);return const_reverse_iterator ( this -> begin ( ) ) ; } 
# 710 "/usr/include/c++/4.8/bits/basic_string.h" 3 
public : 



size_type 
size ( ) const 
{ __CvT__record_line____(__CvT_miT,62,716);return _M_rep ( ) -> _M_length ; } 



size_type 
length ( ) const 
{ __CvT__record_line____(__CvT_miT,62,722);return _M_rep ( ) -> _M_length ; } 


size_type 
max_size ( ) const 
{ __CvT__record_line____(__CvT_miT,62,727);return _Rep :: _S_max_size ; } 
# 739 "/usr/include/c++/4.8/bits/basic_string.h" 3 
void 
resize ( size_type __n , _CharT __c ) ; 
# 752 "/usr/include/c++/4.8/bits/basic_string.h" 3 
void 
resize ( size_type __n ) 
{ __CvT__record_line____(__CvT_miT,62,754);this -> resize ( __n , _CharT ( ) ) ; } 
# 775 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
capacity ( ) const 
{ __CvT__record_line____(__CvT_miT,62,777);return _M_rep ( ) -> _M_capacity ; } 
# 796 "/usr/include/c++/4.8/bits/basic_string.h" 3 
void 
reserve ( size_type __res_arg = 0 ) ; 




void 
clear ( ) 
{ __CvT__record_line____(__CvT_miT,62,804);_M_mutate ( 0 , this -> size ( ) , 0 ) ; } 





bool 
empty ( ) const 
{ __CvT__record_line____(__CvT_miT,62,812);return this -> size ( ) == 0 ; } 
# 825 "/usr/include/c++/4.8/bits/basic_string.h" 3 
const_reference 
operator [ ] ( size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,62,827);
; 
__CvT__record_line____(__CvT_miT,62,829);return _M_data ( ) [ __pos ] ; 
} 
# 842 "/usr/include/c++/4.8/bits/basic_string.h" 3 
reference 
operator [ ] ( size_type __pos ) 
{ __CvT__record_line____(__CvT_miT,62,844);

; 

; 
__CvT__record_line____(__CvT_miT,62,849);_M_leak ( ) ; 
__CvT__record_line____(__CvT_miT,62,850);return _M_data ( ) [ __pos ] ; 
} 
# 863 "/usr/include/c++/4.8/bits/basic_string.h" 3 
const_reference 
at ( size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,62,865);
__CvT__record_line____(__CvT_miT,62,866);if ( __n >= this -> size ( ) ) 
{__CvT__record_line____(__CvT_miT,62,867);__throw_out_of_range ( ( "basic_string::at" ) ) ; 
}__CvT__record_line____(__CvT_miT,62,868);return _M_data ( ) [ __n ] ; 
} 
# 882 "/usr/include/c++/4.8/bits/basic_string.h" 3 
reference 
at ( size_type __n ) 
{ __CvT__record_line____(__CvT_miT,62,884);
__CvT__record_line____(__CvT_miT,62,885);if ( __n >= size ( ) ) 
{__CvT__record_line____(__CvT_miT,62,886);__throw_out_of_range ( ( "basic_string::at" ) ) ; 
}__CvT__record_line____(__CvT_miT,62,887);_M_leak ( ) ; 
__CvT__record_line____(__CvT_miT,62,888);return _M_data ( ) [ __n ] ; 
} 
# 931 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
operator += ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,62,933);return this -> append ( __str ) ; } 






basic_string & 
operator += ( const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,62,942);return this -> append ( __s ) ; } 






basic_string & 
operator += ( _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,951);
__CvT__record_line____(__CvT_miT,62,952);this -> push_back ( __c ) ; 
__CvT__record_line____(__CvT_miT,62,953);return * this ; 
} 
# 972 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
append ( const basic_string & __str ) ; 
# 988 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
append ( const basic_string & __str , size_type __pos , size_type __n ) ; 







basic_string & 
append ( const _CharT * __s , size_type __n ) ; 






basic_string & 
append ( const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,62,1007);
; 
__CvT__record_line____(__CvT_miT,62,1009);return this -> append ( __s , traits_type :: length ( __s ) ) ; 
} 
# 1020 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
append ( size_type __n , _CharT __c ) ; 
# 1042 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < class _InputIterator > 
basic_string & 
append ( _InputIterator __first , _InputIterator __last ) 
{ __CvT__record_line____(__CvT_miT,62,1045);return this -> replace ( _M_iend ( ) , _M_iend ( ) , __first , __last ) ; } 





void 
push_back ( _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,1053);
__CvT__record_line____(__CvT_miT,62,1054);const size_type __len = 1 + this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,62,1055);if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{__CvT__record_line____(__CvT_miT,62,1056);this -> reserve ( __len ) ; 
}__CvT__record_line____(__CvT_miT,62,1057);traits_type :: assign ( _M_data ( ) [ this -> size ( ) ] , __c ) ; 
__CvT__record_line____(__CvT_miT,62,1058);_M_rep ( ) -> _M_set_length_and_sharable ( __len ) ; 
} 






basic_string & 
assign ( const basic_string & __str ) ; 
# 1099 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
assign ( const basic_string & __str , size_type __pos , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,62,1101);return this -> assign ( __str . _M_data ( ) 
+ __str . _M_check ( __pos , "basic_string::assign" ) , 
__str . _M_limit ( __pos , __n ) ) ; } 
# 1115 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
assign ( const _CharT * __s , size_type __n ) ; 
# 1127 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
assign ( const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,62,1129);
; 
__CvT__record_line____(__CvT_miT,62,1131);return this -> assign ( __s , traits_type :: length ( __s ) ) ; 
} 
# 1143 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
assign ( size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,1145);return _M_replace_aux ( size_type ( 0 ) , this -> size ( ) , __n , __c ) ; } 
# 1155 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < class _InputIterator > 
basic_string & 
assign ( _InputIterator __first , _InputIterator __last ) 
{ __CvT__record_line____(__CvT_miT,62,1158);return this -> replace ( _M_ibegin ( ) , _M_iend ( ) , __first , __last ) ; } 
# 1184 "/usr/include/c++/4.8/bits/basic_string.h" 3 
void 
insert ( iterator __p , size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,1186);this -> replace ( __p , __p , __n , __c ) ; } 
# 1200 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < class _InputIterator > 
void 
insert ( iterator __p , _InputIterator __beg , _InputIterator __end ) 
{ __CvT__record_line____(__CvT_miT,62,1203);this -> replace ( __p , __p , __beg , __end ) ; } 
# 1232 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos1 , const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,62,1234);return this -> insert ( __pos1 , __str , size_type ( 0 ) , __str . size ( ) ) ; } 
# 1254 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos1 , const basic_string & __str , 
size_type __pos2 , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,62,1257);return this -> insert ( __pos1 , __str . _M_data ( ) 
+ __str . _M_check ( __pos2 , "basic_string::insert" ) , 
__str . _M_limit ( __pos2 , __n ) ) ; } 
# 1277 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos , const _CharT * __s , size_type __n ) ; 
# 1295 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos , const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,62,1297);
; 
__CvT__record_line____(__CvT_miT,62,1299);return this -> insert ( __pos , __s , traits_type :: length ( __s ) ) ; 
} 
# 1318 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
insert ( size_type __pos , size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,1320);return _M_replace_aux ( _M_check ( __pos , "basic_string::insert" ) , 
size_type ( 0 ) , __n , __c ) ; } 
# 1336 "/usr/include/c++/4.8/bits/basic_string.h" 3 
iterator 
insert ( iterator __p , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,1338);
; 
__CvT__record_line____(__CvT_miT,62,1340);const size_type __pos = __p - _M_ibegin ( ) ; 
__CvT__record_line____(__CvT_miT,62,1341);_M_replace_aux ( __pos , size_type ( 0 ) , size_type ( 1 ) , __c ) ; 
__CvT__record_line____(__CvT_miT,62,1342);_M_rep ( ) -> _M_set_leaked ( ) ; 
__CvT__record_line____(__CvT_miT,62,1343);return iterator ( _M_data ( ) + __pos ) ; 
} 
# 1361 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
erase ( size_type __pos = 0 , size_type __n = npos ) 
{ __CvT__record_line____(__CvT_miT,62,1363);
__CvT__record_line____(__CvT_miT,62,1364);_M_mutate ( _M_check ( __pos , "basic_string::erase" ) , 
_M_limit ( __pos , __n ) , size_type ( 0 ) ) ; 
__CvT__record_line____(__CvT_miT,62,1366);return * this ; 
} 
# 1377 "/usr/include/c++/4.8/bits/basic_string.h" 3 
iterator 
erase ( iterator __position ) 
{ __CvT__record_line____(__CvT_miT,62,1379);

; 
__CvT__record_line____(__CvT_miT,62,1382);const size_type __pos = __position - _M_ibegin ( ) ; 
__CvT__record_line____(__CvT_miT,62,1383);_M_mutate ( __pos , size_type ( 1 ) , size_type ( 0 ) ) ; 
__CvT__record_line____(__CvT_miT,62,1384);_M_rep ( ) -> _M_set_leaked ( ) ; 
__CvT__record_line____(__CvT_miT,62,1385);return iterator ( _M_data ( ) + __pos ) ; 
} 
# 1397 "/usr/include/c++/4.8/bits/basic_string.h" 3 
iterator 
erase ( iterator __first , iterator __last ) ; 
# 1428 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n , const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,62,1430);return this -> replace ( __pos , __n , __str . _M_data ( ) , __str . size ( ) ) ; } 
# 1450 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos1 , size_type __n1 , const basic_string & __str , 
size_type __pos2 , size_type __n2 ) 
{ __CvT__record_line____(__CvT_miT,62,1453);return this -> replace ( __pos1 , __n1 , __str . _M_data ( ) 
+ __str . _M_check ( __pos2 , "basic_string::replace" ) , 
__str . _M_limit ( __pos2 , __n2 ) ) ; } 
# 1475 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) ; 
# 1495 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n1 , const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,62,1497);
; 
__CvT__record_line____(__CvT_miT,62,1499);return this -> replace ( __pos , __n1 , __s , traits_type :: length ( __s ) ) ; 
} 
# 1519 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
replace ( size_type __pos , size_type __n1 , size_type __n2 , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,1521);return _M_replace_aux ( _M_check ( __pos , "basic_string::replace" ) , 
_M_limit ( __pos , __n1 ) , __n2 , __c ) ; } 
# 1537 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
replace ( iterator __i1 , iterator __i2 , const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,62,1539);return this -> replace ( __i1 , __i2 , __str . _M_data ( ) , __str . size ( ) ) ; } 
# 1556 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
replace ( iterator __i1 , iterator __i2 , const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,62,1558);

; 
__CvT__record_line____(__CvT_miT,62,1561);return this -> replace ( __i1 - _M_ibegin ( ) , __i2 - __i1 , __s , __n ) ; 
} 
# 1577 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
replace ( iterator __i1 , iterator __i2 , const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,62,1579);
; 
__CvT__record_line____(__CvT_miT,62,1581);return this -> replace ( __i1 , __i2 , __s , traits_type :: length ( __s ) ) ; 
} 
# 1598 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string & 
replace ( iterator __i1 , iterator __i2 , size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,62,1600);

; 
__CvT__record_line____(__CvT_miT,62,1603);return _M_replace_aux ( __i1 - _M_ibegin ( ) , __i2 - __i1 , __n , __c ) ; 
} 
# 1621 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < class _InputIterator > 
basic_string & 
replace ( iterator __i1 , iterator __i2 , 
_InputIterator __k1 , _InputIterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,1625);

; 
; 
typedef typename std :: __is_integer < _InputIterator >:: __type _Integral ; 
__CvT__record_line____(__CvT_miT,62,1630);return _M_replace_dispatch ( __i1 , __i2 , __k1 , __k2 , _Integral ( ) ) ; 
} 



basic_string & 
replace ( iterator __i1 , iterator __i2 , _CharT * __k1 , _CharT * __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,1637);

; 
; 
__CvT__record_line____(__CvT_miT,62,1641);return this -> replace ( __i1 - _M_ibegin ( ) , __i2 - __i1 , 
__k1 , __k2 - __k1 ) ; 
} 

basic_string & 
replace ( iterator __i1 , iterator __i2 , 
const _CharT * __k1 , const _CharT * __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,1648);

; 
; 
__CvT__record_line____(__CvT_miT,62,1652);return this -> replace ( __i1 - _M_ibegin ( ) , __i2 - __i1 , 
__k1 , __k2 - __k1 ) ; 
} 

basic_string & 
replace ( iterator __i1 , iterator __i2 , iterator __k1 , iterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,1658);

; 
; 
__CvT__record_line____(__CvT_miT,62,1662);return this -> replace ( __i1 - _M_ibegin ( ) , __i2 - __i1 , 
__k1 . base ( ) , __k2 - __k1 ) ; 
} 

basic_string & 
replace ( iterator __i1 , iterator __i2 , 
const_iterator __k1 , const_iterator __k2 ) 
{ __CvT__record_line____(__CvT_miT,62,1669);

; 
; 
__CvT__record_line____(__CvT_miT,62,1673);return this -> replace ( __i1 - _M_ibegin ( ) , __i2 - __i1 , 
__k1 . base ( ) , __k2 - __k1 ) ; 
} 
# 1697 "/usr/include/c++/4.8/bits/basic_string.h" 3 
private : 
template < class _Integer > 
basic_string & 
_M_replace_dispatch ( iterator __i1 , iterator __i2 , _Integer __n , 
_Integer __val , __true_type ) 
{ __CvT__record_line____(__CvT_miT,62,1702);return _M_replace_aux ( __i1 - _M_ibegin ( ) , __i2 - __i1 , __n , __val ) ; } 

template < class _InputIterator > 
basic_string & 
_M_replace_dispatch ( iterator __i1 , iterator __i2 , _InputIterator __k1 , 
_InputIterator __k2 , __false_type ) ; 

basic_string & 
_M_replace_aux ( size_type __pos1 , size_type __n1 , size_type __n2 , 
_CharT __c ) ; 

basic_string & 
_M_replace_safe ( size_type __pos1 , size_type __n1 , const _CharT * __s , 
size_type __n2 ) ; 



template < class _InIterator > 
static _CharT * 
_S_construct_aux ( _InIterator __beg , _InIterator __end , 
const _Alloc & __a , __false_type ) 
{ __CvT__record_line____(__CvT_miT,62,1723);
typedef typename iterator_traits < _InIterator >:: iterator_category _Tag ; 
__CvT__record_line____(__CvT_miT,62,1725);return _S_construct ( __beg , __end , __a , _Tag ( ) ) ; 
} 



template < class _Integer > 
static _CharT * 
_S_construct_aux ( _Integer __beg , _Integer __end , 
const _Alloc & __a , __true_type ) 
{ __CvT__record_line____(__CvT_miT,62,1734);return _S_construct_aux_2 ( static_cast < size_type > ( __beg ) , 
__end , __a ) ; } 

static _CharT * 
_S_construct_aux_2 ( size_type __req , _CharT __c , const _Alloc & __a ) 
{ __CvT__record_line____(__CvT_miT,62,1739);return _S_construct ( __req , __c , __a ) ; } 

template < class _InIterator > 
static _CharT * 
_S_construct ( _InIterator __beg , _InIterator __end , const _Alloc & __a ) 
{ __CvT__record_line____(__CvT_miT,62,1744);
typedef typename std :: __is_integer < _InIterator >:: __type _Integral ; 
__CvT__record_line____(__CvT_miT,62,1746);return _S_construct_aux ( __beg , __end , __a , _Integral ( ) ) ; 
} 


template < class _InIterator > 
static _CharT * 
_S_construct ( _InIterator __beg , _InIterator __end , const _Alloc & __a , 
input_iterator_tag ) ; 



template < class _FwdIterator > 
static _CharT * 
_S_construct ( _FwdIterator __beg , _FwdIterator __end , const _Alloc & __a , 
forward_iterator_tag ) ; 

static _CharT * 
_S_construct ( size_type __req , _CharT __c , const _Alloc & __a ) ; 

public : 
# 1779 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
copy ( _CharT * __s , size_type __n , size_type __pos = 0 ) const ; 
# 1789 "/usr/include/c++/4.8/bits/basic_string.h" 3 
void 
swap ( basic_string & __s ) ; 
# 1799 "/usr/include/c++/4.8/bits/basic_string.h" 3 
const _CharT * 
c_str ( ) const 
{ __CvT__record_line____(__CvT_miT,62,1801);return _M_data ( ) ; } 







const _CharT * 
data ( ) const 
{ __CvT__record_line____(__CvT_miT,62,1811);return _M_data ( ) ; } 




allocator_type 
get_allocator ( ) const 
{ __CvT__record_line____(__CvT_miT,62,1818);return _M_dataplus ; } 
# 1832 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find ( const _CharT * __s , size_type __pos , size_type __n ) const ; 
# 1845 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find ( const basic_string & __str , size_type __pos = 0 ) const 

{ __CvT__record_line____(__CvT_miT,62,1848);return this -> find ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 1860 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find ( const _CharT * __s , size_type __pos = 0 ) const 
{ __CvT__record_line____(__CvT_miT,62,1862);
; 
__CvT__record_line____(__CvT_miT,62,1864);return this -> find ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 1877 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find ( _CharT __c , size_type __pos = 0 ) const ; 
# 1890 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
rfind ( const basic_string & __str , size_type __pos = npos ) const 

{ __CvT__record_line____(__CvT_miT,62,1893);return this -> rfind ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 1907 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
rfind ( const _CharT * __s , size_type __pos , size_type __n ) const ; 
# 1920 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
rfind ( const _CharT * __s , size_type __pos = npos ) const 
{ __CvT__record_line____(__CvT_miT,62,1922);
; 
__CvT__record_line____(__CvT_miT,62,1924);return this -> rfind ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 1937 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
rfind ( _CharT __c , size_type __pos = npos ) const ; 
# 1951 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_first_of ( const basic_string & __str , size_type __pos = 0 ) const 

{ __CvT__record_line____(__CvT_miT,62,1954);return this -> find_first_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 1968 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_first_of ( const _CharT * __s , size_type __pos , size_type __n ) const ; 
# 1981 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_first_of ( const _CharT * __s , size_type __pos = 0 ) const 
{ __CvT__record_line____(__CvT_miT,62,1983);
; 
__CvT__record_line____(__CvT_miT,62,1985);return this -> find_first_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2000 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_first_of ( _CharT __c , size_type __pos = 0 ) const 
{ __CvT__record_line____(__CvT_miT,62,2002);return this -> find ( __c , __pos ) ; } 
# 2015 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_last_of ( const basic_string & __str , size_type __pos = npos ) const 

{ __CvT__record_line____(__CvT_miT,62,2018);return this -> find_last_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2032 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_last_of ( const _CharT * __s , size_type __pos , size_type __n ) const ; 
# 2045 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_last_of ( const _CharT * __s , size_type __pos = npos ) const 
{ __CvT__record_line____(__CvT_miT,62,2047);
; 
__CvT__record_line____(__CvT_miT,62,2049);return this -> find_last_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2064 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_last_of ( _CharT __c , size_type __pos = npos ) const 
{ __CvT__record_line____(__CvT_miT,62,2066);return this -> rfind ( __c , __pos ) ; } 
# 2078 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_first_not_of ( const basic_string & __str , size_type __pos = 0 ) const 

{ __CvT__record_line____(__CvT_miT,62,2081);return this -> find_first_not_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2095 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_first_not_of ( const _CharT * __s , size_type __pos , 
size_type __n ) const ; 
# 2109 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_first_not_of ( const _CharT * __s , size_type __pos = 0 ) const 
{ __CvT__record_line____(__CvT_miT,62,2111);
; 
__CvT__record_line____(__CvT_miT,62,2113);return this -> find_first_not_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2126 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_first_not_of ( _CharT __c , size_type __pos = 0 ) const 
; 
# 2141 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_last_not_of ( const basic_string & __str , size_type __pos = npos ) const 

{ __CvT__record_line____(__CvT_miT,62,2144);return this -> find_last_not_of ( __str . data ( ) , __pos , __str . size ( ) ) ; } 
# 2158 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_last_not_of ( const _CharT * __s , size_type __pos , 
size_type __n ) const ; 
# 2172 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_last_not_of ( const _CharT * __s , size_type __pos = npos ) const 
{ __CvT__record_line____(__CvT_miT,62,2174);
; 
__CvT__record_line____(__CvT_miT,62,2176);return this -> find_last_not_of ( __s , __pos , traits_type :: length ( __s ) ) ; 
} 
# 2189 "/usr/include/c++/4.8/bits/basic_string.h" 3 
size_type 
find_last_not_of ( _CharT __c , size_type __pos = npos ) const 
; 
# 2205 "/usr/include/c++/4.8/bits/basic_string.h" 3 
basic_string 
substr ( size_type __pos = 0 , size_type __n = npos ) const 
{ __CvT__record_line____(__CvT_miT,62,2207);return basic_string ( * this , 
_M_check ( __pos , "basic_string::substr" ) , __n ) ; } 
# 2224 "/usr/include/c++/4.8/bits/basic_string.h" 3 
int 
compare ( const basic_string & __str ) const 
{ __CvT__record_line____(__CvT_miT,62,2226);
__CvT__record_line____(__CvT_miT,62,2227);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,62,2228);const size_type __osize = __str . size ( ) ; 
__CvT__record_line____(__CvT_miT,62,2229);const size_type __len = std :: min ( __size , __osize ) ; 

__CvT__record_line____(__CvT_miT,62,2231);int __r = traits_type :: compare ( _M_data ( ) , __str . data ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,62,2232);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,62,2233);__r = _S_compare ( __size , __osize ) ; 
}__CvT__record_line____(__CvT_miT,62,2234);return __r ; 
} 
# 2256 "/usr/include/c++/4.8/bits/basic_string.h" 3 
int 
compare ( size_type __pos , size_type __n , const basic_string & __str ) const ; 
# 2282 "/usr/include/c++/4.8/bits/basic_string.h" 3 
int 
compare ( size_type __pos1 , size_type __n1 , const basic_string & __str , 
size_type __pos2 , size_type __n2 ) const ; 
# 2300 "/usr/include/c++/4.8/bits/basic_string.h" 3 
int 
compare ( const _CharT * __s ) const ; 
# 2324 "/usr/include/c++/4.8/bits/basic_string.h" 3 
int 
compare ( size_type __pos , size_type __n1 , const _CharT * __s ) const ; 
# 2351 "/usr/include/c++/4.8/bits/basic_string.h" 3 
int 
compare ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) const ; 
} ; 
# 2363 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2367);
__CvT__record_line____(__CvT_miT,62,2368);basic_string < _CharT , _Traits , _Alloc > __str ( __lhs ) ; 
__CvT__record_line____(__CvT_miT,62,2369);__str . append ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,62,2370);return __str ; 
} 







template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) ; 







template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( _CharT __lhs , const basic_string < _CharT , _Traits , _Alloc >& __rhs ) ; 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2404);
__CvT__record_line____(__CvT_miT,62,2405);basic_string < _CharT , _Traits , _Alloc > __str ( __lhs ) ; 
__CvT__record_line____(__CvT_miT,62,2406);__str . append ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,62,2407);return __str ; 
} 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_string < _CharT , _Traits , _Alloc > 
operator + ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , _CharT __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2419);
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __string_type :: size_type __size_type ; 
__CvT__record_line____(__CvT_miT,62,2422);__string_type __str ( __lhs ) ; 
__CvT__record_line____(__CvT_miT,62,2423);__str . append ( __size_type ( 1 ) , __rhs ) ; 
__CvT__record_line____(__CvT_miT,62,2424);return __str ; 
} 
# 2484 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator == ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2488);return __lhs . compare ( __rhs ) == 0 ; } 

template < typename _CharT > 
inline 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , bool >:: __type 
operator == ( const basic_string < _CharT >& __lhs , 
const basic_string < _CharT >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2495);return ( __lhs . size ( ) == __rhs . size ( ) 
&& ! std :: char_traits < _CharT >:: compare ( __lhs . data ( ) , __rhs . data ( ) , 
__lhs . size ( ) ) ) ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator == ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2509);return __rhs . compare ( __lhs ) == 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator == ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2521);return __lhs . compare ( __rhs ) == 0 ; } 
# 2530 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator != ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2534);return ! ( __lhs == __rhs ) ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator != ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2546);return ! ( __lhs == __rhs ) ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator != ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2558);return ! ( __lhs == __rhs ) ; } 
# 2567 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator < ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2571);return __lhs . compare ( __rhs ) < 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator < ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2583);return __lhs . compare ( __rhs ) < 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator < ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2595);return __rhs . compare ( __lhs ) > 0 ; } 
# 2604 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator > ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2608);return __lhs . compare ( __rhs ) > 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator > ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2620);return __lhs . compare ( __rhs ) > 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator > ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2632);return __rhs . compare ( __lhs ) < 0 ; } 
# 2641 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator <= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2645);return __lhs . compare ( __rhs ) <= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator <= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2657);return __lhs . compare ( __rhs ) <= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator <= ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2669);return __rhs . compare ( __lhs ) >= 0 ; } 
# 2678 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator >= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2682);return __lhs . compare ( __rhs ) >= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator >= ( const basic_string < _CharT , _Traits , _Alloc >& __lhs , 
const _CharT * __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2694);return __lhs . compare ( __rhs ) >= 0 ; } 







template < typename _CharT , typename _Traits , typename _Alloc > 
inline bool 
operator >= ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2706);return __rhs . compare ( __lhs ) <= 0 ; } 
# 2715 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline void 
swap ( basic_string < _CharT , _Traits , _Alloc >& __lhs , 
basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,62,2719);__lhs . swap ( __rhs ) ; } 
# 2733 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str ) ; 

template <> 
basic_istream < char >& 
operator >> ( basic_istream < char >& __is , basic_string < char >& __str ) ; 
# 2751 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __os , 
const basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,62,2755);


__CvT__record_line____(__CvT_miT,62,2758);return __ostream_insert ( __os , __str . data ( ) , __str . size ( ) ) ; 
} 
# 2774 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str , _CharT __delim ) ; 
# 2791 "/usr/include/c++/4.8/bits/basic_string.h" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
inline basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >& __is , 
basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,62,2795);return getline ( __is , __str , __is . widen ( '\n' ) ) ; } 

template <> 
basic_istream < char >& 
getline ( basic_istream < char >& __in , basic_string < char >& __str , 
char __delim ) ; 


template <> 
basic_istream < wchar_t >& 
getline ( basic_istream < wchar_t >& __in , basic_string < wchar_t >& __str , 
wchar_t __delim ) ; 



} 
# 53 "/usr/include/c++/4.8/string" 2 3 
# 1 "/usr/include/c++/4.8/bits/basic_string.tcc" 1 3 
# 40 "/usr/include/c++/4.8/bits/basic_string.tcc" 3 

# 41 "/usr/include/c++/4.8/bits/basic_string.tcc" 3 



namespace std 
{ 


template < typename _CharT , typename _Traits , typename _Alloc > 
const typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
_Rep :: _S_max_size = ( ( ( npos - sizeof ( _Rep_base ) ) / sizeof ( _CharT ) ) - 1 ) / 4 ; 

template < typename _CharT , typename _Traits , typename _Alloc > 
const _CharT 
basic_string < _CharT , _Traits , _Alloc >:: 
_Rep :: _S_terminal = _CharT ( ) ; 

template < typename _CharT , typename _Traits , typename _Alloc > 
const typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: npos ; 



template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: _Rep :: _S_empty_rep_storage [ 
( sizeof ( _Rep_base ) + sizeof ( _CharT ) + sizeof ( size_type ) - 1 ) / 
sizeof ( size_type ) ] ; 





template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InIterator > 
_CharT * 
basic_string < _CharT , _Traits , _Alloc >:: 
_S_construct ( _InIterator __beg , _InIterator __end , const _Alloc & __a , 
input_iterator_tag ) 
{ __CvT__record_line____(__CvT_miT,75,80);

__CvT__record_line____(__CvT_miT,75,82);if ( __beg == __end && __a == _Alloc ( ) ) 
{__CvT__record_line____(__CvT_miT,75,83);return _S_empty_rep ( ) . _M_refdata ( ) ; 


}__CvT__record_line____(__CvT_miT,75,86);_CharT __buf [ 128 ] ; 
__CvT__record_line____(__CvT_miT,75,87);size_type __len = 0 ; 
__CvT__record_line____(__CvT_miT,75,88);while ( __beg != __end && __len < sizeof ( __buf ) / sizeof ( _CharT ) ) 
{{ 
__CvT__record_line____(__CvT_miT,75,90);__buf [ __len ++ ] = * __beg ; 
__CvT__record_line____(__CvT_miT,75,91);++ __beg ; 
} 
}__CvT__record_line____(__CvT_miT,75,93);_Rep * __r = _Rep :: _S_create ( __len , size_type ( 0 ) , __a ) ; 
__CvT__record_line____(__CvT_miT,75,94);_M_copy ( __r -> _M_refdata ( ) , __buf , __len ) ; 
__CvT__record_line____(__CvT_miT,75,95);try 
{ 
__CvT__record_line____(__CvT_miT,75,97);while ( __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,75,99);if ( __len == __r -> _M_capacity ) 
{{ 

__CvT__record_line____(__CvT_miT,75,102);_Rep * __another = _Rep :: _S_create ( __len + 1 , __len , __a ) ; 
__CvT__record_line____(__CvT_miT,75,103);_M_copy ( __another -> _M_refdata ( ) , __r -> _M_refdata ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,75,104);__r -> _M_destroy ( __a ) ; 
__CvT__record_line____(__CvT_miT,75,105);__r = __another ; 
} 
}__CvT__record_line____(__CvT_miT,75,107);__r -> _M_refdata ( ) [ __len ++ ] = * __beg ; 
__CvT__record_line____(__CvT_miT,75,108);++ __beg ; 
} 
}} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,75,113);__r -> _M_destroy ( __a ) ; 
__CvT__record_line____(__CvT_miT,75,114);throw ; 
} 
__CvT__record_line____(__CvT_miT,75,116);__r -> _M_set_length_and_sharable ( __len ) ; 
__CvT__record_line____(__CvT_miT,75,117);return __r -> _M_refdata ( ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InIterator > 
_CharT * 
basic_string < _CharT , _Traits , _Alloc >:: 
_S_construct ( _InIterator __beg , _InIterator __end , const _Alloc & __a , 
forward_iterator_tag ) 
{ __CvT__record_line____(__CvT_miT,75,126);

__CvT__record_line____(__CvT_miT,75,128);if ( __beg == __end && __a == _Alloc ( ) ) 
{__CvT__record_line____(__CvT_miT,75,129);return _S_empty_rep ( ) . _M_refdata ( ) ; 


}__CvT__record_line____(__CvT_miT,75,132);if ( __gnu_cxx :: __is_null_pointer ( __beg ) && __beg != __end ) 
{__CvT__record_line____(__CvT_miT,75,133);__throw_logic_error ( ( "basic_string::_S_construct null not valid" ) ) ; 

}__CvT__record_line____(__CvT_miT,75,135);const size_type __dnew = static_cast < size_type > ( std :: distance ( __beg , 
__end ) ) ; 

__CvT__record_line____(__CvT_miT,75,138);_Rep * __r = _Rep :: _S_create ( __dnew , size_type ( 0 ) , __a ) ; 
__CvT__record_line____(__CvT_miT,75,139);try 
{ __CvT__record_line____(__CvT_miT,75,140);_S_copy_chars ( __r -> _M_refdata ( ) , __beg , __end ) ; } 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,75,143);__r -> _M_destroy ( __a ) ; 
__CvT__record_line____(__CvT_miT,75,144);throw ; 
} 
__CvT__record_line____(__CvT_miT,75,146);__r -> _M_set_length_and_sharable ( __dnew ) ; 
__CvT__record_line____(__CvT_miT,75,147);return __r -> _M_refdata ( ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
_CharT * 
basic_string < _CharT , _Traits , _Alloc >:: 
_S_construct ( size_type __n , _CharT __c , const _Alloc & __a ) 
{ __CvT__record_line____(__CvT_miT,75,154);

__CvT__record_line____(__CvT_miT,75,156);if ( __n == 0 && __a == _Alloc ( ) ) 
{__CvT__record_line____(__CvT_miT,75,157);return _S_empty_rep ( ) . _M_refdata ( ) ; 


}__CvT__record_line____(__CvT_miT,75,160);_Rep * __r = _Rep :: _S_create ( __n , size_type ( 0 ) , __a ) ; 
__CvT__record_line____(__CvT_miT,75,161);if ( __n ) 
{__CvT__record_line____(__CvT_miT,75,162);_M_assign ( __r -> _M_refdata ( ) , __n , __c ) ; 

}__CvT__record_line____(__CvT_miT,75,164);__r -> _M_set_length_and_sharable ( __n ) ; 
__CvT__record_line____(__CvT_miT,75,165);return __r -> _M_refdata ( ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >:: 
basic_string ( const basic_string & __str ) 
: _M_dataplus ( __str . _M_rep ( ) -> _M_grab ( _Alloc ( __str . get_allocator ( ) ) , 
__str . get_allocator ( ) ) , 
__str . get_allocator ( ) ) 
{ __CvT__record_line____(__CvT_miT,75,174);} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >:: 
basic_string ( const _Alloc & __a ) 
: _M_dataplus ( _S_construct ( size_type ( ) , _CharT ( ) , __a ) , __a ) 
{ __CvT__record_line____(__CvT_miT,75,180);} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >:: 
basic_string ( const basic_string & __str , size_type __pos , size_type __n ) 
: _M_dataplus ( _S_construct ( __str . _M_data ( ) 
+ __str . _M_check ( __pos , 
"basic_string::basic_string" ) , 
__str . _M_data ( ) + __str . _M_limit ( __pos , __n ) 
+ __pos , _Alloc ( ) ) , _Alloc ( ) ) 
{ __CvT__record_line____(__CvT_miT,75,190);} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >:: 
basic_string ( const basic_string & __str , size_type __pos , 
size_type __n , const _Alloc & __a ) 
: _M_dataplus ( _S_construct ( __str . _M_data ( ) 
+ __str . _M_check ( __pos , 
"basic_string::basic_string" ) , 
__str . _M_data ( ) + __str . _M_limit ( __pos , __n ) 
+ __pos , __a ) , __a ) 
{ __CvT__record_line____(__CvT_miT,75,201);} 


template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >:: 
basic_string ( const _CharT * __s , size_type __n , const _Alloc & __a ) 
: _M_dataplus ( _S_construct ( __s , __s + __n , __a ) , __a ) 
{ __CvT__record_line____(__CvT_miT,75,208);} 


template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >:: 
basic_string ( const _CharT * __s , const _Alloc & __a ) 
: _M_dataplus ( _S_construct ( __s , __s ? __s + traits_type :: length ( __s ) : 
__s + npos , __a ) , __a ) 
{ __CvT__record_line____(__CvT_miT,75,216);} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >:: 
basic_string ( size_type __n , _CharT __c , const _Alloc & __a ) 
: _M_dataplus ( _S_construct ( __n , __c , __a ) , __a ) 
{ __CvT__record_line____(__CvT_miT,75,222);} 


template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InputIterator > 
basic_string < _CharT , _Traits , _Alloc >:: 
basic_string ( _InputIterator __beg , _InputIterator __end , const _Alloc & __a ) 
: _M_dataplus ( _S_construct ( __beg , __end , __a ) , __a ) 
{ __CvT__record_line____(__CvT_miT,75,230);} 
# 240 "/usr/include/c++/4.8/bits/basic_string.tcc" 3 
template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
assign ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,75,244);
__CvT__record_line____(__CvT_miT,75,245);if ( _M_rep ( ) != __str . _M_rep ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,75,248);const allocator_type __a = this -> get_allocator ( ) ; 
__CvT__record_line____(__CvT_miT,75,249);_CharT * __tmp = __str . _M_rep ( ) -> _M_grab ( __a , __str . get_allocator ( ) ) ; 
__CvT__record_line____(__CvT_miT,75,250);_M_rep ( ) -> _M_dispose ( __a ) ; 
__CvT__record_line____(__CvT_miT,75,251);_M_data ( __tmp ) ; 
} 
}__CvT__record_line____(__CvT_miT,75,253);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
assign ( const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,75,260);
; 
__CvT__record_line____(__CvT_miT,75,262);_M_check_length ( this -> size ( ) , __n , "basic_string::assign" ) ; 
__CvT__record_line____(__CvT_miT,75,263);if ( _M_disjunct ( __s ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{__CvT__record_line____(__CvT_miT,75,264);return _M_replace_safe ( size_type ( 0 ) , this -> size ( ) , __s , __n ) ; 
}else {
{ 

__CvT__record_line____(__CvT_miT,75,268);const size_type __pos = __s - _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,75,269);if ( __pos >= __n ) 
{__CvT__record_line____(__CvT_miT,75,270);_M_copy ( _M_data ( ) , __s , __n ) ; 
}else {__CvT__record_line____(__CvT_miT,75,271);if ( __pos ) 
{__CvT__record_line____(__CvT_miT,75,272);_M_move ( _M_data ( ) , __s , __n ) ; 
}}__CvT__record_line____(__CvT_miT,75,273);_M_rep ( ) -> _M_set_length_and_sharable ( __n ) ; 
__CvT__record_line____(__CvT_miT,75,274);return * this ; 
} 
}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
append ( size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,75,282);
__CvT__record_line____(__CvT_miT,75,283);if ( __n ) 
{{ 
__CvT__record_line____(__CvT_miT,75,285);_M_check_length ( size_type ( 0 ) , __n , "basic_string::append" ) ; 
__CvT__record_line____(__CvT_miT,75,286);const size_type __len = __n + this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,287);if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{__CvT__record_line____(__CvT_miT,75,288);this -> reserve ( __len ) ; 
}__CvT__record_line____(__CvT_miT,75,289);_M_assign ( _M_data ( ) + this -> size ( ) , __n , __c ) ; 
__CvT__record_line____(__CvT_miT,75,290);_M_rep ( ) -> _M_set_length_and_sharable ( __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,75,292);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
append ( const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,75,299);
; 
__CvT__record_line____(__CvT_miT,75,301);if ( __n ) 
{{ 
__CvT__record_line____(__CvT_miT,75,303);_M_check_length ( size_type ( 0 ) , __n , "basic_string::append" ) ; 
__CvT__record_line____(__CvT_miT,75,304);const size_type __len = __n + this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,305);if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,75,307);if ( _M_disjunct ( __s ) ) 
{__CvT__record_line____(__CvT_miT,75,308);this -> reserve ( __len ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,75,311);const size_type __off = __s - _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,75,312);this -> reserve ( __len ) ; 
__CvT__record_line____(__CvT_miT,75,313);__s = _M_data ( ) + __off ; 
} 
}} 
}__CvT__record_line____(__CvT_miT,75,316);_M_copy ( _M_data ( ) + this -> size ( ) , __s , __n ) ; 
__CvT__record_line____(__CvT_miT,75,317);_M_rep ( ) -> _M_set_length_and_sharable ( __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,75,319);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
append ( const basic_string & __str ) 
{ __CvT__record_line____(__CvT_miT,75,326);
__CvT__record_line____(__CvT_miT,75,327);const size_type __size = __str . size ( ) ; 
__CvT__record_line____(__CvT_miT,75,328);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,75,330);const size_type __len = __size + this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,331);if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{__CvT__record_line____(__CvT_miT,75,332);this -> reserve ( __len ) ; 
}__CvT__record_line____(__CvT_miT,75,333);_M_copy ( _M_data ( ) + this -> size ( ) , __str . _M_data ( ) , __size ) ; 
__CvT__record_line____(__CvT_miT,75,334);_M_rep ( ) -> _M_set_length_and_sharable ( __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,75,336);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
append ( const basic_string & __str , size_type __pos , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,75,343);
__CvT__record_line____(__CvT_miT,75,344);__str . _M_check ( __pos , "basic_string::append" ) ; 
__CvT__record_line____(__CvT_miT,75,345);__n = __str . _M_limit ( __pos , __n ) ; 
__CvT__record_line____(__CvT_miT,75,346);if ( __n ) 
{{ 
__CvT__record_line____(__CvT_miT,75,348);const size_type __len = __n + this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,349);if ( __len > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{__CvT__record_line____(__CvT_miT,75,350);this -> reserve ( __len ) ; 
}__CvT__record_line____(__CvT_miT,75,351);_M_copy ( _M_data ( ) + this -> size ( ) , __str . _M_data ( ) + __pos , __n ) ; 
__CvT__record_line____(__CvT_miT,75,352);_M_rep ( ) -> _M_set_length_and_sharable ( __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,75,354);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
insert ( size_type __pos , const _CharT * __s , size_type __n ) 
{ __CvT__record_line____(__CvT_miT,75,361);
; 
__CvT__record_line____(__CvT_miT,75,363);_M_check ( __pos , "basic_string::insert" ) ; 
__CvT__record_line____(__CvT_miT,75,364);_M_check_length ( size_type ( 0 ) , __n , "basic_string::insert" ) ; 
__CvT__record_line____(__CvT_miT,75,365);if ( _M_disjunct ( __s ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{__CvT__record_line____(__CvT_miT,75,366);return _M_replace_safe ( __pos , size_type ( 0 ) , __s , __n ) ; 
}else {
{ 

__CvT__record_line____(__CvT_miT,75,370);const size_type __off = __s - _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,75,371);_M_mutate ( __pos , 0 , __n ) ; 
__CvT__record_line____(__CvT_miT,75,372);__s = _M_data ( ) + __off ; 
__CvT__record_line____(__CvT_miT,75,373);_CharT * __p = _M_data ( ) + __pos ; 
__CvT__record_line____(__CvT_miT,75,374);if ( __s + __n <= __p ) 
{__CvT__record_line____(__CvT_miT,75,375);_M_copy ( __p , __s , __n ) ; 
}else {__CvT__record_line____(__CvT_miT,75,376);if ( __s >= __p ) 
{__CvT__record_line____(__CvT_miT,75,377);_M_copy ( __p , __s + __n , __n ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,75,380);const size_type __nleft = __p - __s ; 
__CvT__record_line____(__CvT_miT,75,381);_M_copy ( __p , __s , __nleft ) ; 
__CvT__record_line____(__CvT_miT,75,382);_M_copy ( __p + __nleft , __p + __n , __n - __nleft ) ; 
} 
}}__CvT__record_line____(__CvT_miT,75,384);return * this ; 
} 
}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: iterator 
basic_string < _CharT , _Traits , _Alloc >:: 
erase ( iterator __first , iterator __last ) 
{ __CvT__record_line____(__CvT_miT,75,392);

; 




__CvT__record_line____(__CvT_miT,75,399);const size_type __size = __last - __first ; 
__CvT__record_line____(__CvT_miT,75,400);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,75,402);const size_type __pos = __first - _M_ibegin ( ) ; 
__CvT__record_line____(__CvT_miT,75,403);_M_mutate ( __pos , __size , size_type ( 0 ) ) ; 
__CvT__record_line____(__CvT_miT,75,404);_M_rep ( ) -> _M_set_leaked ( ) ; 
__CvT__record_line____(__CvT_miT,75,405);return iterator ( _M_data ( ) + __pos ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,75,408);return __first ; 
}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
replace ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) 
{ __CvT__record_line____(__CvT_miT,75,416);
; 
__CvT__record_line____(__CvT_miT,75,418);_M_check ( __pos , "basic_string::replace" ) ; 
__CvT__record_line____(__CvT_miT,75,419);__n1 = _M_limit ( __pos , __n1 ) ; 
__CvT__record_line____(__CvT_miT,75,420);_M_check_length ( __n1 , __n2 , "basic_string::replace" ) ; 
__CvT__record_line____(__CvT_miT,75,421);bool __left ; 
__CvT__record_line____(__CvT_miT,75,422);if ( _M_disjunct ( __s ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{__CvT__record_line____(__CvT_miT,75,423);return _M_replace_safe ( __pos , __n1 , __s , __n2 ) ; 
}else {__CvT__record_line____(__CvT_miT,75,424);if ( ( __left = __s + __n2 <= _M_data ( ) + __pos ) 
|| _M_data ( ) + __pos + __n1 <= __s ) 
{{ 

__CvT__record_line____(__CvT_miT,75,428);size_type __off = __s - _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,75,429);__left ? __off : ( __off += __n2 - __n1 ) ; 
__CvT__record_line____(__CvT_miT,75,430);_M_mutate ( __pos , __n1 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,75,431);_M_copy ( _M_data ( ) + __pos , _M_data ( ) + __off , __n2 ) ; 
__CvT__record_line____(__CvT_miT,75,432);return * this ; 
} 
}else {
{ 

__CvT__record_line____(__CvT_miT,75,437);const basic_string __tmp ( __s , __n2 ) ; 
__CvT__record_line____(__CvT_miT,75,438);return _M_replace_safe ( __pos , __n1 , __tmp . _M_data ( ) , __n2 ) ; 
} 
}}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: _Rep :: 
_M_destroy ( const _Alloc & __a ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,75,446);
__CvT__record_line____(__CvT_miT,75,447);const size_type __size = sizeof ( _Rep_base ) + 
( this -> _M_capacity + 1 ) * sizeof ( _CharT ) ; 
__CvT__record_line____(__CvT_miT,75,449);_Raw_bytes_alloc ( __a ) . deallocate ( reinterpret_cast < char *> ( this ) , __size ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_leak_hard ( ) 
{ __CvT__record_line____(__CvT_miT,75,456);

__CvT__record_line____(__CvT_miT,75,458);if ( _M_rep ( ) == & _S_empty_rep ( ) ) 
{__CvT__record_line____(__CvT_miT,75,459);return ; 

}__CvT__record_line____(__CvT_miT,75,461);if ( _M_rep ( ) -> _M_is_shared ( ) ) 
{__CvT__record_line____(__CvT_miT,75,462);_M_mutate ( 0 , 0 , 0 ) ; 
}__CvT__record_line____(__CvT_miT,75,463);_M_rep ( ) -> _M_set_leaked ( ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_mutate ( size_type __pos , size_type __len1 , size_type __len2 ) 
{ __CvT__record_line____(__CvT_miT,75,470);
__CvT__record_line____(__CvT_miT,75,471);const size_type __old_size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,472);const size_type __new_size = __old_size + __len2 - __len1 ; 
__CvT__record_line____(__CvT_miT,75,473);const size_type __how_much = __old_size - __pos - __len1 ; 

__CvT__record_line____(__CvT_miT,75,475);if ( __new_size > this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,75,478);const allocator_type __a = get_allocator ( ) ; 
__CvT__record_line____(__CvT_miT,75,479);_Rep * __r = _Rep :: _S_create ( __new_size , this -> capacity ( ) , __a ) ; 

__CvT__record_line____(__CvT_miT,75,481);if ( __pos ) 
{__CvT__record_line____(__CvT_miT,75,482);_M_copy ( __r -> _M_refdata ( ) , _M_data ( ) , __pos ) ; 
}__CvT__record_line____(__CvT_miT,75,483);if ( __how_much ) 
{__CvT__record_line____(__CvT_miT,75,484);_M_copy ( __r -> _M_refdata ( ) + __pos + __len2 , 
_M_data ( ) + __pos + __len1 , __how_much ) ; 

}__CvT__record_line____(__CvT_miT,75,487);_M_rep ( ) -> _M_dispose ( __a ) ; 
__CvT__record_line____(__CvT_miT,75,488);_M_data ( __r -> _M_refdata ( ) ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,75,490);if ( __how_much && __len1 != __len2 ) 
{{ 

__CvT__record_line____(__CvT_miT,75,493);_M_move ( _M_data ( ) + __pos + __len2 , 
_M_data ( ) + __pos + __len1 , __how_much ) ; 
} 
}}__CvT__record_line____(__CvT_miT,75,496);_M_rep ( ) -> _M_set_length_and_sharable ( __new_size ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
reserve ( size_type __res ) 
{ __CvT__record_line____(__CvT_miT,75,503);
__CvT__record_line____(__CvT_miT,75,504);if ( __res != this -> capacity ( ) || _M_rep ( ) -> _M_is_shared ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,75,507);if ( __res < this -> size ( ) ) 
{__CvT__record_line____(__CvT_miT,75,508);__res = this -> size ( ) ; 
}__CvT__record_line____(__CvT_miT,75,509);const allocator_type __a = get_allocator ( ) ; 
__CvT__record_line____(__CvT_miT,75,510);_CharT * __tmp = _M_rep ( ) -> _M_clone ( __a , __res - this -> size ( ) ) ; 
__CvT__record_line____(__CvT_miT,75,511);_M_rep ( ) -> _M_dispose ( __a ) ; 
__CvT__record_line____(__CvT_miT,75,512);_M_data ( __tmp ) ; 
} 
}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
swap ( basic_string & __s ) 
{ __CvT__record_line____(__CvT_miT,75,520);
__CvT__record_line____(__CvT_miT,75,521);if ( _M_rep ( ) -> _M_is_leaked ( ) ) 
{__CvT__record_line____(__CvT_miT,75,522);_M_rep ( ) -> _M_set_sharable ( ) ; 
}__CvT__record_line____(__CvT_miT,75,523);if ( __s . _M_rep ( ) -> _M_is_leaked ( ) ) 
{__CvT__record_line____(__CvT_miT,75,524);__s . _M_rep ( ) -> _M_set_sharable ( ) ; 
}__CvT__record_line____(__CvT_miT,75,525);if ( this -> get_allocator ( ) == __s . get_allocator ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,75,527);_CharT * __tmp = _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,75,528);_M_data ( __s . _M_data ( ) ) ; 
__CvT__record_line____(__CvT_miT,75,529);__s . _M_data ( __tmp ) ; 
} 

}else {
{ 
__CvT__record_line____(__CvT_miT,75,534);const basic_string __tmp1 ( _M_ibegin ( ) , _M_iend ( ) , 
__s . get_allocator ( ) ) ; 
__CvT__record_line____(__CvT_miT,75,536);const basic_string __tmp2 ( __s . _M_ibegin ( ) , __s . _M_iend ( ) , 
this -> get_allocator ( ) ) ; 
__CvT__record_line____(__CvT_miT,75,538);* this = __tmp2 ; 
__CvT__record_line____(__CvT_miT,75,539);__s = __tmp1 ; 
} 
}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: _Rep * 
basic_string < _CharT , _Traits , _Alloc >:: _Rep :: 
_S_create ( size_type __capacity , size_type __old_capacity , 
const _Alloc & __alloc ) 
{ __CvT__record_line____(__CvT_miT,75,548);


__CvT__record_line____(__CvT_miT,75,551);if ( __capacity > _S_max_size ) 
{__CvT__record_line____(__CvT_miT,75,552);__throw_length_error ( ( "basic_string::_S_create" ) ) ; 
# 577 "/usr/include/c++/4.8/bits/basic_string.tcc" 3 
}__CvT__record_line____(__CvT_miT,75,577);const size_type __pagesize = 4096 ; 
__CvT__record_line____(__CvT_miT,75,578);const size_type __malloc_header_size = 4 * sizeof ( void * ) ; 







__CvT__record_line____(__CvT_miT,75,586);if ( __capacity > __old_capacity && __capacity < 2 * __old_capacity ) 
{__CvT__record_line____(__CvT_miT,75,587);__capacity = 2 * __old_capacity ; 




}__CvT__record_line____(__CvT_miT,75,592);size_type __size = ( __capacity + 1 ) * sizeof ( _CharT ) + sizeof ( _Rep ) ; 

__CvT__record_line____(__CvT_miT,75,594);const size_type __adj_size = __size + __malloc_header_size ; 
__CvT__record_line____(__CvT_miT,75,595);if ( __adj_size > __pagesize && __capacity > __old_capacity ) 
{{ 
__CvT__record_line____(__CvT_miT,75,597);const size_type __extra = __pagesize - __adj_size % __pagesize ; 
__CvT__record_line____(__CvT_miT,75,598);__capacity += __extra / sizeof ( _CharT ) ; 

__CvT__record_line____(__CvT_miT,75,600);if ( __capacity > _S_max_size ) 
{__CvT__record_line____(__CvT_miT,75,601);__capacity = _S_max_size ; 
}__CvT__record_line____(__CvT_miT,75,602);__size = ( __capacity + 1 ) * sizeof ( _CharT ) + sizeof ( _Rep ) ; 
} 



}__CvT__record_line____(__CvT_miT,75,607);void * __place = _Raw_bytes_alloc ( __alloc ) . allocate ( __size ) ; 
__CvT__record_line____(__CvT_miT,75,608);_Rep * __p = new ( __place ) _Rep ; 
__CvT__record_line____(__CvT_miT,75,609);__p -> _M_capacity = __capacity ; 







__CvT__record_line____(__CvT_miT,75,617);__p -> _M_set_sharable ( ) ; 
__CvT__record_line____(__CvT_miT,75,618);return __p ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
_CharT * 
basic_string < _CharT , _Traits , _Alloc >:: _Rep :: 
_M_clone ( const _Alloc & __alloc , size_type __res ) 
{ __CvT__record_line____(__CvT_miT,75,625);

__CvT__record_line____(__CvT_miT,75,627);const size_type __requested_cap = this -> _M_length + __res ; 
__CvT__record_line____(__CvT_miT,75,628);_Rep * __r = _Rep :: _S_create ( __requested_cap , this -> _M_capacity , 
__alloc ) ; 
__CvT__record_line____(__CvT_miT,75,630);if ( this -> _M_length ) 
{__CvT__record_line____(__CvT_miT,75,631);_M_copy ( __r -> _M_refdata ( ) , _M_refdata ( ) , this -> _M_length ) ; 

}__CvT__record_line____(__CvT_miT,75,633);__r -> _M_set_length_and_sharable ( this -> _M_length ) ; 
__CvT__record_line____(__CvT_miT,75,634);return __r -> _M_refdata ( ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
void 
basic_string < _CharT , _Traits , _Alloc >:: 
resize ( size_type __n , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,75,641);
__CvT__record_line____(__CvT_miT,75,642);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,643);_M_check_length ( __size , __n , "basic_string::resize" ) ; 
__CvT__record_line____(__CvT_miT,75,644);if ( __size < __n ) 
{__CvT__record_line____(__CvT_miT,75,645);this -> append ( __n - __size , __c ) ; 
}else {__CvT__record_line____(__CvT_miT,75,646);if ( __n < __size ) 
{__CvT__record_line____(__CvT_miT,75,647);this -> erase ( __n ) ; 

}}} 

template < typename _CharT , typename _Traits , typename _Alloc > 
template < typename _InputIterator > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_replace_dispatch ( iterator __i1 , iterator __i2 , _InputIterator __k1 , 
_InputIterator __k2 , __false_type ) 
{ __CvT__record_line____(__CvT_miT,75,657);
__CvT__record_line____(__CvT_miT,75,658);const basic_string __s ( __k1 , __k2 ) ; 
__CvT__record_line____(__CvT_miT,75,659);const size_type __n1 = __i2 - __i1 ; 
__CvT__record_line____(__CvT_miT,75,660);_M_check_length ( __n1 , __s . size ( ) , "basic_string::_M_replace_dispatch" ) ; 
__CvT__record_line____(__CvT_miT,75,661);return _M_replace_safe ( __i1 - _M_ibegin ( ) , __n1 , __s . _M_data ( ) , 
__s . size ( ) ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_replace_aux ( size_type __pos1 , size_type __n1 , size_type __n2 , 
_CharT __c ) 
{ __CvT__record_line____(__CvT_miT,75,670);
__CvT__record_line____(__CvT_miT,75,671);_M_check_length ( __n1 , __n2 , "basic_string::_M_replace_aux" ) ; 
__CvT__record_line____(__CvT_miT,75,672);_M_mutate ( __pos1 , __n1 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,75,673);if ( __n2 ) 
{__CvT__record_line____(__CvT_miT,75,674);_M_assign ( _M_data ( ) + __pos1 , __n2 , __c ) ; 
}__CvT__record_line____(__CvT_miT,75,675);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc >& 
basic_string < _CharT , _Traits , _Alloc >:: 
_M_replace_safe ( size_type __pos1 , size_type __n1 , const _CharT * __s , 
size_type __n2 ) 
{ __CvT__record_line____(__CvT_miT,75,683);
__CvT__record_line____(__CvT_miT,75,684);_M_mutate ( __pos1 , __n1 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,75,685);if ( __n2 ) 
{__CvT__record_line____(__CvT_miT,75,686);_M_copy ( _M_data ( ) + __pos1 , __s , __n2 ) ; 
}__CvT__record_line____(__CvT_miT,75,687);return * this ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( const _CharT * __lhs , 
const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,75,694);
; 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __string_type :: size_type __size_type ; 
__CvT__record_line____(__CvT_miT,75,698);const __size_type __len = _Traits :: length ( __lhs ) ; 
__CvT__record_line____(__CvT_miT,75,699);__string_type __str ; 
__CvT__record_line____(__CvT_miT,75,700);__str . reserve ( __len + __rhs . size ( ) ) ; 
__CvT__record_line____(__CvT_miT,75,701);__str . append ( __lhs , __len ) ; 
__CvT__record_line____(__CvT_miT,75,702);__str . append ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,75,703);return __str ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_string < _CharT , _Traits , _Alloc > 
operator + ( _CharT __lhs , const basic_string < _CharT , _Traits , _Alloc >& __rhs ) 
{ __CvT__record_line____(__CvT_miT,75,709);
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __string_type :: size_type __size_type ; 
__CvT__record_line____(__CvT_miT,75,712);__string_type __str ; 
__CvT__record_line____(__CvT_miT,75,713);const __size_type __len = __rhs . size ( ) ; 
__CvT__record_line____(__CvT_miT,75,714);__str . reserve ( __len + 1 ) ; 
__CvT__record_line____(__CvT_miT,75,715);__str . append ( __size_type ( 1 ) , __lhs ) ; 
__CvT__record_line____(__CvT_miT,75,716);__str . append ( __rhs ) ; 
__CvT__record_line____(__CvT_miT,75,717);return __str ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
copy ( _CharT * __s , size_type __n , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,75,724);
__CvT__record_line____(__CvT_miT,75,725);_M_check ( __pos , "basic_string::copy" ) ; 
__CvT__record_line____(__CvT_miT,75,726);__n = _M_limit ( __pos , __n ) ; 
; 
__CvT__record_line____(__CvT_miT,75,728);if ( __n ) 
{__CvT__record_line____(__CvT_miT,75,729);_M_copy ( __s , _M_data ( ) + __pos , __n ) ; 

}__CvT__record_line____(__CvT_miT,75,731);return __n ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,75,738);
; 
__CvT__record_line____(__CvT_miT,75,740);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,741);const _CharT * __data = _M_data ( ) ; 

__CvT__record_line____(__CvT_miT,75,743);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,75,744);return __pos <= __size ? __pos : npos ; 

}__CvT__record_line____(__CvT_miT,75,746);if ( __n <= __size ) 
{{ 
__CvT__record_line____(__CvT_miT,75,748);for ( ; __pos <= __size - __n ; ++ __pos ) 
{__CvT__record_line____(__CvT_miT,75,749);if ( traits_type :: eq ( __data [ __pos ] , __s [ 0 ] ) 
&& traits_type :: compare ( __data + __pos + 1 , 
__s + 1 , __n - 1 ) == 0 ) 
{__CvT__record_line____(__CvT_miT,75,752);return __pos ; 
}}} 
}__CvT__record_line____(__CvT_miT,75,754);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find ( _CharT __c , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,75,761);
__CvT__record_line____(__CvT_miT,75,762);size_type __ret = npos ; 
__CvT__record_line____(__CvT_miT,75,763);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,764);if ( __pos < __size ) 
{{ 
__CvT__record_line____(__CvT_miT,75,766);const _CharT * __data = _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,75,767);const size_type __n = __size - __pos ; 
__CvT__record_line____(__CvT_miT,75,768);const _CharT * __p = traits_type :: find ( __data + __pos , __n , __c ) ; 
__CvT__record_line____(__CvT_miT,75,769);if ( __p ) 
{__CvT__record_line____(__CvT_miT,75,770);__ret = __p - __data ; 
}} 
}__CvT__record_line____(__CvT_miT,75,772);return __ret ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
rfind ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,75,779);
; 
__CvT__record_line____(__CvT_miT,75,781);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,782);if ( __n <= __size ) 
{{ 
__CvT__record_line____(__CvT_miT,75,784);__pos = std :: min ( size_type ( __size - __n ) , __pos ) ; 
__CvT__record_line____(__CvT_miT,75,785);const _CharT * __data = _M_data ( ) ; 
__CvT__record_line____(__CvT_miT,75,786);do {
{ 
__CvT__record_line____(__CvT_miT,75,788);if ( traits_type :: compare ( __data + __pos , __s , __n ) == 0 ) 
{__CvT__record_line____(__CvT_miT,75,789);return __pos ; 
}} 
}while ( __pos -- > 0 ) ;
} 
}__CvT__record_line____(__CvT_miT,75,793);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
rfind ( _CharT __c , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,75,800);
__CvT__record_line____(__CvT_miT,75,801);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,802);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,75,804);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,75,805);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,75,806);for ( ++ __size ; __size -- > 0 ; ) 
{__CvT__record_line____(__CvT_miT,75,807);if ( traits_type :: eq ( _M_data ( ) [ __size ] , __c ) ) 
{__CvT__record_line____(__CvT_miT,75,808);return __size ; 
}}} 
}__CvT__record_line____(__CvT_miT,75,810);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_first_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,75,817);
; 
__CvT__record_line____(__CvT_miT,75,819);for ( ; __n && __pos < this -> size ( ) ; ++ __pos ) 
{{ 
__CvT__record_line____(__CvT_miT,75,821);const _CharT * __p = traits_type :: find ( __s , __n , _M_data ( ) [ __pos ] ) ; 
__CvT__record_line____(__CvT_miT,75,822);if ( __p ) 
{__CvT__record_line____(__CvT_miT,75,823);return __pos ; 
}} 
}__CvT__record_line____(__CvT_miT,75,825);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_last_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,75,832);
; 
__CvT__record_line____(__CvT_miT,75,834);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,835);if ( __size && __n ) 
{{ 
__CvT__record_line____(__CvT_miT,75,837);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,75,838);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,75,839);do {
{ 
__CvT__record_line____(__CvT_miT,75,841);if ( traits_type :: find ( __s , __n , _M_data ( ) [ __size ] ) ) 
{__CvT__record_line____(__CvT_miT,75,842);return __size ; 
}} 
}while ( __size -- != 0 ) ;
} 
}__CvT__record_line____(__CvT_miT,75,846);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_first_not_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,75,853);
; 
__CvT__record_line____(__CvT_miT,75,855);for ( ; __pos < this -> size ( ) ; ++ __pos ) 
{__CvT__record_line____(__CvT_miT,75,856);if ( ! traits_type :: find ( __s , __n , _M_data ( ) [ __pos ] ) ) 
{__CvT__record_line____(__CvT_miT,75,857);return __pos ; 
}}__CvT__record_line____(__CvT_miT,75,858);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_first_not_of ( _CharT __c , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,75,865);
__CvT__record_line____(__CvT_miT,75,866);for ( ; __pos < this -> size ( ) ; ++ __pos ) 
{__CvT__record_line____(__CvT_miT,75,867);if ( ! traits_type :: eq ( _M_data ( ) [ __pos ] , __c ) ) 
{__CvT__record_line____(__CvT_miT,75,868);return __pos ; 
}}__CvT__record_line____(__CvT_miT,75,869);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_last_not_of ( const _CharT * __s , size_type __pos , size_type __n ) const 
{ __CvT__record_line____(__CvT_miT,75,876);
; 
__CvT__record_line____(__CvT_miT,75,878);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,879);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,75,881);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,75,882);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,75,883);do {
{ 
__CvT__record_line____(__CvT_miT,75,885);if ( ! traits_type :: find ( __s , __n , _M_data ( ) [ __size ] ) ) 
{__CvT__record_line____(__CvT_miT,75,886);return __size ; 
}} 
}while ( __size -- ) ;
} 
}__CvT__record_line____(__CvT_miT,75,890);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
typename basic_string < _CharT , _Traits , _Alloc >:: size_type 
basic_string < _CharT , _Traits , _Alloc >:: 
find_last_not_of ( _CharT __c , size_type __pos ) const 
{ __CvT__record_line____(__CvT_miT,75,897);
__CvT__record_line____(__CvT_miT,75,898);size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,899);if ( __size ) 
{{ 
__CvT__record_line____(__CvT_miT,75,901);if ( -- __size > __pos ) 
{__CvT__record_line____(__CvT_miT,75,902);__size = __pos ; 
}__CvT__record_line____(__CvT_miT,75,903);do {
{ 
__CvT__record_line____(__CvT_miT,75,905);if ( ! traits_type :: eq ( _M_data ( ) [ __size ] , __c ) ) 
{__CvT__record_line____(__CvT_miT,75,906);return __size ; 
}} 
}while ( __size -- ) ;
} 
}__CvT__record_line____(__CvT_miT,75,910);return npos ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos , size_type __n , const basic_string & __str ) const 
{ __CvT__record_line____(__CvT_miT,75,917);
__CvT__record_line____(__CvT_miT,75,918);_M_check ( __pos , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,75,919);__n = _M_limit ( __pos , __n ) ; 
__CvT__record_line____(__CvT_miT,75,920);const size_type __osize = __str . size ( ) ; 
__CvT__record_line____(__CvT_miT,75,921);const size_type __len = std :: min ( __n , __osize ) ; 
__CvT__record_line____(__CvT_miT,75,922);int __r = traits_type :: compare ( _M_data ( ) + __pos , __str . data ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,75,923);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,75,924);__r = _S_compare ( __n , __osize ) ; 
}__CvT__record_line____(__CvT_miT,75,925);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos1 , size_type __n1 , const basic_string & __str , 
size_type __pos2 , size_type __n2 ) const 
{ __CvT__record_line____(__CvT_miT,75,933);
__CvT__record_line____(__CvT_miT,75,934);_M_check ( __pos1 , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,75,935);__str . _M_check ( __pos2 , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,75,936);__n1 = _M_limit ( __pos1 , __n1 ) ; 
__CvT__record_line____(__CvT_miT,75,937);__n2 = __str . _M_limit ( __pos2 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,75,938);const size_type __len = std :: min ( __n1 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,75,939);int __r = traits_type :: compare ( _M_data ( ) + __pos1 , 
__str . data ( ) + __pos2 , __len ) ; 
__CvT__record_line____(__CvT_miT,75,941);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,75,942);__r = _S_compare ( __n1 , __n2 ) ; 
}__CvT__record_line____(__CvT_miT,75,943);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( const _CharT * __s ) const 
{ __CvT__record_line____(__CvT_miT,75,950);
; 
__CvT__record_line____(__CvT_miT,75,952);const size_type __size = this -> size ( ) ; 
__CvT__record_line____(__CvT_miT,75,953);const size_type __osize = traits_type :: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,75,954);const size_type __len = std :: min ( __size , __osize ) ; 
__CvT__record_line____(__CvT_miT,75,955);int __r = traits_type :: compare ( _M_data ( ) , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,75,956);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,75,957);__r = _S_compare ( __size , __osize ) ; 
}__CvT__record_line____(__CvT_miT,75,958);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos , size_type __n1 , const _CharT * __s ) const 
{ __CvT__record_line____(__CvT_miT,75,965);
; 
__CvT__record_line____(__CvT_miT,75,967);_M_check ( __pos , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,75,968);__n1 = _M_limit ( __pos , __n1 ) ; 
__CvT__record_line____(__CvT_miT,75,969);const size_type __osize = traits_type :: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,75,970);const size_type __len = std :: min ( __n1 , __osize ) ; 
__CvT__record_line____(__CvT_miT,75,971);int __r = traits_type :: compare ( _M_data ( ) + __pos , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,75,972);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,75,973);__r = _S_compare ( __n1 , __osize ) ; 
}__CvT__record_line____(__CvT_miT,75,974);return __r ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
int 
basic_string < _CharT , _Traits , _Alloc >:: 
compare ( size_type __pos , size_type __n1 , const _CharT * __s , 
size_type __n2 ) const 
{ __CvT__record_line____(__CvT_miT,75,982);
; 
__CvT__record_line____(__CvT_miT,75,984);_M_check ( __pos , "basic_string::compare" ) ; 
__CvT__record_line____(__CvT_miT,75,985);__n1 = _M_limit ( __pos , __n1 ) ; 
__CvT__record_line____(__CvT_miT,75,986);const size_type __len = std :: min ( __n1 , __n2 ) ; 
__CvT__record_line____(__CvT_miT,75,987);int __r = traits_type :: compare ( _M_data ( ) + __pos , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,75,988);if ( ! __r ) 
{__CvT__record_line____(__CvT_miT,75,989);__r = _S_compare ( __n1 , __n2 ) ; 
}__CvT__record_line____(__CvT_miT,75,990);return __r ; 
} 


template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , 
basic_string < _CharT , _Traits , _Alloc >& __str ) 
{ __CvT__record_line____(__CvT_miT,75,998);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __istream_type :: ios_base __ios_base ; 
typedef typename __istream_type :: int_type __int_type ; 
typedef typename __string_type :: size_type __size_type ; 
typedef ctype < _CharT > __ctype_type ; 
typedef typename __ctype_type :: ctype_base __ctype_base ; 

__CvT__record_line____(__CvT_miT,75,1007);__size_type __extracted = 0 ; 
__CvT__record_line____(__CvT_miT,75,1008);typename __ios_base :: iostate __err = __ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,75,1009);typename __istream_type :: sentry __cerb ( __in , false ) ; 
__CvT__record_line____(__CvT_miT,75,1010);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,75,1012);try 
{ 

__CvT__record_line____(__CvT_miT,75,1015);__str . erase ( ) ; 
__CvT__record_line____(__CvT_miT,75,1016);_CharT __buf [ 128 ] ; 
__CvT__record_line____(__CvT_miT,75,1017);__size_type __len = 0 ; 
__CvT__record_line____(__CvT_miT,75,1018);const streamsize __w = __in . width ( ) ; 
__CvT__record_line____(__CvT_miT,75,1019);const __size_type __n = __w > 0 ? static_cast < __size_type > ( __w ) 
: __str . max_size ( ) ; 
__CvT__record_line____(__CvT_miT,75,1021);const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,75,1022);const __int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,75,1023);__int_type __c = __in . rdbuf ( ) -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,75,1025);while ( __extracted < __n 
&& ! _Traits :: eq_int_type ( __c , __eof ) 
&& ! __ct . is ( __ctype_base :: space , 
_Traits :: to_char_type ( __c ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,75,1030);if ( __len == sizeof ( __buf ) / sizeof ( _CharT ) ) 
{{ 
__CvT__record_line____(__CvT_miT,75,1032);__str . append ( __buf , sizeof ( __buf ) / sizeof ( _CharT ) ) ; 
__CvT__record_line____(__CvT_miT,75,1033);__len = 0 ; 
} 
}__CvT__record_line____(__CvT_miT,75,1035);__buf [ __len ++ ] = _Traits :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,75,1036);++ __extracted ; 
__CvT__record_line____(__CvT_miT,75,1037);__c = __in . rdbuf ( ) -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,75,1039);__str . append ( __buf , __len ) ; 

__CvT__record_line____(__CvT_miT,75,1041);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,75,1042);__err |= __ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,75,1043);__in . width ( 0 ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,75,1047);__in . _M_setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,75,1048);throw ; 
} 
catch ( ... ) 
{ 



__CvT__record_line____(__CvT_miT,75,1055);__in . _M_setstate ( __ios_base :: badbit ) ; 
} 
} 

}__CvT__record_line____(__CvT_miT,75,1059);if ( ! __extracted ) 
{__CvT__record_line____(__CvT_miT,75,1060);__err |= __ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,75,1061);if ( __err ) 
{__CvT__record_line____(__CvT_miT,75,1062);__in . setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,75,1063);return __in ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
basic_istream < _CharT , _Traits >& 
getline ( basic_istream < _CharT , _Traits >& __in , 
basic_string < _CharT , _Traits , _Alloc >& __str , _CharT __delim ) 
{ __CvT__record_line____(__CvT_miT,75,1070);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_string < _CharT , _Traits , _Alloc > __string_type ; 
typedef typename __istream_type :: ios_base __ios_base ; 
typedef typename __istream_type :: int_type __int_type ; 
typedef typename __string_type :: size_type __size_type ; 

__CvT__record_line____(__CvT_miT,75,1077);__size_type __extracted = 0 ; 
__CvT__record_line____(__CvT_miT,75,1078);const __size_type __n = __str . max_size ( ) ; 
__CvT__record_line____(__CvT_miT,75,1079);typename __ios_base :: iostate __err = __ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,75,1080);typename __istream_type :: sentry __cerb ( __in , true ) ; 
__CvT__record_line____(__CvT_miT,75,1081);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,75,1083);try 
{ 
__CvT__record_line____(__CvT_miT,75,1085);__str . erase ( ) ; 
__CvT__record_line____(__CvT_miT,75,1086);const __int_type __idelim = _Traits :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,75,1087);const __int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,75,1088);__int_type __c = __in . rdbuf ( ) -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,75,1090);while ( __extracted < __n 
&& ! _Traits :: eq_int_type ( __c , __eof ) 
&& ! _Traits :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,75,1094);__str += _Traits :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,75,1095);++ __extracted ; 
__CvT__record_line____(__CvT_miT,75,1096);__c = __in . rdbuf ( ) -> snextc ( ) ; 
} 

}__CvT__record_line____(__CvT_miT,75,1099);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,75,1100);__err |= __ios_base :: eofbit ; 
}else {__CvT__record_line____(__CvT_miT,75,1101);if ( _Traits :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,75,1103);++ __extracted ; 
__CvT__record_line____(__CvT_miT,75,1104);__in . rdbuf ( ) -> sbumpc ( ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,75,1107);__err |= __ios_base :: failbit ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,75,1111);__in . _M_setstate ( __ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,75,1112);throw ; 
} 
catch ( ... ) 
{ 



__CvT__record_line____(__CvT_miT,75,1119);__in . _M_setstate ( __ios_base :: badbit ) ; 
} 
} 
}__CvT__record_line____(__CvT_miT,75,1122);if ( ! __extracted ) 
{__CvT__record_line____(__CvT_miT,75,1123);__err |= __ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,75,1124);if ( __err ) 
{__CvT__record_line____(__CvT_miT,75,1125);__in . setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,75,1126);return __in ; 
} 




extern template class basic_string < char > ; 
extern template 
basic_istream < char >& 
operator >> ( basic_istream < char >& , string & ) ; 
extern template 
basic_ostream < char >& 
operator << ( basic_ostream < char >& , const string & ) ; 
extern template 
basic_istream < char >& 
getline ( basic_istream < char >& , string & , char ) ; 
extern template 
basic_istream < char >& 
getline ( basic_istream < char >& , string & ) ; 


extern template class basic_string < wchar_t > ; 
extern template 
basic_istream < wchar_t >& 
operator >> ( basic_istream < wchar_t >& , wstring & ) ; 
extern template 
basic_ostream < wchar_t >& 
operator << ( basic_ostream < wchar_t >& , const wstring & ) ; 
extern template 
basic_istream < wchar_t >& 
getline ( basic_istream < wchar_t >& , wstring & , wchar_t ) ; 
extern template 
basic_istream < wchar_t >& 
getline ( basic_istream < wchar_t >& , wstring & ) ; 




} 
# 54 "/usr/include/c++/4.8/string" 2 3 
# 2 "hard.c" 2 
# 1 "/usr/include/c++/4.8/fstream" 1 3 
# 36 "/usr/include/c++/4.8/fstream" 3 

# 37 "/usr/include/c++/4.8/fstream" 3 

# 1 "/usr/include/c++/4.8/istream" 1 3 
# 36 "/usr/include/c++/4.8/istream" 3 

# 37 "/usr/include/c++/4.8/istream" 3 

# 1 "/usr/include/c++/4.8/ios" 1 3 
# 36 "/usr/include/c++/4.8/ios" 3 

# 37 "/usr/include/c++/4.8/ios" 3 





# 1 "/usr/include/c++/4.8/bits/ios_base.h" 1 3 
# 37 "/usr/include/c++/4.8/bits/ios_base.h" 3 

# 38 "/usr/include/c++/4.8/bits/ios_base.h" 3 



# 1 "/usr/include/c++/4.8/bits/locale_classes.h" 1 3 
# 37 "/usr/include/c++/4.8/bits/locale_classes.h" 3 

# 38 "/usr/include/c++/4.8/bits/locale_classes.h" 3 





namespace std 
{ 

# 62 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
class locale 
{ 
public : 


typedef int category ; 


class facet ; 
class id ; 
class _Impl ; 

friend class facet ; 
friend class _Impl ; 

template < typename _Facet > 
friend bool 
has_facet ( const locale & ) throw ( ) ; 

template < typename _Facet > 
friend const _Facet & 
use_facet ( const locale & ) ; 

template < typename _Cache > 
friend struct __use_cache ; 
# 98 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
static const category none = 0 ; 
static const category ctype = 1L << 0 ; 
static const category numeric = 1L << 1 ; 
static const category collate = 1L << 2 ; 
static const category time = 1L << 3 ; 
static const category monetary = 1L << 4 ; 
static const category messages = 1L << 5 ; 
static const category all = ( ctype | numeric | collate | 
time | monetary | messages ) ; 
# 117 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
locale ( ) throw ( ) ; 
# 126 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
locale ( const locale & __other ) throw ( ) ; 
# 136 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
explicit 
locale ( const char * __s ) ; 
# 151 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
locale ( const locale & __base , const char * __s , category __cat ) ; 
# 164 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
locale ( const locale & __base , const locale & __add , category __cat ) ; 
# 177 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
template < typename _Facet > 
locale ( const locale & __other , _Facet * __f ) ; 


~ locale ( ) throw ( ) ; 
# 191 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
const locale & 
operator = ( const locale & __other ) throw ( ) ; 
# 206 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
template < typename _Facet > 
locale 
combine ( const locale & __other ) const ; 






string 
name ( ) const ; 
# 225 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
bool 
operator == ( const locale & __other ) const throw ( ) ; 







bool 
operator != ( const locale & __other ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,80,236);return ! ( this -> operator == ( __other ) ) ; } 
# 253 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
template < typename _Char , typename _Traits , typename _Alloc > 
bool 
operator ( ) ( const basic_string < _Char , _Traits , _Alloc >& __s1 , 
const basic_string < _Char , _Traits , _Alloc >& __s2 ) const ; 
# 269 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
static locale 
global ( const locale & __loc ) ; 




static const locale & 
classic ( ) ; 

private : 

_Impl * _M_impl ; 


static _Impl * _S_classic ; 


static _Impl * _S_global ; 





static const char * const * const _S_categories ; 
# 304 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
enum { _S_categories_size = 6 + 6 } ; 


static __gthread_once_t _S_once ; 


explicit 
locale ( _Impl * ) throw ( ) ; 

static void 
_S_initialize ( ) ; 

static void 
_S_initialize_once ( ) throw ( ) ; 

static category 
_S_normalize_category ( category ) ; 

void 
_M_coalesce ( const locale & __base , const locale & __add , category __cat ) ; 
} ; 
# 338 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
class locale :: facet 
{ 
private : 
friend class locale ; 
friend class locale :: _Impl ; 

mutable _Atomic_word _M_refcount ; 


static __c_locale _S_c_locale ; 


static const char _S_c_name [ 2 ] ; 


static __gthread_once_t _S_once ; 


static void 
_S_initialize_once ( ) ; 

protected : 
# 369 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
explicit 
facet ( size_t __refs = 0 ) throw ( ) : _M_refcount ( __refs ? 1 : 0 ) 
{ __CvT__record_line____(__CvT_miT,80,371);} 


virtual 
~ facet ( ) ; 

static void 
_S_create_c_locale ( __c_locale & __cloc , const char * __s , 
__c_locale __old = 0 ) ; 

static __c_locale 
_S_clone_c_locale ( __c_locale & __cloc ) throw ( ) ; 

static void 
_S_destroy_c_locale ( __c_locale & __cloc ) ; 

static __c_locale 
_S_lc_ctype_c_locale ( __c_locale __cloc , const char * __s ) ; 



static __c_locale 
_S_get_c_locale ( ) ; 

static const char * 
_S_get_c_name ( ) throw ( ) ; 

private : 
void 
_M_add_reference ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,80,401);__gnu_cxx :: __atomic_add_dispatch ( & _M_refcount , 1 ) ; } 

void 
_M_remove_reference ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,80,405);

; 
__CvT__record_line____(__CvT_miT,80,408);if ( __gnu_cxx :: __exchange_and_add_dispatch ( & _M_refcount , - 1 ) == 1 ) 
{{ 
; 
__CvT__record_line____(__CvT_miT,80,411);try 
{ __CvT__record_line____(__CvT_miT,80,412);delete this ; } 
catch ( ... ) 
{ } 
} 
}} 

facet ( const facet & ) ; 

facet & 
operator = ( const facet & ) ; 
} ; 
# 436 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
class locale :: id 
{ 
private : 
friend class locale ; 
friend class locale :: _Impl ; 

template < typename _Facet > 
friend const _Facet & 
use_facet ( const locale & ) ; 

template < typename _Facet > 
friend bool 
has_facet ( const locale & ) throw ( ) ; 




mutable size_t _M_index ; 


static _Atomic_word _S_refcount ; 

void 
operator = ( const id & ) ; 

id ( const id & ) ; 

public : 



id ( ) { __CvT__record_line____(__CvT_miT,80,467);} 

size_t 
_M_id ( ) const throw ( ) ; 
} ; 



class locale :: _Impl 
{ 
public : 

friend class locale ; 
friend class locale :: facet ; 

template < typename _Facet > 
friend bool 
has_facet ( const locale & ) throw ( ) ; 

template < typename _Facet > 
friend const _Facet & 
use_facet ( const locale & ) ; 

template < typename _Cache > 
friend struct __use_cache ; 

private : 

_Atomic_word _M_refcount ; 
const facet ** _M_facets ; 
size_t _M_facets_size ; 
const facet ** _M_caches ; 
char ** _M_names ; 
static const locale :: id * const _S_id_ctype [ ] ; 
static const locale :: id * const _S_id_numeric [ ] ; 
static const locale :: id * const _S_id_collate [ ] ; 
static const locale :: id * const _S_id_time [ ] ; 
static const locale :: id * const _S_id_monetary [ ] ; 
static const locale :: id * const _S_id_messages [ ] ; 
static const locale :: id * const * const _S_facet_categories [ ] ; 

void 
_M_add_reference ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,80,510);__gnu_cxx :: __atomic_add_dispatch ( & _M_refcount , 1 ) ; } 

void 
_M_remove_reference ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,80,514);

; 
__CvT__record_line____(__CvT_miT,80,517);if ( __gnu_cxx :: __exchange_and_add_dispatch ( & _M_refcount , - 1 ) == 1 ) 
{{ 
; 
__CvT__record_line____(__CvT_miT,80,520);try 
{ __CvT__record_line____(__CvT_miT,80,521);delete this ; } 
catch ( ... ) 
{ } 
} 
}} 

_Impl ( const _Impl & , size_t ) ; 
_Impl ( const char * , size_t ) ; 
_Impl ( size_t ) throw ( ) ; 

~ _Impl ( ) throw ( ) ; 

_Impl ( const _Impl & ) ; 

void 
operator = ( const _Impl & ) ; 

bool 
_M_check_same_name ( ) 
{ __CvT__record_line____(__CvT_miT,80,540);
__CvT__record_line____(__CvT_miT,80,541);bool __ret = true ; 
__CvT__record_line____(__CvT_miT,80,542);if ( _M_names [ 1 ] ) 

{__CvT__record_line____(__CvT_miT,80,544);for ( size_t __i = 0 ; __ret && __i < _S_categories_size - 1 ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,80,545);__ret = __builtin_strcmp ( _M_names [ __i ] , _M_names [ __i + 1 ] ) == 0 ; 
}}__CvT__record_line____(__CvT_miT,80,546);return __ret ; 
} 

void 
_M_replace_categories ( const _Impl * , category ) ; 

void 
_M_replace_category ( const _Impl * , const locale :: id * const * ) ; 

void 
_M_replace_facet ( const _Impl * , const locale :: id * ) ; 

void 
_M_install_facet ( const locale :: id * , const facet * ) ; 

template < typename _Facet > 
void 
_M_init_facet ( _Facet * __facet ) 
{ __CvT__record_line____(__CvT_miT,80,564);_M_install_facet ( & _Facet :: id , __facet ) ; } 

void 
_M_install_cache ( const facet * , size_t ) ; 
} ; 
# 583 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
template < typename _CharT > 
class collate : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 


protected : 


__c_locale _M_c_locale_collate ; 

public : 

static locale :: id id ; 
# 610 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
explicit 
collate ( size_t __refs = 0 ) 
: facet ( __refs ) , _M_c_locale_collate ( _S_get_c_locale ( ) ) 
{ __CvT__record_line____(__CvT_miT,80,613);} 
# 624 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
explicit 
collate ( __c_locale __cloc , size_t __refs = 0 ) 
: facet ( __refs ) , _M_c_locale_collate ( _S_clone_c_locale ( __cloc ) ) 
{ __CvT__record_line____(__CvT_miT,80,627);} 
# 641 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
int 
compare ( const _CharT * __lo1 , const _CharT * __hi1 , 
const _CharT * __lo2 , const _CharT * __hi2 ) const 
{ __CvT__record_line____(__CvT_miT,80,644);return this -> do_compare ( __lo1 , __hi1 , __lo2 , __hi2 ) ; } 
# 660 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
string_type 
transform ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,80,662);return this -> do_transform ( __lo , __hi ) ; } 
# 674 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
long 
hash ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,80,676);return this -> do_hash ( __lo , __hi ) ; } 


int 
_M_compare ( const _CharT * , const _CharT * ) const throw ( ) ; 

size_t 
_M_transform ( _CharT * , const _CharT * , size_t ) const throw ( ) ; 

protected : 

virtual 
~ collate ( ) 
{ __CvT__record_line____(__CvT_miT,80,689);_S_destroy_c_locale ( _M_c_locale_collate ) ; } 
# 703 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
virtual int 
do_compare ( const _CharT * __lo1 , const _CharT * __hi1 , 
const _CharT * __lo2 , const _CharT * __hi2 ) const ; 
# 717 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
virtual string_type 
do_transform ( const _CharT * __lo , const _CharT * __hi ) const ; 
# 730 "/usr/include/c++/4.8/bits/locale_classes.h" 3 
virtual long 
do_hash ( const _CharT * __lo , const _CharT * __hi ) const ; 
} ; 

template < typename _CharT > 
locale :: id collate < _CharT >:: id ; 


template <> 
int 
collate < char >:: _M_compare ( const char * , const char * ) const throw ( ) ; 

template <> 
size_t 
collate < char >:: _M_transform ( char * , const char * , size_t ) const throw ( ) ; 


template <> 
int 
collate < wchar_t >:: _M_compare ( const wchar_t * , const wchar_t * ) const throw ( ) ; 

template <> 
size_t 
collate < wchar_t >:: _M_transform ( wchar_t * , const wchar_t * , size_t ) const throw ( ) ; 



template < typename _CharT > 
class collate_byname : public collate < _CharT > 
{ 
public : 


typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 


explicit 
collate_byname ( const char * __s , size_t __refs = 0 ) 
: collate < _CharT > ( __refs ) 
{ __CvT__record_line____(__CvT_miT,80,770);
__CvT__record_line____(__CvT_miT,80,771);if ( __builtin_strcmp ( __s , "C" ) != 0 
&& __builtin_strcmp ( __s , "POSIX" ) != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,80,774);this -> _S_destroy_c_locale ( this -> _M_c_locale_collate ) ; 
__CvT__record_line____(__CvT_miT,80,775);this -> _S_create_c_locale ( this -> _M_c_locale_collate , __s ) ; 
} 
}} 

protected : 
virtual 
~ collate_byname ( ) { __CvT__record_line____(__CvT_miT,80,781);} 
} ; 


} 

# 1 "/usr/include/c++/4.8/bits/locale_classes.tcc" 1 3 
# 37 "/usr/include/c++/4.8/bits/locale_classes.tcc" 3 

# 38 "/usr/include/c++/4.8/bits/locale_classes.tcc" 3 

namespace std 
{ 


template < typename _Facet > 
locale :: 
locale ( const locale & __other , _Facet * __f ) 
{ __CvT__record_line____(__CvT_miT,81,46);
__CvT__record_line____(__CvT_miT,81,47);_M_impl = new _Impl ( * __other . _M_impl , 1 ) ; 

__CvT__record_line____(__CvT_miT,81,49);try 
{ __CvT__record_line____(__CvT_miT,81,50);_M_impl -> _M_install_facet ( & _Facet :: id , __f ) ; } 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,81,53);_M_impl -> _M_remove_reference ( ) ; 
__CvT__record_line____(__CvT_miT,81,54);throw ; 
} 
__CvT__record_line____(__CvT_miT,81,56);delete [ ] _M_impl -> _M_names [ 0 ] ; 
__CvT__record_line____(__CvT_miT,81,57);_M_impl -> _M_names [ 0 ] = 0 ; 
} 

template < typename _Facet > 
locale 
locale :: 
combine ( const locale & __other ) const 
{ __CvT__record_line____(__CvT_miT,81,64);
__CvT__record_line____(__CvT_miT,81,65);_Impl * __tmp = new _Impl ( * _M_impl , 1 ) ; 
__CvT__record_line____(__CvT_miT,81,66);try 
{ 
__CvT__record_line____(__CvT_miT,81,68);__tmp -> _M_replace_facet ( __other . _M_impl , & _Facet :: id ) ; 
} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,81,72);__tmp -> _M_remove_reference ( ) ; 
__CvT__record_line____(__CvT_miT,81,73);throw ; 
} 
__CvT__record_line____(__CvT_miT,81,75);return locale ( __tmp ) ; 
} 

template < typename _CharT , typename _Traits , typename _Alloc > 
bool 
locale :: 
operator ( ) ( const basic_string < _CharT , _Traits , _Alloc >& __s1 , 
const basic_string < _CharT , _Traits , _Alloc >& __s2 ) const 
{ __CvT__record_line____(__CvT_miT,81,83);
typedef std :: collate < _CharT > __collate_type ; 
__CvT__record_line____(__CvT_miT,81,85);const __collate_type & __collate = use_facet < __collate_type > ( * this ) ; 
__CvT__record_line____(__CvT_miT,81,86);return ( __collate . compare ( __s1 . data ( ) , __s1 . data ( ) + __s1 . length ( ) , 
__s2 . data ( ) , __s2 . data ( ) + __s2 . length ( ) ) < 0 ) ; 
} 
# 102 "/usr/include/c++/4.8/bits/locale_classes.tcc" 3 
template < typename _Facet > 
bool 
has_facet ( const locale & __loc ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,81,105);
__CvT__record_line____(__CvT_miT,81,106);const size_t __i = _Facet :: id . _M_id ( ) ; 
__CvT__record_line____(__CvT_miT,81,107);const locale :: facet ** __facets = __loc . _M_impl -> _M_facets ; 
__CvT__record_line____(__CvT_miT,81,108);return ( __i < __loc . _M_impl -> _M_facets_size 

&& dynamic_cast < const _Facet *> ( __facets [ __i ] ) ) ; 



} 
# 130 "/usr/include/c++/4.8/bits/locale_classes.tcc" 3 
template < typename _Facet > 
const _Facet & 
use_facet ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,81,133);
__CvT__record_line____(__CvT_miT,81,134);const size_t __i = _Facet :: id . _M_id ( ) ; 
__CvT__record_line____(__CvT_miT,81,135);const locale :: facet ** __facets = __loc . _M_impl -> _M_facets ; 
__CvT__record_line____(__CvT_miT,81,136);if ( __i >= __loc . _M_impl -> _M_facets_size || ! __facets [ __i ] ) 
{__CvT__record_line____(__CvT_miT,81,137);__throw_bad_cast ( ) ; 

}__CvT__record_line____(__CvT_miT,81,139);return dynamic_cast < const _Facet &> ( * __facets [ __i ] ) ; 



} 



template < typename _CharT > 
int 
collate < _CharT >:: _M_compare ( const _CharT * , const _CharT * ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,81,150);return 0 ; } 


template < typename _CharT > 
size_t 
collate < _CharT >:: _M_transform ( _CharT * , const _CharT * , size_t ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,81,156);return 0 ; } 

template < typename _CharT > 
int 
collate < _CharT >:: 
do_compare ( const _CharT * __lo1 , const _CharT * __hi1 , 
const _CharT * __lo2 , const _CharT * __hi2 ) const 
{ __CvT__record_line____(__CvT_miT,81,163);


__CvT__record_line____(__CvT_miT,81,166);const string_type __one ( __lo1 , __hi1 ) ; 
__CvT__record_line____(__CvT_miT,81,167);const string_type __two ( __lo2 , __hi2 ) ; 

__CvT__record_line____(__CvT_miT,81,169);const _CharT * __p = __one . c_str ( ) ; 
__CvT__record_line____(__CvT_miT,81,170);const _CharT * __pend = __one . data ( ) + __one . length ( ) ; 
__CvT__record_line____(__CvT_miT,81,171);const _CharT * __q = __two . c_str ( ) ; 
__CvT__record_line____(__CvT_miT,81,172);const _CharT * __qend = __two . data ( ) + __two . length ( ) ; 




__CvT__record_line____(__CvT_miT,81,177);for ( ; ; ) 
{{ 
__CvT__record_line____(__CvT_miT,81,179);const int __res = _M_compare ( __p , __q ) ; 
__CvT__record_line____(__CvT_miT,81,180);if ( __res ) 
{__CvT__record_line____(__CvT_miT,81,181);return __res ; 

}__CvT__record_line____(__CvT_miT,81,183);__p += char_traits < _CharT >:: length ( __p ) ; 
__CvT__record_line____(__CvT_miT,81,184);__q += char_traits < _CharT >:: length ( __q ) ; 
__CvT__record_line____(__CvT_miT,81,185);if ( __p == __pend && __q == __qend ) 
{__CvT__record_line____(__CvT_miT,81,186);return 0 ; 
}else {__CvT__record_line____(__CvT_miT,81,187);if ( __p == __pend ) 
{__CvT__record_line____(__CvT_miT,81,188);return - 1 ; 
}else {__CvT__record_line____(__CvT_miT,81,189);if ( __q == __qend ) 
{__CvT__record_line____(__CvT_miT,81,190);return 1 ; 

}}}__CvT__record_line____(__CvT_miT,81,192);__p ++ ; 
__CvT__record_line____(__CvT_miT,81,193);__q ++ ; 
} 
}} 

template < typename _CharT > 
typename collate < _CharT >:: string_type 
collate < _CharT >:: 
do_transform ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,81,201);
__CvT__record_line____(__CvT_miT,81,202);string_type __ret ; 


__CvT__record_line____(__CvT_miT,81,205);const string_type __str ( __lo , __hi ) ; 

__CvT__record_line____(__CvT_miT,81,207);const _CharT * __p = __str . c_str ( ) ; 
__CvT__record_line____(__CvT_miT,81,208);const _CharT * __pend = __str . data ( ) + __str . length ( ) ; 

__CvT__record_line____(__CvT_miT,81,210);size_t __len = ( __hi - __lo ) * 2 ; 

__CvT__record_line____(__CvT_miT,81,212);_CharT * __c = new _CharT [ __len ] ; 

__CvT__record_line____(__CvT_miT,81,214);try 
{ 



__CvT__record_line____(__CvT_miT,81,219);for ( ; ; ) 
{{ 

__CvT__record_line____(__CvT_miT,81,222);size_t __res = _M_transform ( __c , __p , __len ) ; 


__CvT__record_line____(__CvT_miT,81,225);if ( __res >= __len ) 
{{ 
__CvT__record_line____(__CvT_miT,81,227);__len = __res + 1 ; 
__CvT__record_line____(__CvT_miT,81,228);delete [ ] __c , __c = 0 ; 
__CvT__record_line____(__CvT_miT,81,229);__c = new _CharT [ __len ] ; 
__CvT__record_line____(__CvT_miT,81,230);__res = _M_transform ( __c , __p , __len ) ; 
} 

}__CvT__record_line____(__CvT_miT,81,233);__ret . append ( __c , __res ) ; 
__CvT__record_line____(__CvT_miT,81,234);__p += char_traits < _CharT >:: length ( __p ) ; 
__CvT__record_line____(__CvT_miT,81,235);if ( __p == __pend ) 
{__CvT__record_line____(__CvT_miT,81,236);break ; 

}__CvT__record_line____(__CvT_miT,81,238);__p ++ ; 
__CvT__record_line____(__CvT_miT,81,239);__ret . push_back ( _CharT ( ) ) ; 
} 
}} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,81,244);delete [ ] __c ; 
__CvT__record_line____(__CvT_miT,81,245);throw ; 
} 

__CvT__record_line____(__CvT_miT,81,248);delete [ ] __c ; 

__CvT__record_line____(__CvT_miT,81,250);return __ret ; 
} 

template < typename _CharT > 
long 
collate < _CharT >:: 
do_hash ( const _CharT * __lo , const _CharT * __hi ) const 
{ __CvT__record_line____(__CvT_miT,81,257);
__CvT__record_line____(__CvT_miT,81,258);unsigned long __val = 0 ; 
__CvT__record_line____(__CvT_miT,81,259);for ( ; __lo < __hi ; ++ __lo ) 
{__CvT__record_line____(__CvT_miT,81,260);__val = 
* __lo + ( ( __val << 7 ) 
| ( __val >> ( __gnu_cxx :: __numeric_traits < unsigned long >:: 
__digits - 7 ) ) ) ; 
}__CvT__record_line____(__CvT_miT,81,264);return static_cast < long > ( __val ) ; 
} 




extern template class collate < char > ; 
extern template class collate_byname < char > ; 

extern template 
const collate < char >& 
use_facet < collate < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < collate < char > > ( const locale & ) ; 


extern template class collate < wchar_t > ; 
extern template class collate_byname < wchar_t > ; 

extern template 
const collate < wchar_t >& 
use_facet < collate < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < collate < wchar_t > > ( const locale & ) ; 




} 
# 788 "/usr/include/c++/4.8/bits/locale_classes.h" 2 3 
# 42 "/usr/include/c++/4.8/bits/ios_base.h" 2 3 

namespace std 
{ 






enum _Ios_Fmtflags 
{ 
_S_boolalpha = 1L << 0 , 
_S_dec = 1L << 1 , 
_S_fixed = 1L << 2 , 
_S_hex = 1L << 3 , 
_S_internal = 1L << 4 , 
_S_left = 1L << 5 , 
_S_oct = 1L << 6 , 
_S_right = 1L << 7 , 
_S_scientific = 1L << 8 , 
_S_showbase = 1L << 9 , 
_S_showpoint = 1L << 10 , 
_S_showpos = 1L << 11 , 
_S_skipws = 1L << 12 , 
_S_unitbuf = 1L << 13 , 
_S_uppercase = 1L << 14 , 
_S_adjustfield = _S_left | _S_right | _S_internal , 
_S_basefield = _S_dec | _S_oct | _S_hex , 
_S_floatfield = _S_scientific | _S_fixed , 
_S_ios_fmtflags_end = 1L << 16 , 
_S_ios_fmtflags_max = 2147483647 , 
_S_ios_fmtflags_min = ~ 2147483647 
} ; 

inline _Ios_Fmtflags 
operator & ( _Ios_Fmtflags __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,79,78);return _Ios_Fmtflags ( static_cast < int > ( __a ) & static_cast < int > ( __b ) ) ; } 

inline _Ios_Fmtflags 
operator | ( _Ios_Fmtflags __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,79,82);return _Ios_Fmtflags ( static_cast < int > ( __a ) | static_cast < int > ( __b ) ) ; } 

inline _Ios_Fmtflags 
operator ^ ( _Ios_Fmtflags __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,79,86);return _Ios_Fmtflags ( static_cast < int > ( __a ) ^ static_cast < int > ( __b ) ) ; } 

inline _Ios_Fmtflags 
operator ~ ( _Ios_Fmtflags __a ) 
{ __CvT__record_line____(__CvT_miT,79,90);return _Ios_Fmtflags ( ~ static_cast < int > ( __a ) ) ; } 

inline const _Ios_Fmtflags & 
operator |= ( _Ios_Fmtflags & __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,79,94);return __a = __a | __b ; } 

inline const _Ios_Fmtflags & 
operator &= ( _Ios_Fmtflags & __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,79,98);return __a = __a & __b ; } 

inline const _Ios_Fmtflags & 
operator ^= ( _Ios_Fmtflags & __a , _Ios_Fmtflags __b ) 
{ __CvT__record_line____(__CvT_miT,79,102);return __a = __a ^ __b ; } 


enum _Ios_Openmode 
{ 
_S_app = 1L << 0 , 
_S_ate = 1L << 1 , 
_S_bin = 1L << 2 , 
_S_in = 1L << 3 , 
_S_out = 1L << 4 , 
_S_trunc = 1L << 5 , 
_S_ios_openmode_end = 1L << 16 , 
_S_ios_openmode_max = 2147483647 , 
_S_ios_openmode_min = ~ 2147483647 
} ; 

inline _Ios_Openmode 
operator & ( _Ios_Openmode __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,79,120);return _Ios_Openmode ( static_cast < int > ( __a ) & static_cast < int > ( __b ) ) ; } 

inline _Ios_Openmode 
operator | ( _Ios_Openmode __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,79,124);return _Ios_Openmode ( static_cast < int > ( __a ) | static_cast < int > ( __b ) ) ; } 

inline _Ios_Openmode 
operator ^ ( _Ios_Openmode __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,79,128);return _Ios_Openmode ( static_cast < int > ( __a ) ^ static_cast < int > ( __b ) ) ; } 

inline _Ios_Openmode 
operator ~ ( _Ios_Openmode __a ) 
{ __CvT__record_line____(__CvT_miT,79,132);return _Ios_Openmode ( ~ static_cast < int > ( __a ) ) ; } 

inline const _Ios_Openmode & 
operator |= ( _Ios_Openmode & __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,79,136);return __a = __a | __b ; } 

inline const _Ios_Openmode & 
operator &= ( _Ios_Openmode & __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,79,140);return __a = __a & __b ; } 

inline const _Ios_Openmode & 
operator ^= ( _Ios_Openmode & __a , _Ios_Openmode __b ) 
{ __CvT__record_line____(__CvT_miT,79,144);return __a = __a ^ __b ; } 


enum _Ios_Iostate 
{ 
_S_goodbit = 0 , 
_S_badbit = 1L << 0 , 
_S_eofbit = 1L << 1 , 
_S_failbit = 1L << 2 , 
_S_ios_iostate_end = 1L << 16 , 
_S_ios_iostate_max = 2147483647 , 
_S_ios_iostate_min = ~ 2147483647 
} ; 

inline _Ios_Iostate 
operator & ( _Ios_Iostate __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,79,160);return _Ios_Iostate ( static_cast < int > ( __a ) & static_cast < int > ( __b ) ) ; } 

inline _Ios_Iostate 
operator | ( _Ios_Iostate __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,79,164);return _Ios_Iostate ( static_cast < int > ( __a ) | static_cast < int > ( __b ) ) ; } 

inline _Ios_Iostate 
operator ^ ( _Ios_Iostate __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,79,168);return _Ios_Iostate ( static_cast < int > ( __a ) ^ static_cast < int > ( __b ) ) ; } 

inline _Ios_Iostate 
operator ~ ( _Ios_Iostate __a ) 
{ __CvT__record_line____(__CvT_miT,79,172);return _Ios_Iostate ( ~ static_cast < int > ( __a ) ) ; } 

inline const _Ios_Iostate & 
operator |= ( _Ios_Iostate & __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,79,176);return __a = __a | __b ; } 

inline const _Ios_Iostate & 
operator &= ( _Ios_Iostate & __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,79,180);return __a = __a & __b ; } 

inline const _Ios_Iostate & 
operator ^= ( _Ios_Iostate & __a , _Ios_Iostate __b ) 
{ __CvT__record_line____(__CvT_miT,79,184);return __a = __a ^ __b ; } 


enum _Ios_Seekdir 
{ 
_S_beg = 0 , 
_S_cur = 1 , 
_S_end = 2 , 
_S_ios_seekdir_end = 1L << 16 
} ; 
# 205 "/usr/include/c++/4.8/bits/ios_base.h" 3 
class ios_base 
{ 
public : 







class failure : public exception 
{ 
public : 


explicit 
failure ( const string & __str ) throw ( ) ; 



virtual 
~ failure ( ) throw ( ) ; 

virtual const char * 
what ( ) const throw ( ) ; 

private : 
string _M_msg ; 
} ; 
# 261 "/usr/include/c++/4.8/bits/ios_base.h" 3 
typedef _Ios_Fmtflags fmtflags ; 


static const fmtflags boolalpha = _S_boolalpha ; 


static const fmtflags dec = _S_dec ; 


static const fmtflags fixed = _S_fixed ; 


static const fmtflags hex = _S_hex ; 




static const fmtflags internal = _S_internal ; 



static const fmtflags left = _S_left ; 


static const fmtflags oct = _S_oct ; 



static const fmtflags right = _S_right ; 


static const fmtflags scientific = _S_scientific ; 



static const fmtflags showbase = _S_showbase ; 



static const fmtflags showpoint = _S_showpoint ; 


static const fmtflags showpos = _S_showpos ; 


static const fmtflags skipws = _S_skipws ; 


static const fmtflags unitbuf = _S_unitbuf ; 



static const fmtflags uppercase = _S_uppercase ; 


static const fmtflags adjustfield = _S_adjustfield ; 


static const fmtflags basefield = _S_basefield ; 


static const fmtflags floatfield = _S_floatfield ; 
# 336 "/usr/include/c++/4.8/bits/ios_base.h" 3 
typedef _Ios_Iostate iostate ; 



static const iostate badbit = _S_badbit ; 


static const iostate eofbit = _S_eofbit ; 




static const iostate failbit = _S_failbit ; 


static const iostate goodbit = _S_goodbit ; 
# 367 "/usr/include/c++/4.8/bits/ios_base.h" 3 
typedef _Ios_Openmode openmode ; 


static const openmode app = _S_app ; 


static const openmode ate = _S_ate ; 




static const openmode binary = _S_bin ; 


static const openmode in = _S_in ; 


static const openmode out = _S_out ; 


static const openmode trunc = _S_trunc ; 
# 399 "/usr/include/c++/4.8/bits/ios_base.h" 3 
typedef _Ios_Seekdir seekdir ; 


static const seekdir beg = _S_beg ; 


static const seekdir cur = _S_cur ; 


static const seekdir end = _S_end ; 


typedef int io_state ; 
typedef int open_mode ; 
typedef int seek_dir ; 

typedef std :: streampos streampos ; 
typedef std :: streamoff streamoff ; 
# 425 "/usr/include/c++/4.8/bits/ios_base.h" 3 
enum event 
{ 
erase_event , 
imbue_event , 
copyfmt_event 
} ; 
# 442 "/usr/include/c++/4.8/bits/ios_base.h" 3 
typedef void ( * event_callback ) ( event __e , ios_base & __b , int __i ) ; 
# 454 "/usr/include/c++/4.8/bits/ios_base.h" 3 
void 
register_callback ( event_callback __fn , int __index ) ; 

protected : 
streamsize _M_precision ; 
streamsize _M_width ; 
fmtflags _M_flags ; 
iostate _M_exception ; 
iostate _M_streambuf_state ; 



struct _Callback_list 
{ 

_Callback_list * _M_next ; 
ios_base :: event_callback _M_fn ; 
int _M_index ; 
_Atomic_word _M_refcount ; 

_Callback_list ( ios_base :: event_callback __fn , int __index , 
_Callback_list * __cb ) 
: _M_next ( __cb ) , _M_fn ( __fn ) , _M_index ( __index ) , _M_refcount ( 0 ) { __CvT__record_line____(__CvT_miT,79,476);} 

void 
_M_add_reference ( ) { __CvT__record_line____(__CvT_miT,79,479);__gnu_cxx :: __atomic_add_dispatch ( & _M_refcount , 1 ) ; } 


int 
_M_remove_reference ( ) 
{ __CvT__record_line____(__CvT_miT,79,484);

; 
__CvT__record_line____(__CvT_miT,79,487);int __res = __gnu_cxx :: __exchange_and_add_dispatch ( & _M_refcount , - 1 ) ; 
__CvT__record_line____(__CvT_miT,79,488);if ( __res == 0 ) 
{{ 
; 
} 
}__CvT__record_line____(__CvT_miT,79,492);return __res ; 
} 
} ; 

_Callback_list * _M_callbacks ; 

void 
_M_call_callbacks ( event __ev ) throw ( ) ; 

void 
_M_dispose_callbacks ( void ) throw ( ) ; 


struct _Words 
{ 
void * _M_pword ; 
long _M_iword ; 
_Words ( ) : _M_pword ( 0 ) , _M_iword ( 0 ) { __CvT__record_line____(__CvT_miT,79,509);} 
} ; 


_Words _M_word_zero ; 



enum { _S_local_word_size = 8 } ; 
_Words _M_local_word [ _S_local_word_size ] ; 


int _M_word_size ; 
_Words * _M_word ; 

_Words & 
_M_grow_words ( int __index , bool __iword ) ; 


locale _M_ios_locale ; 

void 
_M_init ( ) throw ( ) ; 

public : 





class Init 
{ 
friend class ios_base ; 
public : 
Init ( ) ; 
~ Init ( ) ; 

private : 
static _Atomic_word _S_refcount ; 
static bool _S_synced_with_stdio ; 
} ; 






fmtflags 
flags ( ) const 
{ __CvT__record_line____(__CvT_miT,79,558);return _M_flags ; } 
# 567 "/usr/include/c++/4.8/bits/ios_base.h" 3 
fmtflags 
flags ( fmtflags __fmtfl ) 
{ __CvT__record_line____(__CvT_miT,79,569);
__CvT__record_line____(__CvT_miT,79,570);fmtflags __old = _M_flags ; 
__CvT__record_line____(__CvT_miT,79,571);_M_flags = __fmtfl ; 
__CvT__record_line____(__CvT_miT,79,572);return __old ; 
} 
# 583 "/usr/include/c++/4.8/bits/ios_base.h" 3 
fmtflags 
setf ( fmtflags __fmtfl ) 
{ __CvT__record_line____(__CvT_miT,79,585);
__CvT__record_line____(__CvT_miT,79,586);fmtflags __old = _M_flags ; 
__CvT__record_line____(__CvT_miT,79,587);_M_flags |= __fmtfl ; 
__CvT__record_line____(__CvT_miT,79,588);return __old ; 
} 
# 600 "/usr/include/c++/4.8/bits/ios_base.h" 3 
fmtflags 
setf ( fmtflags __fmtfl , fmtflags __mask ) 
{ __CvT__record_line____(__CvT_miT,79,602);
__CvT__record_line____(__CvT_miT,79,603);fmtflags __old = _M_flags ; 
__CvT__record_line____(__CvT_miT,79,604);_M_flags &= ~ __mask ; 
__CvT__record_line____(__CvT_miT,79,605);_M_flags |= ( __fmtfl & __mask ) ; 
__CvT__record_line____(__CvT_miT,79,606);return __old ; 
} 







void 
unsetf ( fmtflags __mask ) 
{ __CvT__record_line____(__CvT_miT,79,617);_M_flags &= ~ __mask ; } 
# 626 "/usr/include/c++/4.8/bits/ios_base.h" 3 
streamsize 
precision ( ) const 
{ __CvT__record_line____(__CvT_miT,79,628);return _M_precision ; } 






streamsize 
precision ( streamsize __prec ) 
{ __CvT__record_line____(__CvT_miT,79,637);
__CvT__record_line____(__CvT_miT,79,638);streamsize __old = _M_precision ; 
__CvT__record_line____(__CvT_miT,79,639);_M_precision = __prec ; 
__CvT__record_line____(__CvT_miT,79,640);return __old ; 
} 







streamsize 
width ( ) const 
{ __CvT__record_line____(__CvT_miT,79,651);return _M_width ; } 






streamsize 
width ( streamsize __wide ) 
{ __CvT__record_line____(__CvT_miT,79,660);
__CvT__record_line____(__CvT_miT,79,661);streamsize __old = _M_width ; 
__CvT__record_line____(__CvT_miT,79,662);_M_width = __wide ; 
__CvT__record_line____(__CvT_miT,79,663);return __old ; 
} 
# 677 "/usr/include/c++/4.8/bits/ios_base.h" 3 
static bool 
sync_with_stdio ( bool __sync = true ) ; 
# 689 "/usr/include/c++/4.8/bits/ios_base.h" 3 
locale 
imbue ( const locale & __loc ) throw ( ) ; 
# 700 "/usr/include/c++/4.8/bits/ios_base.h" 3 
locale 
getloc ( ) const 
{ __CvT__record_line____(__CvT_miT,79,702);return _M_ios_locale ; } 
# 711 "/usr/include/c++/4.8/bits/ios_base.h" 3 
const locale & 
_M_getloc ( ) const 
{ __CvT__record_line____(__CvT_miT,79,713);return _M_ios_locale ; } 
# 730 "/usr/include/c++/4.8/bits/ios_base.h" 3 
static int 
xalloc ( ) throw ( ) ; 
# 746 "/usr/include/c++/4.8/bits/ios_base.h" 3 
long & 
iword ( int __ix ) 
{ __CvT__record_line____(__CvT_miT,79,748);
__CvT__record_line____(__CvT_miT,79,749);_Words & __word = ( __ix < _M_word_size ) 
? _M_word [ __ix ] : _M_grow_words ( __ix , true ) ; 
__CvT__record_line____(__CvT_miT,79,751);return __word . _M_iword ; 
} 
# 767 "/usr/include/c++/4.8/bits/ios_base.h" 3 
void *& 
pword ( int __ix ) 
{ __CvT__record_line____(__CvT_miT,79,769);
__CvT__record_line____(__CvT_miT,79,770);_Words & __word = ( __ix < _M_word_size ) 
? _M_word [ __ix ] : _M_grow_words ( __ix , false ) ; 
__CvT__record_line____(__CvT_miT,79,772);return __word . _M_pword ; 
} 
# 784 "/usr/include/c++/4.8/bits/ios_base.h" 3 
virtual ~ ios_base ( ) ; 

protected : 
ios_base ( ) throw ( ) ; 



private : 
ios_base ( const ios_base & ) ; 

ios_base & 
operator = ( const ios_base & ) ; 
} ; 



inline ios_base & 
boolalpha ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,802);
__CvT__record_line____(__CvT_miT,79,803);__base . setf ( ios_base :: boolalpha ) ; 
__CvT__record_line____(__CvT_miT,79,804);return __base ; 
} 


inline ios_base & 
noboolalpha ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,810);
__CvT__record_line____(__CvT_miT,79,811);__base . unsetf ( ios_base :: boolalpha ) ; 
__CvT__record_line____(__CvT_miT,79,812);return __base ; 
} 


inline ios_base & 
showbase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,818);
__CvT__record_line____(__CvT_miT,79,819);__base . setf ( ios_base :: showbase ) ; 
__CvT__record_line____(__CvT_miT,79,820);return __base ; 
} 


inline ios_base & 
noshowbase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,826);
__CvT__record_line____(__CvT_miT,79,827);__base . unsetf ( ios_base :: showbase ) ; 
__CvT__record_line____(__CvT_miT,79,828);return __base ; 
} 


inline ios_base & 
showpoint ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,834);
__CvT__record_line____(__CvT_miT,79,835);__base . setf ( ios_base :: showpoint ) ; 
__CvT__record_line____(__CvT_miT,79,836);return __base ; 
} 


inline ios_base & 
noshowpoint ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,842);
__CvT__record_line____(__CvT_miT,79,843);__base . unsetf ( ios_base :: showpoint ) ; 
__CvT__record_line____(__CvT_miT,79,844);return __base ; 
} 


inline ios_base & 
showpos ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,850);
__CvT__record_line____(__CvT_miT,79,851);__base . setf ( ios_base :: showpos ) ; 
__CvT__record_line____(__CvT_miT,79,852);return __base ; 
} 


inline ios_base & 
noshowpos ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,858);
__CvT__record_line____(__CvT_miT,79,859);__base . unsetf ( ios_base :: showpos ) ; 
__CvT__record_line____(__CvT_miT,79,860);return __base ; 
} 


inline ios_base & 
skipws ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,866);
__CvT__record_line____(__CvT_miT,79,867);__base . setf ( ios_base :: skipws ) ; 
__CvT__record_line____(__CvT_miT,79,868);return __base ; 
} 


inline ios_base & 
noskipws ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,874);
__CvT__record_line____(__CvT_miT,79,875);__base . unsetf ( ios_base :: skipws ) ; 
__CvT__record_line____(__CvT_miT,79,876);return __base ; 
} 


inline ios_base & 
uppercase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,882);
__CvT__record_line____(__CvT_miT,79,883);__base . setf ( ios_base :: uppercase ) ; 
__CvT__record_line____(__CvT_miT,79,884);return __base ; 
} 


inline ios_base & 
nouppercase ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,890);
__CvT__record_line____(__CvT_miT,79,891);__base . unsetf ( ios_base :: uppercase ) ; 
__CvT__record_line____(__CvT_miT,79,892);return __base ; 
} 


inline ios_base & 
unitbuf ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,898);
__CvT__record_line____(__CvT_miT,79,899);__base . setf ( ios_base :: unitbuf ) ; 
__CvT__record_line____(__CvT_miT,79,900);return __base ; 
} 


inline ios_base & 
nounitbuf ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,906);
__CvT__record_line____(__CvT_miT,79,907);__base . unsetf ( ios_base :: unitbuf ) ; 
__CvT__record_line____(__CvT_miT,79,908);return __base ; 
} 



inline ios_base & 
internal ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,915);
__CvT__record_line____(__CvT_miT,79,916);__base . setf ( ios_base :: internal , ios_base :: adjustfield ) ; 
__CvT__record_line____(__CvT_miT,79,917);return __base ; 
} 


inline ios_base & 
left ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,923);
__CvT__record_line____(__CvT_miT,79,924);__base . setf ( ios_base :: left , ios_base :: adjustfield ) ; 
__CvT__record_line____(__CvT_miT,79,925);return __base ; 
} 


inline ios_base & 
right ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,931);
__CvT__record_line____(__CvT_miT,79,932);__base . setf ( ios_base :: right , ios_base :: adjustfield ) ; 
__CvT__record_line____(__CvT_miT,79,933);return __base ; 
} 



inline ios_base & 
dec ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,940);
__CvT__record_line____(__CvT_miT,79,941);__base . setf ( ios_base :: dec , ios_base :: basefield ) ; 
__CvT__record_line____(__CvT_miT,79,942);return __base ; 
} 


inline ios_base & 
hex ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,948);
__CvT__record_line____(__CvT_miT,79,949);__base . setf ( ios_base :: hex , ios_base :: basefield ) ; 
__CvT__record_line____(__CvT_miT,79,950);return __base ; 
} 


inline ios_base & 
oct ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,956);
__CvT__record_line____(__CvT_miT,79,957);__base . setf ( ios_base :: oct , ios_base :: basefield ) ; 
__CvT__record_line____(__CvT_miT,79,958);return __base ; 
} 



inline ios_base & 
fixed ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,965);
__CvT__record_line____(__CvT_miT,79,966);__base . setf ( ios_base :: fixed , ios_base :: floatfield ) ; 
__CvT__record_line____(__CvT_miT,79,967);return __base ; 
} 


inline ios_base & 
scientific ( ios_base & __base ) 
{ __CvT__record_line____(__CvT_miT,79,973);
__CvT__record_line____(__CvT_miT,79,974);__base . setf ( ios_base :: scientific , ios_base :: floatfield ) ; 
__CvT__record_line____(__CvT_miT,79,975);return __base ; 
} 


} 
# 43 "/usr/include/c++/4.8/ios" 2 3 
# 1 "/usr/include/c++/4.8/streambuf" 1 3 
# 36 "/usr/include/c++/4.8/streambuf" 3 

# 37 "/usr/include/c++/4.8/streambuf" 3 
# 45 "/usr/include/c++/4.8/streambuf" 3 
namespace std 
{ 


template < typename _CharT , typename _Traits > 
streamsize 
__copy_streambufs_eof ( basic_streambuf < _CharT , _Traits >* , 
basic_streambuf < _CharT , _Traits >* , bool & ) ; 
# 119 "/usr/include/c++/4.8/streambuf" 3 
template < typename _CharT , typename _Traits > 
class basic_streambuf 
{ 
public : 






typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 




typedef basic_streambuf < char_type , traits_type > __streambuf_type ; 


friend class basic_ios < char_type , traits_type > ; 
friend class basic_istream < char_type , traits_type > ; 
friend class basic_ostream < char_type , traits_type > ; 
friend class istreambuf_iterator < char_type , traits_type > ; 
friend class ostreambuf_iterator < char_type , traits_type > ; 

friend streamsize 
__copy_streambufs_eof <> ( basic_streambuf * , basic_streambuf * , bool & ) ; 

template < bool _IsMove , typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
_CharT2 *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT2 > , 
istreambuf_iterator < _CharT2 > , _CharT2 * ) ; 

template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
istreambuf_iterator < _CharT2 > >:: __type 
find ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
const _CharT2 & ) ; 

template < typename _CharT2 , typename _Traits2 > 
friend basic_istream < _CharT2 , _Traits2 >& 
operator >> ( basic_istream < _CharT2 , _Traits2 >& , _CharT2 * ) ; 

template < typename _CharT2 , typename _Traits2 , typename _Alloc > 
friend basic_istream < _CharT2 , _Traits2 >& 
operator >> ( basic_istream < _CharT2 , _Traits2 >& , 
basic_string < _CharT2 , _Traits2 , _Alloc >& ) ; 

template < typename _CharT2 , typename _Traits2 , typename _Alloc > 
friend basic_istream < _CharT2 , _Traits2 >& 
getline ( basic_istream < _CharT2 , _Traits2 >& , 
basic_string < _CharT2 , _Traits2 , _Alloc >& , _CharT2 ) ; 

protected : 







char_type * _M_in_beg ; 
char_type * _M_in_cur ; 
char_type * _M_in_end ; 
char_type * _M_out_beg ; 
char_type * _M_out_cur ; 
char_type * _M_out_end ; 


locale _M_buf_locale ; 

public : 

virtual 
~ basic_streambuf ( ) 
{ __CvT__record_line____(__CvT_miT,82,198);} 
# 208 "/usr/include/c++/4.8/streambuf" 3 
locale 
pubimbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,82,210);
__CvT__record_line____(__CvT_miT,82,211);locale __tmp ( this -> getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,82,212);this -> imbue ( __loc ) ; 
__CvT__record_line____(__CvT_miT,82,213);_M_buf_locale = __loc ; 
__CvT__record_line____(__CvT_miT,82,214);return __tmp ; 
} 
# 225 "/usr/include/c++/4.8/streambuf" 3 
locale 
getloc ( ) const 
{ __CvT__record_line____(__CvT_miT,82,227);return _M_buf_locale ; } 
# 238 "/usr/include/c++/4.8/streambuf" 3 
basic_streambuf * 
pubsetbuf ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,82,240);return this -> setbuf ( __s , __n ) ; } 
# 250 "/usr/include/c++/4.8/streambuf" 3 
pos_type 
pubseekoff ( off_type __off , ios_base :: seekdir __way , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,82,253);return this -> seekoff ( __off , __way , __mode ) ; } 
# 262 "/usr/include/c++/4.8/streambuf" 3 
pos_type 
pubseekpos ( pos_type __sp , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,82,265);return this -> seekpos ( __sp , __mode ) ; } 




int 
pubsync ( ) { __CvT__record_line____(__CvT_miT,82,271);return this -> sync ( ) ; } 
# 283 "/usr/include/c++/4.8/streambuf" 3 
streamsize 
in_avail ( ) 
{ __CvT__record_line____(__CvT_miT,82,285);
__CvT__record_line____(__CvT_miT,82,286);const streamsize __ret = this -> egptr ( ) - this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,82,287);return __ret ? __ret : this -> showmanyc ( ) ; 
} 
# 297 "/usr/include/c++/4.8/streambuf" 3 
int_type 
snextc ( ) 
{ __CvT__record_line____(__CvT_miT,82,299);
__CvT__record_line____(__CvT_miT,82,300);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,82,301);if ( __builtin_expect ( ! traits_type :: eq_int_type ( this -> sbumpc ( ) , 
__ret ) , true ) ) 
{__CvT__record_line____(__CvT_miT,82,303);__ret = this -> sgetc ( ) ; 
}__CvT__record_line____(__CvT_miT,82,304);return __ret ; 
} 
# 315 "/usr/include/c++/4.8/streambuf" 3 
int_type 
sbumpc ( ) 
{ __CvT__record_line____(__CvT_miT,82,317);
__CvT__record_line____(__CvT_miT,82,318);int_type __ret ; 
__CvT__record_line____(__CvT_miT,82,319);if ( __builtin_expect ( this -> gptr ( ) < this -> egptr ( ) , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,82,321);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
__CvT__record_line____(__CvT_miT,82,322);this -> gbump ( 1 ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,82,325);__ret = this -> uflow ( ) ; 
}__CvT__record_line____(__CvT_miT,82,326);return __ret ; 
} 
# 337 "/usr/include/c++/4.8/streambuf" 3 
int_type 
sgetc ( ) 
{ __CvT__record_line____(__CvT_miT,82,339);
__CvT__record_line____(__CvT_miT,82,340);int_type __ret ; 
__CvT__record_line____(__CvT_miT,82,341);if ( __builtin_expect ( this -> gptr ( ) < this -> egptr ( ) , true ) ) 
{__CvT__record_line____(__CvT_miT,82,342);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,82,344);__ret = this -> underflow ( ) ; 
}__CvT__record_line____(__CvT_miT,82,345);return __ret ; 
} 
# 356 "/usr/include/c++/4.8/streambuf" 3 
streamsize 
sgetn ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,82,358);return this -> xsgetn ( __s , __n ) ; } 
# 371 "/usr/include/c++/4.8/streambuf" 3 
int_type 
sputbackc ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,82,373);
__CvT__record_line____(__CvT_miT,82,374);int_type __ret ; 
__CvT__record_line____(__CvT_miT,82,375);const bool __testpos = this -> eback ( ) < this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,82,376);if ( __builtin_expect ( ! __testpos || 
! traits_type :: eq ( __c , this -> gptr ( ) [ - 1 ] ) , false ) ) 
{__CvT__record_line____(__CvT_miT,82,378);__ret = this -> pbackfail ( traits_type :: to_int_type ( __c ) ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,82,381);this -> gbump ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,82,382);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}__CvT__record_line____(__CvT_miT,82,384);return __ret ; 
} 
# 396 "/usr/include/c++/4.8/streambuf" 3 
int_type 
sungetc ( ) 
{ __CvT__record_line____(__CvT_miT,82,398);
__CvT__record_line____(__CvT_miT,82,399);int_type __ret ; 
__CvT__record_line____(__CvT_miT,82,400);if ( __builtin_expect ( this -> eback ( ) < this -> gptr ( ) , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,82,402);this -> gbump ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,82,403);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,82,406);__ret = this -> pbackfail ( ) ; 
}__CvT__record_line____(__CvT_miT,82,407);return __ret ; 
} 
# 423 "/usr/include/c++/4.8/streambuf" 3 
int_type 
sputc ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,82,425);
__CvT__record_line____(__CvT_miT,82,426);int_type __ret ; 
__CvT__record_line____(__CvT_miT,82,427);if ( __builtin_expect ( this -> pptr ( ) < this -> epptr ( ) , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,82,429);* this -> pptr ( ) = __c ; 
__CvT__record_line____(__CvT_miT,82,430);this -> pbump ( 1 ) ; 
__CvT__record_line____(__CvT_miT,82,431);__ret = traits_type :: to_int_type ( __c ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,82,434);__ret = this -> overflow ( traits_type :: to_int_type ( __c ) ) ; 
}__CvT__record_line____(__CvT_miT,82,435);return __ret ; 
} 
# 449 "/usr/include/c++/4.8/streambuf" 3 
streamsize 
sputn ( const char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,82,451);return this -> xsputn ( __s , __n ) ; } 

protected : 
# 463 "/usr/include/c++/4.8/streambuf" 3 
basic_streambuf ( ) 
: _M_in_beg ( 0 ) , _M_in_cur ( 0 ) , _M_in_end ( 0 ) , 
_M_out_beg ( 0 ) , _M_out_cur ( 0 ) , _M_out_end ( 0 ) , 
_M_buf_locale ( locale ( ) ) 
{ __CvT__record_line____(__CvT_miT,82,467);} 
# 481 "/usr/include/c++/4.8/streambuf" 3 
char_type * 
eback ( ) const { __CvT__record_line____(__CvT_miT,82,482);return _M_in_beg ; } 

char_type * 
gptr ( ) const { __CvT__record_line____(__CvT_miT,82,485);return _M_in_cur ; } 

char_type * 
egptr ( ) const { __CvT__record_line____(__CvT_miT,82,488);return _M_in_end ; } 
# 497 "/usr/include/c++/4.8/streambuf" 3 
void 
gbump ( int __n ) { __CvT__record_line____(__CvT_miT,82,498);_M_in_cur += __n ; } 
# 508 "/usr/include/c++/4.8/streambuf" 3 
void 
setg ( char_type * __gbeg , char_type * __gnext , char_type * __gend ) 
{ __CvT__record_line____(__CvT_miT,82,510);
__CvT__record_line____(__CvT_miT,82,511);_M_in_beg = __gbeg ; 
__CvT__record_line____(__CvT_miT,82,512);_M_in_cur = __gnext ; 
__CvT__record_line____(__CvT_miT,82,513);_M_in_end = __gend ; 
} 
# 528 "/usr/include/c++/4.8/streambuf" 3 
char_type * 
pbase ( ) const { __CvT__record_line____(__CvT_miT,82,529);return _M_out_beg ; } 

char_type * 
pptr ( ) const { __CvT__record_line____(__CvT_miT,82,532);return _M_out_cur ; } 

char_type * 
epptr ( ) const { __CvT__record_line____(__CvT_miT,82,535);return _M_out_end ; } 
# 544 "/usr/include/c++/4.8/streambuf" 3 
void 
pbump ( int __n ) { __CvT__record_line____(__CvT_miT,82,545);_M_out_cur += __n ; } 
# 554 "/usr/include/c++/4.8/streambuf" 3 
void 
setp ( char_type * __pbeg , char_type * __pend ) 
{ __CvT__record_line____(__CvT_miT,82,556);
__CvT__record_line____(__CvT_miT,82,557);_M_out_beg = _M_out_cur = __pbeg ; 
__CvT__record_line____(__CvT_miT,82,558);_M_out_end = __pend ; 
} 
# 575 "/usr/include/c++/4.8/streambuf" 3 
virtual void 
imbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,82,577);} 
# 590 "/usr/include/c++/4.8/streambuf" 3 
virtual basic_streambuf < char_type , _Traits >* 
setbuf ( char_type * , streamsize ) 
{ __CvT__record_line____(__CvT_miT,82,592);return this ; } 
# 601 "/usr/include/c++/4.8/streambuf" 3 
virtual pos_type 
seekoff ( off_type , ios_base :: seekdir , 
ios_base :: openmode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,82,604);return pos_type ( off_type ( - 1 ) ) ; } 
# 613 "/usr/include/c++/4.8/streambuf" 3 
virtual pos_type 
seekpos ( pos_type , 
ios_base :: openmode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,82,616);return pos_type ( off_type ( - 1 ) ) ; } 
# 626 "/usr/include/c++/4.8/streambuf" 3 
virtual int 
sync ( ) { __CvT__record_line____(__CvT_miT,82,627);return 0 ; } 
# 648 "/usr/include/c++/4.8/streambuf" 3 
virtual streamsize 
showmanyc ( ) { __CvT__record_line____(__CvT_miT,82,649);return 0 ; } 
# 664 "/usr/include/c++/4.8/streambuf" 3 
virtual streamsize 
xsgetn ( char_type * __s , streamsize __n ) ; 
# 686 "/usr/include/c++/4.8/streambuf" 3 
virtual int_type 
underflow ( ) 
{ __CvT__record_line____(__CvT_miT,82,688);return traits_type :: eof ( ) ; } 
# 699 "/usr/include/c++/4.8/streambuf" 3 
virtual int_type 
uflow ( ) 
{ __CvT__record_line____(__CvT_miT,82,701);
__CvT__record_line____(__CvT_miT,82,702);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,82,703);const bool __testeof = traits_type :: eq_int_type ( this -> underflow ( ) , 
__ret ) ; 
__CvT__record_line____(__CvT_miT,82,705);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,82,707);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
__CvT__record_line____(__CvT_miT,82,708);this -> gbump ( 1 ) ; 
} 
}__CvT__record_line____(__CvT_miT,82,710);return __ret ; 
} 
# 723 "/usr/include/c++/4.8/streambuf" 3 
virtual int_type 
pbackfail ( int_type __c = traits_type :: eof ( ) ) 
{ __CvT__record_line____(__CvT_miT,82,725);return traits_type :: eof ( ) ; } 
# 741 "/usr/include/c++/4.8/streambuf" 3 
virtual streamsize 
xsputn ( const char_type * __s , streamsize __n ) ; 
# 767 "/usr/include/c++/4.8/streambuf" 3 
virtual int_type 
overflow ( int_type __c = traits_type :: eof ( ) ) 
{ __CvT__record_line____(__CvT_miT,82,769);return traits_type :: eof ( ) ; } 



public : 
# 782 "/usr/include/c++/4.8/streambuf" 3 
void 
stossc ( ) 
{ __CvT__record_line____(__CvT_miT,82,784);
__CvT__record_line____(__CvT_miT,82,785);if ( this -> gptr ( ) < this -> egptr ( ) ) 
{__CvT__record_line____(__CvT_miT,82,786);this -> gbump ( 1 ) ; 
}else {
__CvT__record_line____(__CvT_miT,82,788);this -> uflow ( ) ; 
}} 



void 
__safe_gbump ( streamsize __n ) { __CvT__record_line____(__CvT_miT,82,794);_M_in_cur += __n ; } 

void 
__safe_pbump ( streamsize __n ) { __CvT__record_line____(__CvT_miT,82,797);_M_out_cur += __n ; } 

private : 


basic_streambuf ( const basic_streambuf & __sb ) 
: _M_in_beg ( __sb . _M_in_beg ) , _M_in_cur ( __sb . _M_in_cur ) , 
_M_in_end ( __sb . _M_in_end ) , _M_out_beg ( __sb . _M_out_beg ) , 
_M_out_cur ( __sb . _M_out_cur ) , _M_out_end ( __sb . _M_out_cur ) , 
_M_buf_locale ( __sb . _M_buf_locale ) 
{ __CvT__record_line____(__CvT_miT,82,807);} 

basic_streambuf & 
operator = ( const basic_streambuf & ) { __CvT__record_line____(__CvT_miT,82,810);return * this ; } ; 
} ; 


template <> 
streamsize 
__copy_streambufs_eof ( basic_streambuf < char >* __sbin , 
basic_streambuf < char >* __sbout , bool & __ineof ) ; 

template <> 
streamsize 
__copy_streambufs_eof ( basic_streambuf < wchar_t >* __sbin , 
basic_streambuf < wchar_t >* __sbout , bool & __ineof ) ; 



} 

# 1 "/usr/include/c++/4.8/bits/streambuf.tcc" 1 3 
# 37 "/usr/include/c++/4.8/bits/streambuf.tcc" 3 

# 38 "/usr/include/c++/4.8/bits/streambuf.tcc" 3 

namespace std 
{ 


template < typename _CharT , typename _Traits > 
streamsize 
basic_streambuf < _CharT , _Traits >:: 
xsgetn ( char_type * __s , streamsize __n ) 
{ 
streamsize __ret = 0 ; 
while ( __ret < __n ) 
{ __CvT__record_line____(__CvT_miT,83,50);
__CvT__record_line____(__CvT_miT,83,51);const streamsize __buf_len = this -> egptr ( ) - this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,83,52);if ( __buf_len ) 
{{ 
__CvT__record_line____(__CvT_miT,83,54);const streamsize __remaining = __n - __ret ; 
__CvT__record_line____(__CvT_miT,83,55);const streamsize __len = std :: min ( __buf_len , __remaining ) ; 
__CvT__record_line____(__CvT_miT,83,56);traits_type :: copy ( __s , this -> gptr ( ) , __len ) ; 
__CvT__record_line____(__CvT_miT,83,57);__ret += __len ; 
__CvT__record_line____(__CvT_miT,83,58);__s += __len ; 
__CvT__record_line____(__CvT_miT,83,59);this -> __safe_gbump ( __len ) ; 
} 

}__CvT__record_line____(__CvT_miT,83,62);if ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,83,64);const int_type __c = this -> uflow ( ) ; 
__CvT__record_line____(__CvT_miT,83,65);if ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,83,67);traits_type :: assign ( * __s ++ , traits_type :: to_char_type ( __c ) ) ; 
__CvT__record_line____(__CvT_miT,83,68);++ __ret ; 
} 
}else {
__CvT__record_line____(__CvT_miT,83,71);break ; 
}} 
}} 
return __ret ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_streambuf < _CharT , _Traits >:: 
xsputn ( const char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,83,81);
__CvT__record_line____(__CvT_miT,83,82);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,83,83);while ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,83,85);const streamsize __buf_len = this -> epptr ( ) - this -> pptr ( ) ; 
__CvT__record_line____(__CvT_miT,83,86);if ( __buf_len ) 
{{ 
__CvT__record_line____(__CvT_miT,83,88);const streamsize __remaining = __n - __ret ; 
__CvT__record_line____(__CvT_miT,83,89);const streamsize __len = std :: min ( __buf_len , __remaining ) ; 
__CvT__record_line____(__CvT_miT,83,90);traits_type :: copy ( this -> pptr ( ) , __s , __len ) ; 
__CvT__record_line____(__CvT_miT,83,91);__ret += __len ; 
__CvT__record_line____(__CvT_miT,83,92);__s += __len ; 
__CvT__record_line____(__CvT_miT,83,93);this -> __safe_pbump ( __len ) ; 
} 

}__CvT__record_line____(__CvT_miT,83,96);if ( __ret < __n ) 
{{ 
__CvT__record_line____(__CvT_miT,83,98);int_type __c = this -> overflow ( traits_type :: to_int_type ( * __s ) ) ; 
__CvT__record_line____(__CvT_miT,83,99);if ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,83,101);++ __ret ; 
__CvT__record_line____(__CvT_miT,83,102);++ __s ; 
} 
}else {
__CvT__record_line____(__CvT_miT,83,105);break ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,83,108);return __ret ; 
} 




template < typename _CharT , typename _Traits > 
streamsize 
__copy_streambufs_eof ( basic_streambuf < _CharT , _Traits >* __sbin , 
basic_streambuf < _CharT , _Traits >* __sbout , 
bool & __ineof ) 
{ __CvT__record_line____(__CvT_miT,83,119);
__CvT__record_line____(__CvT_miT,83,120);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,83,121);__ineof = true ; 
__CvT__record_line____(__CvT_miT,83,122);typename _Traits :: int_type __c = __sbin -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,83,123);while ( ! _Traits :: eq_int_type ( __c , _Traits :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,83,125);__c = __sbout -> sputc ( _Traits :: to_char_type ( __c ) ) ; 
__CvT__record_line____(__CvT_miT,83,126);if ( _Traits :: eq_int_type ( __c , _Traits :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,83,128);__ineof = false ; 
__CvT__record_line____(__CvT_miT,83,129);break ; 
} 
}__CvT__record_line____(__CvT_miT,83,131);++ __ret ; 
__CvT__record_line____(__CvT_miT,83,132);__c = __sbin -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,83,134);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
inline streamsize 
__copy_streambufs ( basic_streambuf < _CharT , _Traits >* __sbin , 
basic_streambuf < _CharT , _Traits >* __sbout ) 
{ __CvT__record_line____(__CvT_miT,83,141);
__CvT__record_line____(__CvT_miT,83,142);bool __ineof ; 
__CvT__record_line____(__CvT_miT,83,143);return __copy_streambufs_eof ( __sbin , __sbout , __ineof ) ; 
} 




extern template class basic_streambuf < char > ; 
extern template 
streamsize 
__copy_streambufs ( basic_streambuf < char >* , 
basic_streambuf < char >* ) ; 
extern template 
streamsize 
__copy_streambufs_eof ( basic_streambuf < char >* , 
basic_streambuf < char >* , bool & ) ; 


extern template class basic_streambuf < wchar_t > ; 
extern template 
streamsize 
__copy_streambufs ( basic_streambuf < wchar_t >* , 
basic_streambuf < wchar_t >* ) ; 
extern template 
streamsize 
__copy_streambufs_eof ( basic_streambuf < wchar_t >* , 
basic_streambuf < wchar_t >* , bool & ) ; 




} 
# 829 "/usr/include/c++/4.8/streambuf" 2 3 
# 44 "/usr/include/c++/4.8/ios" 2 3 
# 1 "/usr/include/c++/4.8/bits/basic_ios.h" 1 3 
# 33 "/usr/include/c++/4.8/bits/basic_ios.h" 3 

# 34 "/usr/include/c++/4.8/bits/basic_ios.h" 3 



# 1 "/usr/include/c++/4.8/bits/locale_facets.h" 1 3 
# 37 "/usr/include/c++/4.8/bits/locale_facets.h" 3 

# 38 "/usr/include/c++/4.8/bits/locale_facets.h" 3 

# 1 "/usr/include/c++/4.8/cwctype" 1 3 
# 39 "/usr/include/c++/4.8/cwctype" 3 

# 40 "/usr/include/c++/4.8/cwctype" 3 
# 50 "/usr/include/c++/4.8/cwctype" 3 
# 1 "/usr/include/wctype.h" 1 3 4 
# 33 "/usr/include/wctype.h" 3 4 
# 1 "/usr/include/wchar.h" 1 3 4 
# 34 "/usr/include/wctype.h" 2 3 4 
# 49 "/usr/include/wctype.h" 3 4 



typedef unsigned long int wctype_t ; 

# 71 "/usr/include/wctype.h" 3 4 
enum 
{ 
__ISwupper = 0 , 
__ISwlower = 1 , 
__ISwalpha = 2 , 
__ISwdigit = 3 , 
__ISwxdigit = 4 , 
__ISwspace = 5 , 
__ISwprint = 6 , 
__ISwgraph = 7 , 
__ISwblank = 8 , 
__ISwcntrl = 9 , 
__ISwpunct = 10 , 
__ISwalnum = 11 , 

_ISwupper = ( ( __ISwupper ) < 8 ? ( int ) ( ( 1UL << ( __ISwupper ) ) << 24 ) : ( ( __ISwupper ) < 16 ? ( int ) ( ( 1UL << ( __ISwupper ) ) << 8 ) : ( ( __ISwupper ) < 24 ? ( int ) ( ( 1UL << ( __ISwupper ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwupper ) ) >> 24 ) ) ) ) , 
_ISwlower = ( ( __ISwlower ) < 8 ? ( int ) ( ( 1UL << ( __ISwlower ) ) << 24 ) : ( ( __ISwlower ) < 16 ? ( int ) ( ( 1UL << ( __ISwlower ) ) << 8 ) : ( ( __ISwlower ) < 24 ? ( int ) ( ( 1UL << ( __ISwlower ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwlower ) ) >> 24 ) ) ) ) , 
_ISwalpha = ( ( __ISwalpha ) < 8 ? ( int ) ( ( 1UL << ( __ISwalpha ) ) << 24 ) : ( ( __ISwalpha ) < 16 ? ( int ) ( ( 1UL << ( __ISwalpha ) ) << 8 ) : ( ( __ISwalpha ) < 24 ? ( int ) ( ( 1UL << ( __ISwalpha ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwalpha ) ) >> 24 ) ) ) ) , 
_ISwdigit = ( ( __ISwdigit ) < 8 ? ( int ) ( ( 1UL << ( __ISwdigit ) ) << 24 ) : ( ( __ISwdigit ) < 16 ? ( int ) ( ( 1UL << ( __ISwdigit ) ) << 8 ) : ( ( __ISwdigit ) < 24 ? ( int ) ( ( 1UL << ( __ISwdigit ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwdigit ) ) >> 24 ) ) ) ) , 
_ISwxdigit = ( ( __ISwxdigit ) < 8 ? ( int ) ( ( 1UL << ( __ISwxdigit ) ) << 24 ) : ( ( __ISwxdigit ) < 16 ? ( int ) ( ( 1UL << ( __ISwxdigit ) ) << 8 ) : ( ( __ISwxdigit ) < 24 ? ( int ) ( ( 1UL << ( __ISwxdigit ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwxdigit ) ) >> 24 ) ) ) ) , 
_ISwspace = ( ( __ISwspace ) < 8 ? ( int ) ( ( 1UL << ( __ISwspace ) ) << 24 ) : ( ( __ISwspace ) < 16 ? ( int ) ( ( 1UL << ( __ISwspace ) ) << 8 ) : ( ( __ISwspace ) < 24 ? ( int ) ( ( 1UL << ( __ISwspace ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwspace ) ) >> 24 ) ) ) ) , 
_ISwprint = ( ( __ISwprint ) < 8 ? ( int ) ( ( 1UL << ( __ISwprint ) ) << 24 ) : ( ( __ISwprint ) < 16 ? ( int ) ( ( 1UL << ( __ISwprint ) ) << 8 ) : ( ( __ISwprint ) < 24 ? ( int ) ( ( 1UL << ( __ISwprint ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwprint ) ) >> 24 ) ) ) ) , 
_ISwgraph = ( ( __ISwgraph ) < 8 ? ( int ) ( ( 1UL << ( __ISwgraph ) ) << 24 ) : ( ( __ISwgraph ) < 16 ? ( int ) ( ( 1UL << ( __ISwgraph ) ) << 8 ) : ( ( __ISwgraph ) < 24 ? ( int ) ( ( 1UL << ( __ISwgraph ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwgraph ) ) >> 24 ) ) ) ) , 
_ISwblank = ( ( __ISwblank ) < 8 ? ( int ) ( ( 1UL << ( __ISwblank ) ) << 24 ) : ( ( __ISwblank ) < 16 ? ( int ) ( ( 1UL << ( __ISwblank ) ) << 8 ) : ( ( __ISwblank ) < 24 ? ( int ) ( ( 1UL << ( __ISwblank ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwblank ) ) >> 24 ) ) ) ) , 
_ISwcntrl = ( ( __ISwcntrl ) < 8 ? ( int ) ( ( 1UL << ( __ISwcntrl ) ) << 24 ) : ( ( __ISwcntrl ) < 16 ? ( int ) ( ( 1UL << ( __ISwcntrl ) ) << 8 ) : ( ( __ISwcntrl ) < 24 ? ( int ) ( ( 1UL << ( __ISwcntrl ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwcntrl ) ) >> 24 ) ) ) ) , 
_ISwpunct = ( ( __ISwpunct ) < 8 ? ( int ) ( ( 1UL << ( __ISwpunct ) ) << 24 ) : ( ( __ISwpunct ) < 16 ? ( int ) ( ( 1UL << ( __ISwpunct ) ) << 8 ) : ( ( __ISwpunct ) < 24 ? ( int ) ( ( 1UL << ( __ISwpunct ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwpunct ) ) >> 24 ) ) ) ) , 
_ISwalnum = ( ( __ISwalnum ) < 8 ? ( int ) ( ( 1UL << ( __ISwalnum ) ) << 24 ) : ( ( __ISwalnum ) < 16 ? ( int ) ( ( 1UL << ( __ISwalnum ) ) << 8 ) : ( ( __ISwalnum ) < 24 ? ( int ) ( ( 1UL << ( __ISwalnum ) ) >> 8 ) : ( int ) ( ( 1UL << ( __ISwalnum ) ) >> 24 ) ) ) ) 
} ; 



extern "C" { 








extern int iswalnum ( wint_t __wc ) throw ( ) ; 





extern int iswalpha ( wint_t __wc ) throw ( ) ; 


extern int iswcntrl ( wint_t __wc ) throw ( ) ; 



extern int iswdigit ( wint_t __wc ) throw ( ) ; 



extern int iswgraph ( wint_t __wc ) throw ( ) ; 




extern int iswlower ( wint_t __wc ) throw ( ) ; 


extern int iswprint ( wint_t __wc ) throw ( ) ; 




extern int iswpunct ( wint_t __wc ) throw ( ) ; 




extern int iswspace ( wint_t __wc ) throw ( ) ; 




extern int iswupper ( wint_t __wc ) throw ( ) ; 




extern int iswxdigit ( wint_t __wc ) throw ( ) ; 





extern int iswblank ( wint_t __wc ) throw ( ) ; 
# 171 "/usr/include/wctype.h" 3 4 
extern wctype_t wctype ( const char * __property ) throw ( ) ; 



extern int iswctype ( wint_t __wc , wctype_t __desc ) throw ( ) ; 










typedef const __int32_t * wctrans_t ; 







extern wint_t towlower ( wint_t __wc ) throw ( ) ; 


extern wint_t towupper ( wint_t __wc ) throw ( ) ; 


} 
# 213 "/usr/include/wctype.h" 3 4 
extern "C" { 




extern wctrans_t wctrans ( const char * __property ) throw ( ) ; 


extern wint_t towctrans ( wint_t __wc , wctrans_t __desc ) throw ( ) ; 








extern int iswalnum_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 





extern int iswalpha_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 


extern int iswcntrl_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern int iswdigit_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern int iswgraph_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswlower_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 


extern int iswprint_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswpunct_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswspace_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswupper_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswxdigit_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 




extern int iswblank_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern wctype_t wctype_l ( const char * __property , __locale_t __locale ) 
throw ( ) ; 



extern int iswctype_l ( wint_t __wc , wctype_t __desc , __locale_t __locale ) 
throw ( ) ; 







extern wint_t towlower_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 


extern wint_t towupper_l ( wint_t __wc , __locale_t __locale ) throw ( ) ; 



extern wctrans_t wctrans_l ( const char * __property , __locale_t __locale ) 
throw ( ) ; 


extern wint_t towctrans_l ( wint_t __wc , wctrans_t __desc , 
__locale_t __locale ) throw ( ) ; 



} 
# 51 "/usr/include/c++/4.8/cwctype" 2 3 
# 80 "/usr/include/c++/4.8/cwctype" 3 
namespace std 
{ 
using :: wctrans_t ; 
using :: wctype_t ; 
using :: wint_t ; 

using :: iswalnum ; 
using :: iswalpha ; 

using :: iswblank ; 

using :: iswcntrl ; 
using :: iswctype ; 
using :: iswdigit ; 
using :: iswgraph ; 
using :: iswlower ; 
using :: iswprint ; 
using :: iswpunct ; 
using :: iswspace ; 
using :: iswupper ; 
using :: iswxdigit ; 
using :: towctrans ; 
using :: towlower ; 
using :: towupper ; 
using :: wctrans ; 
using :: wctype ; 
} 
# 40 "/usr/include/c++/4.8/bits/locale_facets.h" 2 3 
# 1 "/usr/include/c++/4.8/cctype" 1 3 
# 39 "/usr/include/c++/4.8/cctype" 3 

# 40 "/usr/include/c++/4.8/cctype" 3 
# 41 "/usr/include/c++/4.8/bits/locale_facets.h" 2 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/ctype_base.h" 1 3 
# 36 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/ctype_base.h" 3 
namespace std 
{ 



struct ctype_base 
{ 

typedef const int * __to_type ; 



typedef unsigned short mask ; 
static const mask upper = _ISupper ; 
static const mask lower = _ISlower ; 
static const mask alpha = _ISalpha ; 
static const mask digit = _ISdigit ; 
static const mask xdigit = _ISxdigit ; 
static const mask space = _ISspace ; 
static const mask print = _ISprint ; 
static const mask graph = _ISalpha | _ISdigit | _ISpunct ; 
static const mask cntrl = _IScntrl ; 
static const mask punct = _ISpunct ; 
static const mask alnum = _ISalpha | _ISdigit ; 
} ; 


} 
# 42 "/usr/include/c++/4.8/bits/locale_facets.h" 2 3 






# 1 "/usr/include/c++/4.8/bits/streambuf_iterator.h" 1 3 
# 33 "/usr/include/c++/4.8/bits/streambuf_iterator.h" 3 

# 34 "/usr/include/c++/4.8/bits/streambuf_iterator.h" 3 




namespace std 
{ 

# 49 "/usr/include/c++/4.8/bits/streambuf_iterator.h" 3 
template < typename _CharT , typename _Traits > 
class istreambuf_iterator 
: public iterator < input_iterator_tag , _CharT , typename _Traits :: off_type , 
_CharT * , 




_CharT &> 

{ 
public : 



typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef basic_streambuf < _CharT , _Traits > streambuf_type ; 
typedef basic_istream < _CharT , _Traits > istream_type ; 


template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
ostreambuf_iterator < _CharT2 > >:: __type 
copy ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
ostreambuf_iterator < _CharT2 > ) ; 

template < bool _IsMove , typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
_CharT2 *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT2 > , 
istreambuf_iterator < _CharT2 > , _CharT2 * ) ; 

template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
istreambuf_iterator < _CharT2 > >:: __type 
find ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
const _CharT2 & ) ; 

private : 







mutable streambuf_type * _M_sbuf ; 
mutable int_type _M_c ; 

public : 

istreambuf_iterator ( ) throw ( ) 
: _M_sbuf ( 0 ) , _M_c ( traits_type :: eof ( ) ) { __CvT__record_line____(__CvT_miT,89,103);} 
# 112 "/usr/include/c++/4.8/bits/streambuf_iterator.h" 3 
istreambuf_iterator ( istream_type & __s ) throw ( ) 
: _M_sbuf ( __s . rdbuf ( ) ) , _M_c ( traits_type :: eof ( ) ) { __CvT__record_line____(__CvT_miT,89,113);} 


istreambuf_iterator ( streambuf_type * __s ) throw ( ) 
: _M_sbuf ( __s ) , _M_c ( traits_type :: eof ( ) ) { __CvT__record_line____(__CvT_miT,89,117);} 




char_type 
operator * ( ) const 
{ __CvT__record_line____(__CvT_miT,89,124);







__CvT__record_line____(__CvT_miT,89,132);return traits_type :: to_char_type ( _M_get ( ) ) ; 
} 


istreambuf_iterator & 
operator ++ ( ) 
{ __CvT__record_line____(__CvT_miT,89,138);


; 
__CvT__record_line____(__CvT_miT,89,142);if ( _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,89,144);_M_sbuf -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,89,145);_M_c = traits_type :: eof ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,89,147);return * this ; 
} 


istreambuf_iterator 
operator ++ ( int ) 
{ __CvT__record_line____(__CvT_miT,89,153);


; 

__CvT__record_line____(__CvT_miT,89,158);istreambuf_iterator __old = * this ; 
__CvT__record_line____(__CvT_miT,89,159);if ( _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,89,161);__old . _M_c = _M_sbuf -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,89,162);_M_c = traits_type :: eof ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,89,164);return __old ; 
} 





bool 
equal ( const istreambuf_iterator & __b ) const 
{ __CvT__record_line____(__CvT_miT,89,173);return _M_at_eof ( ) == __b . _M_at_eof ( ) ; } 

private : 
int_type 
_M_get ( ) const 
{ __CvT__record_line____(__CvT_miT,89,178);
__CvT__record_line____(__CvT_miT,89,179);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,89,180);int_type __ret = __eof ; 
__CvT__record_line____(__CvT_miT,89,181);if ( _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,89,183);if ( ! traits_type :: eq_int_type ( _M_c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,89,184);__ret = _M_c ; 
}else {__CvT__record_line____(__CvT_miT,89,185);if ( ! traits_type :: eq_int_type ( ( __ret = _M_sbuf -> sgetc ( ) ) , 
__eof ) ) 
{__CvT__record_line____(__CvT_miT,89,187);_M_c = __ret ; 
}else {
__CvT__record_line____(__CvT_miT,89,189);_M_sbuf = 0 ; 
}}} 
}__CvT__record_line____(__CvT_miT,89,191);return __ret ; 
} 

bool 
_M_at_eof ( ) const 
{ __CvT__record_line____(__CvT_miT,89,196);
__CvT__record_line____(__CvT_miT,89,197);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,89,198);return traits_type :: eq_int_type ( _M_get ( ) , __eof ) ; 
} 
} ; 

template < typename _CharT , typename _Traits > 
inline bool 
operator == ( const istreambuf_iterator < _CharT , _Traits >& __a , 
const istreambuf_iterator < _CharT , _Traits >& __b ) 
{ __CvT__record_line____(__CvT_miT,89,206);return __a . equal ( __b ) ; } 

template < typename _CharT , typename _Traits > 
inline bool 
operator != ( const istreambuf_iterator < _CharT , _Traits >& __a , 
const istreambuf_iterator < _CharT , _Traits >& __b ) 
{ __CvT__record_line____(__CvT_miT,89,212);return ! __a . equal ( __b ) ; } 


template < typename _CharT , typename _Traits > 
class ostreambuf_iterator 
: public iterator < output_iterator_tag , void , void , void , void > 
{ 
public : 



typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef basic_streambuf < _CharT , _Traits > streambuf_type ; 
typedef basic_ostream < _CharT , _Traits > ostream_type ; 


template < typename _CharT2 > 
friend typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , 
ostreambuf_iterator < _CharT2 > >:: __type 
copy ( istreambuf_iterator < _CharT2 > , istreambuf_iterator < _CharT2 > , 
ostreambuf_iterator < _CharT2 > ) ; 

private : 
streambuf_type * _M_sbuf ; 
bool _M_failed ; 

public : 

ostreambuf_iterator ( ostream_type & __s ) throw ( ) 
: _M_sbuf ( __s . rdbuf ( ) ) , _M_failed ( ! _M_sbuf ) { __CvT__record_line____(__CvT_miT,89,242);} 


ostreambuf_iterator ( streambuf_type * __s ) throw ( ) 
: _M_sbuf ( __s ) , _M_failed ( ! _M_sbuf ) { __CvT__record_line____(__CvT_miT,89,246);} 


ostreambuf_iterator & 
operator = ( _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,89,251);
__CvT__record_line____(__CvT_miT,89,252);if ( ! _M_failed && 
_Traits :: eq_int_type ( _M_sbuf -> sputc ( __c ) , _Traits :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,89,254);_M_failed = true ; 
}__CvT__record_line____(__CvT_miT,89,255);return * this ; 
} 


ostreambuf_iterator & 
operator * ( ) 
{ __CvT__record_line____(__CvT_miT,89,261);return * this ; } 


ostreambuf_iterator & 
operator ++ ( int ) 
{ __CvT__record_line____(__CvT_miT,89,266);return * this ; } 


ostreambuf_iterator & 
operator ++ ( ) 
{ __CvT__record_line____(__CvT_miT,89,271);return * this ; } 


bool 
failed ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,89,276);return _M_failed ; } 

ostreambuf_iterator & 
_M_put ( const _CharT * __ws , streamsize __len ) 
{ __CvT__record_line____(__CvT_miT,89,280);
__CvT__record_line____(__CvT_miT,89,281);if ( __builtin_expect ( ! _M_failed , true ) 
&& __builtin_expect ( this -> _M_sbuf -> sputn ( __ws , __len ) != __len , 
false ) ) 
{__CvT__record_line____(__CvT_miT,89,284);_M_failed = true ; 
}__CvT__record_line____(__CvT_miT,89,285);return * this ; 
} 
} ; 


template < typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT > >:: __type 
copy ( istreambuf_iterator < _CharT > __first , 
istreambuf_iterator < _CharT > __last , 
ostreambuf_iterator < _CharT > __result ) 
{ __CvT__record_line____(__CvT_miT,89,296);
__CvT__record_line____(__CvT_miT,89,297);if ( __first . _M_sbuf && ! __last . _M_sbuf && ! __result . _M_failed ) 
{{ 
__CvT__record_line____(__CvT_miT,89,299);bool __ineof ; 
__CvT__record_line____(__CvT_miT,89,300);__copy_streambufs_eof ( __first . _M_sbuf , __result . _M_sbuf , __ineof ) ; 
__CvT__record_line____(__CvT_miT,89,301);if ( ! __ineof ) 
{__CvT__record_line____(__CvT_miT,89,302);__result . _M_failed = true ; 
}} 
}__CvT__record_line____(__CvT_miT,89,304);return __result ; 
} 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT > >:: __type 
__copy_move_a2 ( _CharT * __first , _CharT * __last , 
ostreambuf_iterator < _CharT > __result ) 
{ __CvT__record_line____(__CvT_miT,89,312);
__CvT__record_line____(__CvT_miT,89,313);const streamsize __num = __last - __first ; 
__CvT__record_line____(__CvT_miT,89,314);if ( __num > 0 ) 
{__CvT__record_line____(__CvT_miT,89,315);__result . _M_put ( __first , __num ) ; 
}__CvT__record_line____(__CvT_miT,89,316);return __result ; 
} 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
ostreambuf_iterator < _CharT > >:: __type 
__copy_move_a2 ( const _CharT * __first , const _CharT * __last , 
ostreambuf_iterator < _CharT > __result ) 
{ __CvT__record_line____(__CvT_miT,89,324);
__CvT__record_line____(__CvT_miT,89,325);const streamsize __num = __last - __first ; 
__CvT__record_line____(__CvT_miT,89,326);if ( __num > 0 ) 
{__CvT__record_line____(__CvT_miT,89,327);__result . _M_put ( __first , __num ) ; 
}__CvT__record_line____(__CvT_miT,89,328);return __result ; 
} 

template < bool _IsMove , typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
_CharT *>:: __type 
__copy_move_a2 ( istreambuf_iterator < _CharT > __first , 
istreambuf_iterator < _CharT > __last , _CharT * __result ) 
{ __CvT__record_line____(__CvT_miT,89,336);
typedef istreambuf_iterator < _CharT > __is_iterator_type ; 
typedef typename __is_iterator_type :: traits_type traits_type ; 
typedef typename __is_iterator_type :: streambuf_type streambuf_type ; 
typedef typename traits_type :: int_type int_type ; 

__CvT__record_line____(__CvT_miT,89,342);if ( __first . _M_sbuf && ! __last . _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,89,344);streambuf_type * __sb = __first . _M_sbuf ; 
__CvT__record_line____(__CvT_miT,89,345);int_type __c = __sb -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,89,346);while ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,89,348);const streamsize __n = __sb -> egptr ( ) - __sb -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,89,349);if ( __n > 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,89,351);traits_type :: copy ( __result , __sb -> gptr ( ) , __n ) ; 
__CvT__record_line____(__CvT_miT,89,352);__sb -> __safe_gbump ( __n ) ; 
__CvT__record_line____(__CvT_miT,89,353);__result += __n ; 
__CvT__record_line____(__CvT_miT,89,354);__c = __sb -> underflow ( ) ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,89,358);* __result ++ = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,89,359);__c = __sb -> snextc ( ) ; 
} 
}} 
}} 
}__CvT__record_line____(__CvT_miT,89,363);return __result ; 
} 

template < typename _CharT > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT >:: __value , 
istreambuf_iterator < _CharT > >:: __type 
find ( istreambuf_iterator < _CharT > __first , 
istreambuf_iterator < _CharT > __last , const _CharT & __val ) 
{ __CvT__record_line____(__CvT_miT,89,371);
typedef istreambuf_iterator < _CharT > __is_iterator_type ; 
typedef typename __is_iterator_type :: traits_type traits_type ; 
typedef typename __is_iterator_type :: streambuf_type streambuf_type ; 
typedef typename traits_type :: int_type int_type ; 

__CvT__record_line____(__CvT_miT,89,377);if ( __first . _M_sbuf && ! __last . _M_sbuf ) 
{{ 
__CvT__record_line____(__CvT_miT,89,379);const int_type __ival = traits_type :: to_int_type ( __val ) ; 
__CvT__record_line____(__CvT_miT,89,380);streambuf_type * __sb = __first . _M_sbuf ; 
__CvT__record_line____(__CvT_miT,89,381);int_type __c = __sb -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,89,382);while ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) 
&& ! traits_type :: eq_int_type ( __c , __ival ) ) 
{{ 
__CvT__record_line____(__CvT_miT,89,385);streamsize __n = __sb -> egptr ( ) - __sb -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,89,386);if ( __n > 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,89,388);const _CharT * __p = traits_type :: find ( __sb -> gptr ( ) , 
__n , __val ) ; 
__CvT__record_line____(__CvT_miT,89,390);if ( __p ) 
{__CvT__record_line____(__CvT_miT,89,391);__n = __p - __sb -> gptr ( ) ; 
}__CvT__record_line____(__CvT_miT,89,392);__sb -> __safe_gbump ( __n ) ; 
__CvT__record_line____(__CvT_miT,89,393);__c = __sb -> sgetc ( ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,89,396);__c = __sb -> snextc ( ) ; 
}} 

}__CvT__record_line____(__CvT_miT,89,399);if ( ! traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,89,400);__first . _M_c = __c ; 
}else {
__CvT__record_line____(__CvT_miT,89,402);__first . _M_sbuf = 0 ; 
}} 
}__CvT__record_line____(__CvT_miT,89,404);return __first ; 
} 




} 
# 49 "/usr/include/c++/4.8/bits/locale_facets.h" 2 3 

namespace std 
{ 

# 64 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
template < typename _Tp > 
void 
__convert_to_v ( const char * , _Tp & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 


template <> 
void 
__convert_to_v ( const char * , float & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 

template <> 
void 
__convert_to_v ( const char * , double & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 

template <> 
void 
__convert_to_v ( const char * , long double & , ios_base :: iostate & , 
const __c_locale & ) throw ( ) ; 



template < typename _CharT , typename _Traits > 
struct __pad 
{ 
static void 
_S_pad ( ios_base & __io , _CharT __fill , _CharT * __news , 
const _CharT * __olds , streamsize __newlen , streamsize __oldlen ) ; 
} ; 






template < typename _CharT > 
_CharT * 
__add_grouping ( _CharT * __s , _CharT __sep , 
const char * __gbeg , size_t __gsize , 
const _CharT * __first , const _CharT * __last ) ; 




template < typename _CharT > 
inline 
ostreambuf_iterator < _CharT > 
__write ( ostreambuf_iterator < _CharT > __s , const _CharT * __ws , int __len ) 
{ __CvT__record_line____(__CvT_miT,85,113);
__CvT__record_line____(__CvT_miT,85,114);__s . _M_put ( __ws , __len ) ; 
__CvT__record_line____(__CvT_miT,85,115);return __s ; 
} 


template < typename _CharT , typename _OutIter > 
inline 
_OutIter 
__write ( _OutIter __s , const _CharT * __ws , int __len ) 
{ __CvT__record_line____(__CvT_miT,85,123);
__CvT__record_line____(__CvT_miT,85,124);for ( int __j = 0 ; __j < __len ; __j ++ , ++ __s ) 
{__CvT__record_line____(__CvT_miT,85,125);* __s = __ws [ __j ] ; 
}__CvT__record_line____(__CvT_miT,85,126);return __s ; 
} 
# 142 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
template < typename _CharT > 
class __ctype_abstract_base : public locale :: facet , public ctype_base 
{ 
public : 


typedef _CharT char_type ; 
# 161 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
bool 
is ( mask __m , char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,85,163);return this -> do_is ( __m , __c ) ; } 
# 178 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char_type * 
is ( const char_type * __lo , const char_type * __hi , mask * __vec ) const 
{ __CvT__record_line____(__CvT_miT,85,180);return this -> do_is ( __lo , __hi , __vec ) ; } 
# 194 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char_type * 
scan_is ( mask __m , const char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,85,196);return this -> do_scan_is ( __m , __lo , __hi ) ; } 
# 210 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char_type * 
scan_not ( mask __m , const char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,85,212);return this -> do_scan_not ( __m , __lo , __hi ) ; } 
# 224 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char_type 
toupper ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,85,226);return this -> do_toupper ( __c ) ; } 
# 239 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char_type * 
toupper ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,85,241);return this -> do_toupper ( __lo , __hi ) ; } 
# 253 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char_type 
tolower ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,85,255);return this -> do_tolower ( __c ) ; } 
# 268 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char_type * 
tolower ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,85,270);return this -> do_tolower ( __lo , __hi ) ; } 
# 285 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char_type 
widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,85,287);return this -> do_widen ( __c ) ; } 
# 304 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char * 
widen ( const char * __lo , const char * __hi , char_type * __to ) const 
{ __CvT__record_line____(__CvT_miT,85,306);return this -> do_widen ( __lo , __hi , __to ) ; } 
# 323 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char 
narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,85,325);return this -> do_narrow ( __c , __dfault ) ; } 
# 345 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char_type * 
narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const 
{ __CvT__record_line____(__CvT_miT,85,348);return this -> do_narrow ( __lo , __hi , __dfault , __to ) ; } 

protected : 
explicit 
__ctype_abstract_base ( size_t __refs = 0 ) : facet ( __refs ) { __CvT__record_line____(__CvT_miT,85,352);} 

virtual 
~ __ctype_abstract_base ( ) { __CvT__record_line____(__CvT_miT,85,355);} 
# 370 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual bool 
do_is ( mask __m , char_type __c ) const = 0 ; 
# 389 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_is ( const char_type * __lo , const char_type * __hi , 
mask * __vec ) const = 0 ; 
# 408 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_is ( mask __m , const char_type * __lo , 
const char_type * __hi ) const = 0 ; 
# 427 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_not ( mask __m , const char_type * __lo , 
const char_type * __hi ) const = 0 ; 
# 445 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_toupper ( char_type __c ) const = 0 ; 
# 462 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const = 0 ; 
# 478 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_tolower ( char_type __c ) const = 0 ; 
# 495 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const = 0 ; 
# 514 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_widen ( char __c ) const = 0 ; 
# 535 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __to ) const = 0 ; 
# 556 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char 
do_narrow ( char_type __c , char __dfault ) const = 0 ; 
# 581 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const = 0 ; 
} ; 
# 604 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
template < typename _CharT > 
class ctype : public __ctype_abstract_base < _CharT > 
{ 
public : 

typedef _CharT char_type ; 
typedef typename __ctype_abstract_base < _CharT >:: mask mask ; 


static locale :: id id ; 

explicit 
ctype ( size_t __refs = 0 ) : __ctype_abstract_base < _CharT > ( __refs ) { __CvT__record_line____(__CvT_miT,85,616);} 

protected : 
virtual 
~ ctype ( ) ; 

virtual bool 
do_is ( mask __m , char_type __c ) const ; 

virtual const char_type * 
do_is ( const char_type * __lo , const char_type * __hi , mask * __vec ) const ; 

virtual const char_type * 
do_scan_is ( mask __m , const char_type * __lo , const char_type * __hi ) const ; 

virtual const char_type * 
do_scan_not ( mask __m , const char_type * __lo , 
const char_type * __hi ) const ; 

virtual char_type 
do_toupper ( char_type __c ) const ; 

virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const ; 

virtual char_type 
do_tolower ( char_type __c ) const ; 

virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const ; 

virtual char_type 
do_widen ( char __c ) const ; 

virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __dest ) const ; 

virtual char 
do_narrow ( char_type , char __dfault ) const ; 

virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const ; 
} ; 

template < typename _CharT > 
locale :: id ctype < _CharT >:: id ; 
# 673 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
template <> 
class ctype < char > : public locale :: facet , public ctype_base 
{ 
public : 


typedef char char_type ; 

protected : 

__c_locale _M_c_locale_ctype ; 
bool _M_del ; 
__to_type _M_toupper ; 
__to_type _M_tolower ; 
const mask * _M_table ; 
mutable char _M_widen_ok ; 
mutable char _M_widen [ 1 + static_cast < unsigned char > ( - 1 ) ] ; 
mutable char _M_narrow [ 1 + static_cast < unsigned char > ( - 1 ) ] ; 
mutable char _M_narrow_ok ; 


public : 

static locale :: id id ; 

static const size_t table_size = 1 + static_cast < unsigned char > ( - 1 ) ; 
# 710 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
explicit 
ctype ( const mask * __table = 0 , bool __del = false , size_t __refs = 0 ) ; 
# 723 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
explicit 
ctype ( __c_locale __cloc , const mask * __table = 0 , bool __del = false , 
size_t __refs = 0 ) ; 
# 736 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
inline bool 
is ( mask __m , char __c ) const ; 
# 751 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
inline const char * 
is ( const char * __lo , const char * __hi , mask * __vec ) const ; 
# 765 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
inline const char * 
scan_is ( mask __m , const char * __lo , const char * __hi ) const ; 
# 779 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
inline const char * 
scan_not ( mask __m , const char * __lo , const char * __hi ) const ; 
# 794 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char_type 
toupper ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,85,796);return this -> do_toupper ( __c ) ; } 
# 811 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char_type * 
toupper ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,85,813);return this -> do_toupper ( __lo , __hi ) ; } 
# 827 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char_type 
tolower ( char_type __c ) const 
{ __CvT__record_line____(__CvT_miT,85,829);return this -> do_tolower ( __c ) ; } 
# 844 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char_type * 
tolower ( char_type * __lo , const char_type * __hi ) const 
{ __CvT__record_line____(__CvT_miT,85,846);return this -> do_tolower ( __lo , __hi ) ; } 
# 864 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char_type 
widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,85,866);
__CvT__record_line____(__CvT_miT,85,867);if ( _M_widen_ok ) 
{__CvT__record_line____(__CvT_miT,85,868);return _M_widen [ static_cast < unsigned char > ( __c ) ] ; 
}__CvT__record_line____(__CvT_miT,85,869);this -> _M_widen_init ( ) ; 
__CvT__record_line____(__CvT_miT,85,870);return this -> do_widen ( __c ) ; 
} 
# 891 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char * 
widen ( const char * __lo , const char * __hi , char_type * __to ) const 
{ __CvT__record_line____(__CvT_miT,85,893);
__CvT__record_line____(__CvT_miT,85,894);if ( _M_widen_ok == 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,85,896);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,85,897);return __hi ; 
} 
}__CvT__record_line____(__CvT_miT,85,899);if ( ! _M_widen_ok ) 
{__CvT__record_line____(__CvT_miT,85,900);_M_widen_init ( ) ; 
}__CvT__record_line____(__CvT_miT,85,901);return this -> do_widen ( __lo , __hi , __to ) ; 
} 
# 922 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char 
narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,85,924);
__CvT__record_line____(__CvT_miT,85,925);if ( _M_narrow [ static_cast < unsigned char > ( __c ) ] ) 
{__CvT__record_line____(__CvT_miT,85,926);return _M_narrow [ static_cast < unsigned char > ( __c ) ] ; 
}__CvT__record_line____(__CvT_miT,85,927);const char __t = do_narrow ( __c , __dfault ) ; 
__CvT__record_line____(__CvT_miT,85,928);if ( __t != __dfault ) 
{__CvT__record_line____(__CvT_miT,85,929);_M_narrow [ static_cast < unsigned char > ( __c ) ] = __t ; 
}__CvT__record_line____(__CvT_miT,85,930);return __t ; 
} 
# 955 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
const char_type * 
narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const 
{ __CvT__record_line____(__CvT_miT,85,958);
__CvT__record_line____(__CvT_miT,85,959);if ( __builtin_expect ( _M_narrow_ok == 1 , true ) ) 
{{ 
__CvT__record_line____(__CvT_miT,85,961);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,85,962);return __hi ; 
} 
}__CvT__record_line____(__CvT_miT,85,964);if ( ! _M_narrow_ok ) 
{__CvT__record_line____(__CvT_miT,85,965);_M_narrow_init ( ) ; 
}__CvT__record_line____(__CvT_miT,85,966);return this -> do_narrow ( __lo , __hi , __dfault , __to ) ; 
} 





const mask * 
table ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,85,975);return _M_table ; } 


static const mask * 
classic_table ( ) throw ( ) ; 
protected : 







virtual 
~ ctype ( ) ; 
# 1004 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_toupper ( char_type __c ) const ; 
# 1021 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const ; 
# 1037 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_tolower ( char_type __c ) const ; 
# 1054 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const ; 
# 1074 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,85,1076);return __c ; } 
# 1097 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __to ) const 
{ __CvT__record_line____(__CvT_miT,85,1099);
__CvT__record_line____(__CvT_miT,85,1100);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,85,1101);return __hi ; 
} 
# 1123 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char 
do_narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,85,1125);return __c ; } 
# 1149 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const 
{ __CvT__record_line____(__CvT_miT,85,1152);
__CvT__record_line____(__CvT_miT,85,1153);__builtin_memcpy ( __to , __lo , __hi - __lo ) ; 
__CvT__record_line____(__CvT_miT,85,1154);return __hi ; 
} 

private : 
void _M_narrow_init ( ) const ; 
void _M_widen_init ( ) const ; 
} ; 
# 1174 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
template <> 
class ctype < wchar_t > : public __ctype_abstract_base < wchar_t > 
{ 
public : 


typedef wchar_t char_type ; 
typedef wctype_t __wmask_type ; 

protected : 
__c_locale _M_c_locale_ctype ; 


bool _M_narrow_ok ; 
char _M_narrow [ 128 ] ; 
wint_t _M_widen [ 1 + static_cast < unsigned char > ( - 1 ) ] ; 


mask _M_bit [ 16 ] ; 
__wmask_type _M_wmask [ 16 ] ; 

public : 


static locale :: id id ; 
# 1207 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
explicit 
ctype ( size_t __refs = 0 ) ; 
# 1218 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
explicit 
ctype ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
__wmask_type 
_M_convert_to_wmask ( const mask __m ) const throw ( ) ; 


virtual 
~ ctype ( ) ; 
# 1242 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual bool 
do_is ( mask __m , char_type __c ) const ; 
# 1261 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_is ( const char_type * __lo , const char_type * __hi , mask * __vec ) const ; 
# 1279 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_is ( mask __m , const char_type * __lo , const char_type * __hi ) const ; 
# 1297 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_scan_not ( mask __m , const char_type * __lo , 
const char_type * __hi ) const ; 
# 1314 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_toupper ( char_type __c ) const ; 
# 1331 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_toupper ( char_type * __lo , const char_type * __hi ) const ; 
# 1347 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_tolower ( char_type __c ) const ; 
# 1364 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_tolower ( char_type * __lo , const char_type * __hi ) const ; 
# 1384 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_widen ( char __c ) const ; 
# 1406 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char * 
do_widen ( const char * __lo , const char * __hi , char_type * __to ) const ; 
# 1429 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char 
do_narrow ( char_type __c , char __dfault ) const ; 
# 1455 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual const char_type * 
do_narrow ( const char_type * __lo , const char_type * __hi , 
char __dfault , char * __to ) const ; 


void 
_M_initialize_ctype ( ) throw ( ) ; 
} ; 



template < typename _CharT > 
class ctype_byname : public ctype < _CharT > 
{ 
public : 
typedef typename ctype < _CharT >:: mask mask ; 

explicit 
ctype_byname ( const char * __s , size_t __refs = 0 ) ; 

protected : 
virtual 
~ ctype_byname ( ) { __CvT__record_line____(__CvT_miT,85,1477);} ; 
} ; 


template <> 
class ctype_byname < char > : public ctype < char > 
{ 
public : 
explicit 
ctype_byname ( const char * __s , size_t __refs = 0 ) ; 

protected : 
virtual 
~ ctype_byname ( ) ; 
} ; 


template <> 
class ctype_byname < wchar_t > : public ctype < wchar_t > 
{ 
public : 
explicit 
ctype_byname ( const char * __s , size_t __refs = 0 ) ; 

protected : 
virtual 
~ ctype_byname ( ) ; 
} ; 



} 


# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/ctype_inline.h" 1 3 
# 37 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/ctype_inline.h" 3 
namespace std 
{ 


bool 
ctype < char >:: 
is ( mask __m , char __c ) const 
{ __CvT__record_line____(__CvT_miT,90,44);return _M_table [ static_cast < unsigned char > ( __c ) ] & __m ; } 

const char * 
ctype < char >:: 
is ( const char * __low , const char * __high , mask * __vec ) const 
{ __CvT__record_line____(__CvT_miT,90,49);
__CvT__record_line____(__CvT_miT,90,50);while ( __low < __high ) 
{__CvT__record_line____(__CvT_miT,90,51);* __vec ++ = _M_table [ static_cast < unsigned char > ( * __low ++ ) ] ; 
}__CvT__record_line____(__CvT_miT,90,52);return __high ; 
} 

const char * 
ctype < char >:: 
scan_is ( mask __m , const char * __low , const char * __high ) const 
{ __CvT__record_line____(__CvT_miT,90,58);
__CvT__record_line____(__CvT_miT,90,59);while ( __low < __high 
&& ! ( _M_table [ static_cast < unsigned char > ( * __low ) ] & __m ) ) 
{__CvT__record_line____(__CvT_miT,90,61);++ __low ; 
}__CvT__record_line____(__CvT_miT,90,62);return __low ; 
} 

const char * 
ctype < char >:: 
scan_not ( mask __m , const char * __low , const char * __high ) const 
{ __CvT__record_line____(__CvT_miT,90,68);
__CvT__record_line____(__CvT_miT,90,69);while ( __low < __high 
&& ( _M_table [ static_cast < unsigned char > ( * __low ) ] & __m ) != 0 ) 
{__CvT__record_line____(__CvT_miT,90,71);++ __low ; 
}__CvT__record_line____(__CvT_miT,90,72);return __low ; 
} 


} 
# 1512 "/usr/include/c++/4.8/bits/locale_facets.h" 2 3 

namespace std 
{ 



class __num_base 
{ 
public : 


enum 
{ 
_S_ominus , 
_S_oplus , 
_S_ox , 
_S_oX , 
_S_odigits , 
_S_odigits_end = _S_odigits + 16 , 
_S_oudigits = _S_odigits_end , 
_S_oudigits_end = _S_oudigits + 16 , 
_S_oe = _S_odigits + 14 , 
_S_oE = _S_oudigits + 14 , 
_S_oend = _S_oudigits_end 
} ; 






static const char * _S_atoms_out ; 



static const char * _S_atoms_in ; 

enum 
{ 
_S_iminus , 
_S_iplus , 
_S_ix , 
_S_iX , 
_S_izero , 
_S_ie = _S_izero + 14 , 
_S_iE = _S_izero + 20 , 
_S_iend = 26 
} ; 



static void 
_S_format_float ( const ios_base & __io , char * __fptr , char __mod ) throw ( ) ; 
} ; 

template < typename _CharT > 
struct __numpunct_cache : public locale :: facet 
{ 
const char * _M_grouping ; 
size_t _M_grouping_size ; 
bool _M_use_grouping ; 
const _CharT * _M_truename ; 
size_t _M_truename_size ; 
const _CharT * _M_falsename ; 
size_t _M_falsename_size ; 
_CharT _M_decimal_point ; 
_CharT _M_thousands_sep ; 





_CharT _M_atoms_out [ __num_base :: _S_oend ] ; 





_CharT _M_atoms_in [ __num_base :: _S_iend ] ; 

bool _M_allocated ; 

__numpunct_cache ( size_t __refs = 0 ) 
: facet ( __refs ) , _M_grouping ( 0 ) , _M_grouping_size ( 0 ) , 
_M_use_grouping ( false ) , 
_M_truename ( 0 ) , _M_truename_size ( 0 ) , _M_falsename ( 0 ) , 
_M_falsename_size ( 0 ) , _M_decimal_point ( _CharT ( ) ) , 
_M_thousands_sep ( _CharT ( ) ) , _M_allocated ( false ) 
{ __CvT__record_line____(__CvT_miT,85,1600);} 

~ __numpunct_cache ( ) ; 

void 
_M_cache ( const locale & __loc ) ; 

private : 
__numpunct_cache & 
operator = ( const __numpunct_cache & ) ; 

explicit 
__numpunct_cache ( const __numpunct_cache & ) ; 
} ; 

template < typename _CharT > 
__numpunct_cache < _CharT >:: ~ __numpunct_cache ( ) 
{ __CvT__record_line____(__CvT_miT,85,1617);
__CvT__record_line____(__CvT_miT,85,1618);if ( _M_allocated ) 
{{ 
__CvT__record_line____(__CvT_miT,85,1620);delete [ ] _M_grouping ; 
__CvT__record_line____(__CvT_miT,85,1621);delete [ ] _M_truename ; 
__CvT__record_line____(__CvT_miT,85,1622);delete [ ] _M_falsename ; 
} 
}} 
# 1640 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
template < typename _CharT > 
class numpunct : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 

typedef __numpunct_cache < _CharT > __cache_type ; 

protected : 
__cache_type * _M_data ; 

public : 

static locale :: id id ; 






explicit 
numpunct ( size_t __refs = 0 ) 
: facet ( __refs ) , _M_data ( 0 ) 
{ __CvT__record_line____(__CvT_miT,85,1667);_M_initialize_numpunct ( ) ; } 
# 1678 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
explicit 
numpunct ( __cache_type * __cache , size_t __refs = 0 ) 
: facet ( __refs ) , _M_data ( __cache ) 
{ __CvT__record_line____(__CvT_miT,85,1681);_M_initialize_numpunct ( ) ; } 
# 1692 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
explicit 
numpunct ( __c_locale __cloc , size_t __refs = 0 ) 
: facet ( __refs ) , _M_data ( 0 ) 
{ __CvT__record_line____(__CvT_miT,85,1695);_M_initialize_numpunct ( __cloc ) ; } 
# 1706 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char_type 
decimal_point ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1708);return this -> do_decimal_point ( ) ; } 
# 1719 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
char_type 
thousands_sep ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1721);return this -> do_thousands_sep ( ) ; } 
# 1750 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
string 
grouping ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1752);return this -> do_grouping ( ) ; } 
# 1763 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
string_type 
truename ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1765);return this -> do_truename ( ) ; } 
# 1776 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
string_type 
falsename ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1778);return this -> do_falsename ( ) ; } 

protected : 

virtual 
~ numpunct ( ) ; 
# 1793 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_decimal_point ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1795);return _M_data -> _M_decimal_point ; } 
# 1805 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual char_type 
do_thousands_sep ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1807);return _M_data -> _M_thousands_sep ; } 
# 1818 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual string 
do_grouping ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1820);return _M_data -> _M_grouping ; } 
# 1831 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual string_type 
do_truename ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1833);return _M_data -> _M_truename ; } 
# 1844 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual string_type 
do_falsename ( ) const 
{ __CvT__record_line____(__CvT_miT,85,1846);return _M_data -> _M_falsename ; } 


void 
_M_initialize_numpunct ( __c_locale __cloc = 0 ) ; 
} ; 

template < typename _CharT > 
locale :: id numpunct < _CharT >:: id ; 

template <> 
numpunct < char >:: ~ numpunct ( ) ; 

template <> 
void 
numpunct < char >:: _M_initialize_numpunct ( __c_locale __cloc ) ; 


template <> 
numpunct < wchar_t >:: ~ numpunct ( ) ; 

template <> 
void 
numpunct < wchar_t >:: _M_initialize_numpunct ( __c_locale __cloc ) ; 



template < typename _CharT > 
class numpunct_byname : public numpunct < _CharT > 
{ 
public : 
typedef _CharT char_type ; 
typedef basic_string < _CharT > string_type ; 

explicit 
numpunct_byname ( const char * __s , size_t __refs = 0 ) 
: numpunct < _CharT > ( __refs ) 
{ __CvT__record_line____(__CvT_miT,85,1883);
__CvT__record_line____(__CvT_miT,85,1884);if ( __builtin_strcmp ( __s , "C" ) != 0 
&& __builtin_strcmp ( __s , "POSIX" ) != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,85,1887);__c_locale __tmp ; 
__CvT__record_line____(__CvT_miT,85,1888);this -> _S_create_c_locale ( __tmp , __s ) ; 
__CvT__record_line____(__CvT_miT,85,1889);this -> _M_initialize_numpunct ( __tmp ) ; 
__CvT__record_line____(__CvT_miT,85,1890);this -> _S_destroy_c_locale ( __tmp ) ; 
} 
}} 

protected : 
virtual 
~ numpunct_byname ( ) { __CvT__record_line____(__CvT_miT,85,1896);} 
} ; 


# 1914 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
template < typename _CharT , typename _InIter > 
class num_get : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef _InIter iter_type ; 



static locale :: id id ; 
# 1935 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
explicit 
num_get ( size_t __refs = 0 ) : facet ( __refs ) { __CvT__record_line____(__CvT_miT,85,1936);} 
# 1961 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , bool & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,1964);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 
# 1998 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2001);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned short & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2006);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned int & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2011);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2016);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 


iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2022);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2027);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 
# 2058 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , float & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2061);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , double & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2066);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long double & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2071);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 
# 2101 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
iter_type 
get ( iter_type __in , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , void *& __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2104);return this -> do_get ( __in , __end , __io , __err , __v ) ; } 

protected : 

virtual ~ num_get ( ) { __CvT__record_line____(__CvT_miT,85,2108);} 

iter_type 
_M_extract_float ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
string & ) const ; 

template < typename _ValueT > 
iter_type 
_M_extract_int ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
_ValueT & ) const ; 

template < typename _CharT2 > 
typename __gnu_cxx :: __enable_if < __is_char < _CharT2 >:: __value , int >:: __type 
_M_find ( const _CharT2 * , size_t __len , _CharT2 __c ) const 
{ __CvT__record_line____(__CvT_miT,85,2122);
__CvT__record_line____(__CvT_miT,85,2123);int __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,85,2124);if ( __len <= 10 ) 
{{ 
__CvT__record_line____(__CvT_miT,85,2126);if ( __c >= _CharT2 ( '0' ) && __c < _CharT2 ( _CharT2 ( '0' ) + __len ) ) 
{__CvT__record_line____(__CvT_miT,85,2127);__ret = __c - _CharT2 ( '0' ) ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,85,2131);if ( __c >= _CharT2 ( '0' ) && __c <= _CharT2 ( '9' ) ) 
{__CvT__record_line____(__CvT_miT,85,2132);__ret = __c - _CharT2 ( '0' ) ; 
}else {__CvT__record_line____(__CvT_miT,85,2133);if ( __c >= _CharT2 ( 'a' ) && __c <= _CharT2 ( 'f' ) ) 
{__CvT__record_line____(__CvT_miT,85,2134);__ret = 10 + ( __c - _CharT2 ( 'a' ) ) ; 
}else {__CvT__record_line____(__CvT_miT,85,2135);if ( __c >= _CharT2 ( 'A' ) && __c <= _CharT2 ( 'F' ) ) 
{__CvT__record_line____(__CvT_miT,85,2136);__ret = 10 + ( __c - _CharT2 ( 'A' ) ) ; 
}}}} 
}__CvT__record_line____(__CvT_miT,85,2138);return __ret ; 
} 

template < typename _CharT2 > 
typename __gnu_cxx :: __enable_if <! __is_char < _CharT2 >:: __value , 
int >:: __type 
_M_find ( const _CharT2 * __zero , size_t __len , _CharT2 __c ) const 
{ __CvT__record_line____(__CvT_miT,85,2145);
__CvT__record_line____(__CvT_miT,85,2146);int __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,85,2147);const char_type * __q = char_traits < _CharT2 >:: find ( __zero , __len , __c ) ; 
__CvT__record_line____(__CvT_miT,85,2148);if ( __q ) 
{{ 
__CvT__record_line____(__CvT_miT,85,2150);__ret = __q - __zero ; 
__CvT__record_line____(__CvT_miT,85,2151);if ( __ret > 15 ) 
{__CvT__record_line____(__CvT_miT,85,2152);__ret -= 6 ; 
}} 
}__CvT__record_line____(__CvT_miT,85,2154);return __ret ; 
} 
# 2172 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , bool & ) const ; 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2178);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned short & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2183);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned int & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2188);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2193);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 


virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2199);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 

virtual iter_type 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , unsigned long long & __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2204);return _M_extract_int ( __beg , __end , __io , __err , __v ) ; } 


virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , float & ) const ; 

virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
double & ) const ; 







virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , 
long double & ) const ; 


virtual iter_type 
do_get ( iter_type , iter_type , ios_base & , ios_base :: iostate & , void *& ) const ; 
# 2235 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
} ; 

template < typename _CharT , typename _InIter > 
locale :: id num_get < _CharT , _InIter >:: id ; 
# 2253 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
template < typename _CharT , typename _OutIter > 
class num_put : public locale :: facet 
{ 
public : 



typedef _CharT char_type ; 
typedef _OutIter iter_type ; 



static locale :: id id ; 
# 2274 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
explicit 
num_put ( size_t __refs = 0 ) : facet ( __refs ) { __CvT__record_line____(__CvT_miT,85,2275);} 
# 2292 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , bool __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2294);return this -> do_put ( __s , __io , __fill , __v ) ; } 
# 2334 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , long __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2336);return this -> do_put ( __s , __io , __fill , __v ) ; } 

iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2341);return this -> do_put ( __s , __io , __fill , __v ) ; } 


iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , long long __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2346);return this -> do_put ( __s , __io , __fill , __v ) ; } 

iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long long __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2351);return this -> do_put ( __s , __io , __fill , __v ) ; } 
# 2397 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , double __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2399);return this -> do_put ( __s , __io , __fill , __v ) ; } 

iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
long double __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2404);return this -> do_put ( __s , __io , __fill , __v ) ; } 
# 2422 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
iter_type 
put ( iter_type __s , ios_base & __io , char_type __fill , 
const void * __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2425);return this -> do_put ( __s , __io , __fill , __v ) ; } 

protected : 
template < typename _ValueT > 
iter_type 
_M_insert_float ( iter_type , ios_base & __io , char_type __fill , 
char __mod , _ValueT __v ) const ; 

void 
_M_group_float ( const char * __grouping , size_t __grouping_size , 
char_type __sep , const char_type * __p , char_type * __new , 
char_type * __cs , int & __len ) const ; 

template < typename _ValueT > 
iter_type 
_M_insert_int ( iter_type , ios_base & __io , char_type __fill , 
_ValueT __v ) const ; 

void 
_M_group_int ( const char * __grouping , size_t __grouping_size , 
char_type __sep , ios_base & __io , char_type * __new , 
char_type * __cs , int & __len ) const ; 

void 
_M_pad ( char_type __fill , streamsize __w , ios_base & __io , 
char_type * __new , const char_type * __cs , int & __len ) const ; 


virtual 
~ num_put ( ) { __CvT__record_line____(__CvT_miT,85,2454);} ; 
# 2470 "/usr/include/c++/4.8/bits/locale_facets.h" 3 
virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , bool __v ) const ; 

virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , long __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2475);return _M_insert_int ( __s , __io , __fill , __v ) ; } 

virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2480);return _M_insert_int ( __s , __io , __fill , __v ) ; } 


virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
long long __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2486);return _M_insert_int ( __s , __io , __fill , __v ) ; } 

virtual iter_type 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
unsigned long long __v ) const 
{ __CvT__record_line____(__CvT_miT,85,2491);return _M_insert_int ( __s , __io , __fill , __v ) ; } 


virtual iter_type 
do_put ( iter_type , ios_base & , char_type , double ) const ; 






virtual iter_type 
do_put ( iter_type , ios_base & , char_type , long double ) const ; 


virtual iter_type 
do_put ( iter_type , ios_base & , char_type , const void * ) const ; 







} ; 

template < typename _CharT , typename _OutIter > 
locale :: id num_put < _CharT , _OutIter >:: id ; 









template < typename _CharT > 
inline bool 
isspace ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2531);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: space , __c ) ; } 


template < typename _CharT > 
inline bool 
isprint ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2537);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: print , __c ) ; } 


template < typename _CharT > 
inline bool 
iscntrl ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2543);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: cntrl , __c ) ; } 


template < typename _CharT > 
inline bool 
isupper ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2549);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: upper , __c ) ; } 


template < typename _CharT > 
inline bool 
islower ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2555);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: lower , __c ) ; } 


template < typename _CharT > 
inline bool 
isalpha ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2561);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: alpha , __c ) ; } 


template < typename _CharT > 
inline bool 
isdigit ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2567);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: digit , __c ) ; } 


template < typename _CharT > 
inline bool 
ispunct ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2573);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: punct , __c ) ; } 


template < typename _CharT > 
inline bool 
isxdigit ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2579);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: xdigit , __c ) ; } 


template < typename _CharT > 
inline bool 
isalnum ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2585);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: alnum , __c ) ; } 


template < typename _CharT > 
inline bool 
isgraph ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2591);return use_facet < ctype < _CharT > > ( __loc ) . is ( ctype_base :: graph , __c ) ; } 


template < typename _CharT > 
inline _CharT 
toupper ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2597);return use_facet < ctype < _CharT > > ( __loc ) . toupper ( __c ) ; } 


template < typename _CharT > 
inline _CharT 
tolower ( _CharT __c , const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,85,2603);return use_facet < ctype < _CharT > > ( __loc ) . tolower ( __c ) ; } 


} 

# 1 "/usr/include/c++/4.8/bits/locale_facets.tcc" 1 3 
# 33 "/usr/include/c++/4.8/bits/locale_facets.tcc" 3 

# 34 "/usr/include/c++/4.8/bits/locale_facets.tcc" 3 

namespace std 
{ 




template < typename _Facet > 
struct __use_cache 
{ 
const _Facet * 
operator ( ) ( const locale & __loc ) const ; 
} ; 


template < typename _CharT > 
struct __use_cache < __numpunct_cache < _CharT > > 
{ 
const __numpunct_cache < _CharT >* 
operator ( ) ( const locale & __loc ) const 
{ __CvT__record_line____(__CvT_miT,91,54);
__CvT__record_line____(__CvT_miT,91,55);const size_t __i = numpunct < _CharT >:: id . _M_id ( ) ; 
__CvT__record_line____(__CvT_miT,91,56);const locale :: facet ** __caches = __loc . _M_impl -> _M_caches ; 
__CvT__record_line____(__CvT_miT,91,57);if ( ! __caches [ __i ] ) 
{{ 
__CvT__record_line____(__CvT_miT,91,59);__numpunct_cache < _CharT >* __tmp = 0 ; 
__CvT__record_line____(__CvT_miT,91,60);try 
{ 
__CvT__record_line____(__CvT_miT,91,62);__tmp = new __numpunct_cache < _CharT > ; 
__CvT__record_line____(__CvT_miT,91,63);__tmp -> _M_cache ( __loc ) ; 
} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,91,67);delete __tmp ; 
__CvT__record_line____(__CvT_miT,91,68);throw ; 
} 
__CvT__record_line____(__CvT_miT,91,70);__loc . _M_impl -> _M_install_cache ( __tmp , __i ) ; 
} 
}__CvT__record_line____(__CvT_miT,91,72);return static_cast < const __numpunct_cache < _CharT >*> ( __caches [ __i ] ) ; 
} 
} ; 

template < typename _CharT > 
void 
__numpunct_cache < _CharT >:: _M_cache ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,91,79);
__CvT__record_line____(__CvT_miT,91,80);_M_allocated = true ; 

__CvT__record_line____(__CvT_miT,91,82);const numpunct < _CharT >& __np = use_facet < numpunct < _CharT > > ( __loc ) ; 

__CvT__record_line____(__CvT_miT,91,84);char * __grouping = 0 ; 
__CvT__record_line____(__CvT_miT,91,85);_CharT * __truename = 0 ; 
__CvT__record_line____(__CvT_miT,91,86);_CharT * __falsename = 0 ; 
__CvT__record_line____(__CvT_miT,91,87);try 
{ 
__CvT__record_line____(__CvT_miT,91,89);_M_grouping_size = __np . grouping ( ) . size ( ) ; 
__CvT__record_line____(__CvT_miT,91,90);__grouping = new char [ _M_grouping_size ] ; 
__CvT__record_line____(__CvT_miT,91,91);__np . grouping ( ) . copy ( __grouping , _M_grouping_size ) ; 
__CvT__record_line____(__CvT_miT,91,92);_M_grouping = __grouping ; 
__CvT__record_line____(__CvT_miT,91,93);_M_use_grouping = ( _M_grouping_size 
&& static_cast < signed char > ( _M_grouping [ 0 ] ) > 0 
&& ( _M_grouping [ 0 ] 
!= __gnu_cxx :: __numeric_traits < char >:: __max ) ) ; 

__CvT__record_line____(__CvT_miT,91,98);_M_truename_size = __np . truename ( ) . size ( ) ; 
__CvT__record_line____(__CvT_miT,91,99);__truename = new _CharT [ _M_truename_size ] ; 
__CvT__record_line____(__CvT_miT,91,100);__np . truename ( ) . copy ( __truename , _M_truename_size ) ; 
__CvT__record_line____(__CvT_miT,91,101);_M_truename = __truename ; 

__CvT__record_line____(__CvT_miT,91,103);_M_falsename_size = __np . falsename ( ) . size ( ) ; 
__CvT__record_line____(__CvT_miT,91,104);__falsename = new _CharT [ _M_falsename_size ] ; 
__CvT__record_line____(__CvT_miT,91,105);__np . falsename ( ) . copy ( __falsename , _M_falsename_size ) ; 
__CvT__record_line____(__CvT_miT,91,106);_M_falsename = __falsename ; 

__CvT__record_line____(__CvT_miT,91,108);_M_decimal_point = __np . decimal_point ( ) ; 
__CvT__record_line____(__CvT_miT,91,109);_M_thousands_sep = __np . thousands_sep ( ) ; 

__CvT__record_line____(__CvT_miT,91,111);const ctype < _CharT >& __ct = use_facet < ctype < _CharT > > ( __loc ) ; 
__CvT__record_line____(__CvT_miT,91,112);__ct . widen ( __num_base :: _S_atoms_out , 
__num_base :: _S_atoms_out 
+ __num_base :: _S_oend , _M_atoms_out ) ; 
__CvT__record_line____(__CvT_miT,91,115);__ct . widen ( __num_base :: _S_atoms_in , 
__num_base :: _S_atoms_in 
+ __num_base :: _S_iend , _M_atoms_in ) ; 
} 
catch ( ... ) 
{ 
__CvT__record_line____(__CvT_miT,91,121);delete [ ] __grouping ; 
__CvT__record_line____(__CvT_miT,91,122);delete [ ] __truename ; 
__CvT__record_line____(__CvT_miT,91,123);delete [ ] __falsename ; 
__CvT__record_line____(__CvT_miT,91,124);throw ; 
} 
} 
# 136 "/usr/include/c++/4.8/bits/locale_facets.tcc" 3 
bool 
__verify_grouping ( const char * __grouping , size_t __grouping_size , 
const string & __grouping_tmp ) throw ( ) ; 



template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
_M_extract_float ( _InIter __beg , _InIter __end , ios_base & __io , 
ios_base :: iostate & __err , string & __xtrc ) const 
{ __CvT__record_line____(__CvT_miT,91,147);
typedef char_traits < _CharT > __traits_type ; 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,91,150);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,91,151);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,91,152);const __cache_type * __lc = __uc ( __loc ) ; 
__CvT__record_line____(__CvT_miT,91,153);const _CharT * __lit = __lc -> _M_atoms_in ; 
__CvT__record_line____(__CvT_miT,91,154);char_type __c = char_type ( ) ; 


__CvT__record_line____(__CvT_miT,91,157);bool __testeof = __beg == __end ; 


__CvT__record_line____(__CvT_miT,91,160);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,91,162);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,91,163);const bool __plus = __c == __lit [ __num_base :: _S_iplus ] ; 
__CvT__record_line____(__CvT_miT,91,164);if ( ( __plus || __c == __lit [ __num_base :: _S_iminus ] ) 
&& ! ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
&& ! ( __c == __lc -> _M_decimal_point ) ) 
{{ 
__CvT__record_line____(__CvT_miT,91,168);__xtrc += __plus ? '+' : '-' ; 
__CvT__record_line____(__CvT_miT,91,169);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,91,170);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,91,172);__testeof = true ; 
}} 
}} 


}__CvT__record_line____(__CvT_miT,91,177);bool __found_mantissa = false ; 
__CvT__record_line____(__CvT_miT,91,178);int __sep_pos = 0 ; 
__CvT__record_line____(__CvT_miT,91,179);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,91,181);if ( ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
|| __c == __lc -> _M_decimal_point ) 
{__CvT__record_line____(__CvT_miT,91,183);break ; 
}else {__CvT__record_line____(__CvT_miT,91,184);if ( __c == __lit [ __num_base :: _S_izero ] ) 
{{ 
__CvT__record_line____(__CvT_miT,91,186);if ( ! __found_mantissa ) 
{{ 
__CvT__record_line____(__CvT_miT,91,188);__xtrc += '0' ; 
__CvT__record_line____(__CvT_miT,91,189);__found_mantissa = true ; 
} 
}__CvT__record_line____(__CvT_miT,91,191);++ __sep_pos ; 

__CvT__record_line____(__CvT_miT,91,193);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,91,194);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,91,196);__testeof = true ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,91,199);break ; 
}}} 


}__CvT__record_line____(__CvT_miT,91,203);bool __found_dec = false ; 
__CvT__record_line____(__CvT_miT,91,204);bool __found_sci = false ; 
__CvT__record_line____(__CvT_miT,91,205);string __found_grouping ; 
__CvT__record_line____(__CvT_miT,91,206);if ( __lc -> _M_use_grouping ) 
{__CvT__record_line____(__CvT_miT,91,207);__found_grouping . reserve ( 32 ) ; 
}__CvT__record_line____(__CvT_miT,91,208);const char_type * __lit_zero = __lit + __num_base :: _S_izero ; 

__CvT__record_line____(__CvT_miT,91,210);if ( ! __lc -> _M_allocated ) 

{__CvT__record_line____(__CvT_miT,91,212);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,91,214);const int __digit = _M_find ( __lit_zero , 10 , __c ) ; 
__CvT__record_line____(__CvT_miT,91,215);if ( __digit != - 1 ) 
{{ 
__CvT__record_line____(__CvT_miT,91,217);__xtrc += '0' + __digit ; 
__CvT__record_line____(__CvT_miT,91,218);__found_mantissa = true ; 
} 
}else {__CvT__record_line____(__CvT_miT,91,220);if ( __c == __lc -> _M_decimal_point 
&& ! __found_dec && ! __found_sci ) 
{{ 
__CvT__record_line____(__CvT_miT,91,223);__xtrc += '.' ; 
__CvT__record_line____(__CvT_miT,91,224);__found_dec = true ; 
} 
}else {__CvT__record_line____(__CvT_miT,91,226);if ( ( __c == __lit [ __num_base :: _S_ie ] 
|| __c == __lit [ __num_base :: _S_iE ] ) 
&& ! __found_sci && __found_mantissa ) 
{{ 

__CvT__record_line____(__CvT_miT,91,231);__xtrc += 'e' ; 
__CvT__record_line____(__CvT_miT,91,232);__found_sci = true ; 


__CvT__record_line____(__CvT_miT,91,235);if ( ++ __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,91,237);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,91,238);const bool __plus = __c == __lit [ __num_base :: _S_iplus ] ; 
__CvT__record_line____(__CvT_miT,91,239);if ( __plus || __c == __lit [ __num_base :: _S_iminus ] ) 
{__CvT__record_line____(__CvT_miT,91,240);__xtrc += __plus ? '+' : '-' ; 
}else {
__CvT__record_line____(__CvT_miT,91,242);continue ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,91,246);__testeof = true ; 
__CvT__record_line____(__CvT_miT,91,247);break ; 
} 
}} 
}else {
__CvT__record_line____(__CvT_miT,91,251);break ; 

}}}__CvT__record_line____(__CvT_miT,91,253);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,91,254);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,91,256);__testeof = true ; 
}} 
}}else {
__CvT__record_line____(__CvT_miT,91,259);while ( ! __testeof ) 
{{ 


__CvT__record_line____(__CvT_miT,91,263);if ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
{{ 
__CvT__record_line____(__CvT_miT,91,265);if ( ! __found_dec && ! __found_sci ) 
{{ 


__CvT__record_line____(__CvT_miT,91,269);if ( __sep_pos ) 
{{ 
__CvT__record_line____(__CvT_miT,91,271);__found_grouping += static_cast < char > ( __sep_pos ) ; 
__CvT__record_line____(__CvT_miT,91,272);__sep_pos = 0 ; 
} 
}else {
{ 


__CvT__record_line____(__CvT_miT,91,278);__xtrc . clear ( ) ; 
__CvT__record_line____(__CvT_miT,91,279);break ; 
} 
}} 
}else {
__CvT__record_line____(__CvT_miT,91,283);break ; 
}} 
}else {__CvT__record_line____(__CvT_miT,91,285);if ( __c == __lc -> _M_decimal_point ) 
{{ 
__CvT__record_line____(__CvT_miT,91,287);if ( ! __found_dec && ! __found_sci ) 
{{ 



__CvT__record_line____(__CvT_miT,91,292);if ( __found_grouping . size ( ) ) 
{__CvT__record_line____(__CvT_miT,91,293);__found_grouping += static_cast < char > ( __sep_pos ) ; 
}__CvT__record_line____(__CvT_miT,91,294);__xtrc += '.' ; 
__CvT__record_line____(__CvT_miT,91,295);__found_dec = true ; 
} 
}else {
__CvT__record_line____(__CvT_miT,91,298);break ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,91,302);const char_type * __q = 
__traits_type :: find ( __lit_zero , 10 , __c ) ; 
__CvT__record_line____(__CvT_miT,91,304);if ( __q ) 
{{ 
__CvT__record_line____(__CvT_miT,91,306);__xtrc += '0' + ( __q - __lit_zero ) ; 
__CvT__record_line____(__CvT_miT,91,307);__found_mantissa = true ; 
__CvT__record_line____(__CvT_miT,91,308);++ __sep_pos ; 
} 
}else {__CvT__record_line____(__CvT_miT,91,310);if ( ( __c == __lit [ __num_base :: _S_ie ] 
|| __c == __lit [ __num_base :: _S_iE ] ) 
&& ! __found_sci && __found_mantissa ) 
{{ 

__CvT__record_line____(__CvT_miT,91,315);if ( __found_grouping . size ( ) && ! __found_dec ) 
{__CvT__record_line____(__CvT_miT,91,316);__found_grouping += static_cast < char > ( __sep_pos ) ; 
}__CvT__record_line____(__CvT_miT,91,317);__xtrc += 'e' ; 
__CvT__record_line____(__CvT_miT,91,318);__found_sci = true ; 


__CvT__record_line____(__CvT_miT,91,321);if ( ++ __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,91,323);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,91,324);const bool __plus = __c == __lit [ __num_base :: _S_iplus ] ; 
__CvT__record_line____(__CvT_miT,91,325);if ( ( __plus || __c == __lit [ __num_base :: _S_iminus ] ) 
&& ! ( __lc -> _M_use_grouping 
&& __c == __lc -> _M_thousands_sep ) 
&& ! ( __c == __lc -> _M_decimal_point ) ) 
{__CvT__record_line____(__CvT_miT,91,329);__xtrc += __plus ? '+' : '-' ; 
}else {
__CvT__record_line____(__CvT_miT,91,331);continue ; 
}} 
}else {
{ 
__CvT__record_line____(__CvT_miT,91,335);__testeof = true ; 
__CvT__record_line____(__CvT_miT,91,336);break ; 
} 
}} 
}else {
__CvT__record_line____(__CvT_miT,91,340);break ; 
}}} 

}}__CvT__record_line____(__CvT_miT,91,343);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,91,344);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,91,346);__testeof = true ; 
}} 



}}__CvT__record_line____(__CvT_miT,91,351);if ( __found_grouping . size ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,91,354);if ( ! __found_dec && ! __found_sci ) 
{__CvT__record_line____(__CvT_miT,91,355);__found_grouping += static_cast < char > ( __sep_pos ) ; 

}__CvT__record_line____(__CvT_miT,91,357);if ( ! std :: __verify_grouping ( __lc -> _M_grouping , 
__lc -> _M_grouping_size , 
__found_grouping ) ) 
{__CvT__record_line____(__CvT_miT,91,360);__err = ios_base :: failbit ; 
}} 

}__CvT__record_line____(__CvT_miT,91,363);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
template < typename _ValueT > 
_InIter 
num_get < _CharT , _InIter >:: 
_M_extract_int ( _InIter __beg , _InIter __end , ios_base & __io , 
ios_base :: iostate & __err , _ValueT & __v ) const 
{ __CvT__record_line____(__CvT_miT,91,372);
typedef char_traits < _CharT > __traits_type ; 
using __gnu_cxx :: __add_unsigned ; 
typedef typename __add_unsigned < _ValueT >:: __type __unsigned_type ; 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,91,377);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,91,378);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,91,379);const __cache_type * __lc = __uc ( __loc ) ; 
__CvT__record_line____(__CvT_miT,91,380);const _CharT * __lit = __lc -> _M_atoms_in ; 
__CvT__record_line____(__CvT_miT,91,381);char_type __c = char_type ( ) ; 


__CvT__record_line____(__CvT_miT,91,384);const ios_base :: fmtflags __basefield = __io . flags ( ) 
& ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,91,386);const bool __oct = __basefield == ios_base :: oct ; 
__CvT__record_line____(__CvT_miT,91,387);int __base = __oct ? 8 : ( __basefield == ios_base :: hex ? 16 : 10 ) ; 


__CvT__record_line____(__CvT_miT,91,390);bool __testeof = __beg == __end ; 


__CvT__record_line____(__CvT_miT,91,393);bool __negative = false ; 
__CvT__record_line____(__CvT_miT,91,394);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,91,396);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,91,397);__negative = __c == __lit [ __num_base :: _S_iminus ] ; 
__CvT__record_line____(__CvT_miT,91,398);if ( ( __negative || __c == __lit [ __num_base :: _S_iplus ] ) 
&& ! ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
&& ! ( __c == __lc -> _M_decimal_point ) ) 
{{ 
__CvT__record_line____(__CvT_miT,91,402);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,91,403);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,91,405);__testeof = true ; 
}} 
}} 



}__CvT__record_line____(__CvT_miT,91,411);bool __found_zero = false ; 
__CvT__record_line____(__CvT_miT,91,412);int __sep_pos = 0 ; 
__CvT__record_line____(__CvT_miT,91,413);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,91,415);if ( ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
|| __c == __lc -> _M_decimal_point ) 
{__CvT__record_line____(__CvT_miT,91,417);break ; 
}else {__CvT__record_line____(__CvT_miT,91,418);if ( __c == __lit [ __num_base :: _S_izero ] 
&& ( ! __found_zero || __base == 10 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,91,421);__found_zero = true ; 
__CvT__record_line____(__CvT_miT,91,422);++ __sep_pos ; 
__CvT__record_line____(__CvT_miT,91,423);if ( __basefield == 0 ) 
{__CvT__record_line____(__CvT_miT,91,424);__base = 8 ; 
}__CvT__record_line____(__CvT_miT,91,425);if ( __base == 8 ) 
{__CvT__record_line____(__CvT_miT,91,426);__sep_pos = 0 ; 
}} 
}else {__CvT__record_line____(__CvT_miT,91,428);if ( __found_zero 
&& ( __c == __lit [ __num_base :: _S_ix ] 
|| __c == __lit [ __num_base :: _S_iX ] ) ) 
{{ 
__CvT__record_line____(__CvT_miT,91,432);if ( __basefield == 0 ) 
{__CvT__record_line____(__CvT_miT,91,433);__base = 16 ; 
}__CvT__record_line____(__CvT_miT,91,434);if ( __base == 16 ) 
{{ 
__CvT__record_line____(__CvT_miT,91,436);__found_zero = false ; 
__CvT__record_line____(__CvT_miT,91,437);__sep_pos = 0 ; 
} 
}else {
__CvT__record_line____(__CvT_miT,91,440);break ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,91,443);break ; 

}}}__CvT__record_line____(__CvT_miT,91,445);if ( ++ __beg != __end ) 
{{ 
__CvT__record_line____(__CvT_miT,91,447);__c = * __beg ; 
__CvT__record_line____(__CvT_miT,91,448);if ( ! __found_zero ) 
{__CvT__record_line____(__CvT_miT,91,449);break ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,91,452);__testeof = true ; 
}} 



}__CvT__record_line____(__CvT_miT,91,457);const size_t __len = ( __base == 16 ? __num_base :: _S_iend 
- __num_base :: _S_izero : __base ) ; 


__CvT__record_line____(__CvT_miT,91,461);string __found_grouping ; 
__CvT__record_line____(__CvT_miT,91,462);if ( __lc -> _M_use_grouping ) 
{__CvT__record_line____(__CvT_miT,91,463);__found_grouping . reserve ( 32 ) ; 
}__CvT__record_line____(__CvT_miT,91,464);bool __testfail = false ; 
__CvT__record_line____(__CvT_miT,91,465);bool __testoverflow = false ; 
__CvT__record_line____(__CvT_miT,91,466);const __unsigned_type __max = 
( __negative && __gnu_cxx :: __numeric_traits < _ValueT >:: __is_signed ) 
? - __gnu_cxx :: __numeric_traits < _ValueT >:: __min 
: __gnu_cxx :: __numeric_traits < _ValueT >:: __max ; 
__CvT__record_line____(__CvT_miT,91,470);const __unsigned_type __smax = __max / __base ; 
__CvT__record_line____(__CvT_miT,91,471);__unsigned_type __result = 0 ; 
__CvT__record_line____(__CvT_miT,91,472);int __digit = 0 ; 
__CvT__record_line____(__CvT_miT,91,473);const char_type * __lit_zero = __lit + __num_base :: _S_izero ; 

__CvT__record_line____(__CvT_miT,91,475);if ( ! __lc -> _M_allocated ) 

{__CvT__record_line____(__CvT_miT,91,477);while ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,91,479);__digit = _M_find ( __lit_zero , __len , __c ) ; 
__CvT__record_line____(__CvT_miT,91,480);if ( __digit == - 1 ) 
{__CvT__record_line____(__CvT_miT,91,481);break ; 

}__CvT__record_line____(__CvT_miT,91,483);if ( __result > __smax ) 
{__CvT__record_line____(__CvT_miT,91,484);__testoverflow = true ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,91,487);__result *= __base ; 
__CvT__record_line____(__CvT_miT,91,488);__testoverflow |= __result > __max - __digit ; 
__CvT__record_line____(__CvT_miT,91,489);__result += __digit ; 
__CvT__record_line____(__CvT_miT,91,490);++ __sep_pos ; 
} 

}__CvT__record_line____(__CvT_miT,91,493);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,91,494);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,91,496);__testeof = true ; 
}} 
}}else {
__CvT__record_line____(__CvT_miT,91,499);while ( ! __testeof ) 
{{ 


__CvT__record_line____(__CvT_miT,91,503);if ( __lc -> _M_use_grouping && __c == __lc -> _M_thousands_sep ) 
{{ 


__CvT__record_line____(__CvT_miT,91,507);if ( __sep_pos ) 
{{ 
__CvT__record_line____(__CvT_miT,91,509);__found_grouping += static_cast < char > ( __sep_pos ) ; 
__CvT__record_line____(__CvT_miT,91,510);__sep_pos = 0 ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,91,514);__testfail = true ; 
__CvT__record_line____(__CvT_miT,91,515);break ; 
} 
}} 
}else {__CvT__record_line____(__CvT_miT,91,518);if ( __c == __lc -> _M_decimal_point ) 
{__CvT__record_line____(__CvT_miT,91,519);break ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,91,522);const char_type * __q = 
__traits_type :: find ( __lit_zero , __len , __c ) ; 
__CvT__record_line____(__CvT_miT,91,524);if ( ! __q ) 
{__CvT__record_line____(__CvT_miT,91,525);break ; 

}__CvT__record_line____(__CvT_miT,91,527);__digit = __q - __lit_zero ; 
__CvT__record_line____(__CvT_miT,91,528);if ( __digit > 15 ) 
{__CvT__record_line____(__CvT_miT,91,529);__digit -= 6 ; 
}__CvT__record_line____(__CvT_miT,91,530);if ( __result > __smax ) 
{__CvT__record_line____(__CvT_miT,91,531);__testoverflow = true ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,91,534);__result *= __base ; 
__CvT__record_line____(__CvT_miT,91,535);__testoverflow |= __result > __max - __digit ; 
__CvT__record_line____(__CvT_miT,91,536);__result += __digit ; 
__CvT__record_line____(__CvT_miT,91,537);++ __sep_pos ; 
} 
}} 

}}__CvT__record_line____(__CvT_miT,91,541);if ( ++ __beg != __end ) 
{__CvT__record_line____(__CvT_miT,91,542);__c = * __beg ; 
}else {
__CvT__record_line____(__CvT_miT,91,544);__testeof = true ; 
}} 



}}__CvT__record_line____(__CvT_miT,91,549);if ( __found_grouping . size ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,91,552);__found_grouping += static_cast < char > ( __sep_pos ) ; 

__CvT__record_line____(__CvT_miT,91,554);if ( ! std :: __verify_grouping ( __lc -> _M_grouping , 
__lc -> _M_grouping_size , 
__found_grouping ) ) 
{__CvT__record_line____(__CvT_miT,91,557);__err = ios_base :: failbit ; 
}} 



}__CvT__record_line____(__CvT_miT,91,562);if ( ( ! __sep_pos && ! __found_zero && ! __found_grouping . size ( ) ) 
|| __testfail ) 
{{ 
__CvT__record_line____(__CvT_miT,91,565);__v = 0 ; 
__CvT__record_line____(__CvT_miT,91,566);__err = ios_base :: failbit ; 
} 
}else {__CvT__record_line____(__CvT_miT,91,568);if ( __testoverflow ) 
{{ 
__CvT__record_line____(__CvT_miT,91,570);if ( __negative 
&& __gnu_cxx :: __numeric_traits < _ValueT >:: __is_signed ) 
{__CvT__record_line____(__CvT_miT,91,572);__v = __gnu_cxx :: __numeric_traits < _ValueT >:: __min ; 
}else {
__CvT__record_line____(__CvT_miT,91,574);__v = __gnu_cxx :: __numeric_traits < _ValueT >:: __max ; 
}__CvT__record_line____(__CvT_miT,91,575);__err = ios_base :: failbit ; 
} 
}else {
__CvT__record_line____(__CvT_miT,91,578);__v = __negative ? - __result : __result ; 

}}__CvT__record_line____(__CvT_miT,91,580);if ( __testeof ) 
{__CvT__record_line____(__CvT_miT,91,581);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,91,582);return __beg ; 
} 



template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , bool & __v ) const 
{ __CvT__record_line____(__CvT_miT,91,592);
__CvT__record_line____(__CvT_miT,91,593);if ( ! ( __io . flags ( ) & ios_base :: boolalpha ) ) 
{{ 



__CvT__record_line____(__CvT_miT,91,598);long __l = - 1 ; 
__CvT__record_line____(__CvT_miT,91,599);__beg = _M_extract_int ( __beg , __end , __io , __err , __l ) ; 
__CvT__record_line____(__CvT_miT,91,600);if ( __l == 0 || __l == 1 ) 
{__CvT__record_line____(__CvT_miT,91,601);__v = bool ( __l ) ; 
}else {
{ 


__CvT__record_line____(__CvT_miT,91,606);__v = true ; 
__CvT__record_line____(__CvT_miT,91,607);__err = ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,91,608);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,91,609);__err |= ios_base :: eofbit ; 
}} 
}} 
}else {
{ 

typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,91,616);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,91,617);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,91,618);const __cache_type * __lc = __uc ( __loc ) ; 

__CvT__record_line____(__CvT_miT,91,620);bool __testf = true ; 
__CvT__record_line____(__CvT_miT,91,621);bool __testt = true ; 
__CvT__record_line____(__CvT_miT,91,622);bool __donef = __lc -> _M_falsename_size == 0 ; 
__CvT__record_line____(__CvT_miT,91,623);bool __donet = __lc -> _M_truename_size == 0 ; 
__CvT__record_line____(__CvT_miT,91,624);bool __testeof = false ; 
__CvT__record_line____(__CvT_miT,91,625);size_t __n = 0 ; 
__CvT__record_line____(__CvT_miT,91,626);while ( ! __donef || ! __donet ) 
{{ 
__CvT__record_line____(__CvT_miT,91,628);if ( __beg == __end ) 
{{ 
__CvT__record_line____(__CvT_miT,91,630);__testeof = true ; 
__CvT__record_line____(__CvT_miT,91,631);break ; 
} 

}__CvT__record_line____(__CvT_miT,91,634);const char_type __c = * __beg ; 

__CvT__record_line____(__CvT_miT,91,636);if ( ! __donef ) 
{__CvT__record_line____(__CvT_miT,91,637);__testf = __c == __lc -> _M_falsename [ __n ] ; 

}__CvT__record_line____(__CvT_miT,91,639);if ( ! __testf && __donet ) 
{__CvT__record_line____(__CvT_miT,91,640);break ; 

}__CvT__record_line____(__CvT_miT,91,642);if ( ! __donet ) 
{__CvT__record_line____(__CvT_miT,91,643);__testt = __c == __lc -> _M_truename [ __n ] ; 

}__CvT__record_line____(__CvT_miT,91,645);if ( ! __testt && __donef ) 
{__CvT__record_line____(__CvT_miT,91,646);break ; 

}__CvT__record_line____(__CvT_miT,91,648);if ( ! __testt && ! __testf ) 
{__CvT__record_line____(__CvT_miT,91,649);break ; 

}__CvT__record_line____(__CvT_miT,91,651);++ __n ; 
__CvT__record_line____(__CvT_miT,91,652);++ __beg ; 

__CvT__record_line____(__CvT_miT,91,654);__donef = ! __testf || __n >= __lc -> _M_falsename_size ; 
__CvT__record_line____(__CvT_miT,91,655);__donet = ! __testt || __n >= __lc -> _M_truename_size ; 
} 
}__CvT__record_line____(__CvT_miT,91,657);if ( __testf && __n == __lc -> _M_falsename_size && __n ) 
{{ 
__CvT__record_line____(__CvT_miT,91,659);__v = false ; 
__CvT__record_line____(__CvT_miT,91,660);if ( __testt && __n == __lc -> _M_truename_size ) 
{__CvT__record_line____(__CvT_miT,91,661);__err = ios_base :: failbit ; 
}else {
__CvT__record_line____(__CvT_miT,91,663);__err = __testeof ? ios_base :: eofbit : ios_base :: goodbit ; 
}} 
}else {__CvT__record_line____(__CvT_miT,91,665);if ( __testt && __n == __lc -> _M_truename_size && __n ) 
{{ 
__CvT__record_line____(__CvT_miT,91,667);__v = true ; 
__CvT__record_line____(__CvT_miT,91,668);__err = __testeof ? ios_base :: eofbit : ios_base :: goodbit ; 
} 
}else {
{ 


__CvT__record_line____(__CvT_miT,91,674);__v = false ; 
__CvT__record_line____(__CvT_miT,91,675);__err = ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,91,676);if ( __testeof ) 
{__CvT__record_line____(__CvT_miT,91,677);__err |= ios_base :: eofbit ; 
}} 
}}} 
}__CvT__record_line____(__CvT_miT,91,680);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , float & __v ) const 
{ __CvT__record_line____(__CvT_miT,91,688);
__CvT__record_line____(__CvT_miT,91,689);string __xtrc ; 
__CvT__record_line____(__CvT_miT,91,690);__xtrc . reserve ( 32 ) ; 
__CvT__record_line____(__CvT_miT,91,691);__beg = _M_extract_float ( __beg , __end , __io , __err , __xtrc ) ; 
__CvT__record_line____(__CvT_miT,91,692);std :: __convert_to_v ( __xtrc . c_str ( ) , __v , __err , _S_get_c_locale ( ) ) ; 
__CvT__record_line____(__CvT_miT,91,693);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,91,694);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,91,695);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , double & __v ) const 
{ __CvT__record_line____(__CvT_miT,91,703);
__CvT__record_line____(__CvT_miT,91,704);string __xtrc ; 
__CvT__record_line____(__CvT_miT,91,705);__xtrc . reserve ( 32 ) ; 
__CvT__record_line____(__CvT_miT,91,706);__beg = _M_extract_float ( __beg , __end , __io , __err , __xtrc ) ; 
__CvT__record_line____(__CvT_miT,91,707);std :: __convert_to_v ( __xtrc . c_str ( ) , __v , __err , _S_get_c_locale ( ) ) ; 
__CvT__record_line____(__CvT_miT,91,708);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,91,709);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,91,710);return __beg ; 
} 
# 730 "/usr/include/c++/4.8/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , long double & __v ) const 
{ __CvT__record_line____(__CvT_miT,91,735);
__CvT__record_line____(__CvT_miT,91,736);string __xtrc ; 
__CvT__record_line____(__CvT_miT,91,737);__xtrc . reserve ( 32 ) ; 
__CvT__record_line____(__CvT_miT,91,738);__beg = _M_extract_float ( __beg , __end , __io , __err , __xtrc ) ; 
__CvT__record_line____(__CvT_miT,91,739);std :: __convert_to_v ( __xtrc . c_str ( ) , __v , __err , _S_get_c_locale ( ) ) ; 
__CvT__record_line____(__CvT_miT,91,740);if ( __beg == __end ) 
{__CvT__record_line____(__CvT_miT,91,741);__err |= ios_base :: eofbit ; 
}__CvT__record_line____(__CvT_miT,91,742);return __beg ; 
} 

template < typename _CharT , typename _InIter > 
_InIter 
num_get < _CharT , _InIter >:: 
do_get ( iter_type __beg , iter_type __end , ios_base & __io , 
ios_base :: iostate & __err , void *& __v ) const 
{ __CvT__record_line____(__CvT_miT,91,750);

typedef ios_base :: fmtflags fmtflags ; 
__CvT__record_line____(__CvT_miT,91,753);const fmtflags __fmt = __io . flags ( ) ; 
__CvT__record_line____(__CvT_miT,91,754);__io . flags ( ( __fmt & ~ ios_base :: basefield ) | ios_base :: hex ) ; 

typedef __gnu_cxx :: __conditional_type < ( sizeof ( void * ) 
<= sizeof ( unsigned long ) ) , 
unsigned long , unsigned long long >:: __type _UIntPtrType ; 

__CvT__record_line____(__CvT_miT,91,760);_UIntPtrType __ul ; 
__CvT__record_line____(__CvT_miT,91,761);__beg = _M_extract_int ( __beg , __end , __io , __err , __ul ) ; 


__CvT__record_line____(__CvT_miT,91,764);__io . flags ( __fmt ) ; 

__CvT__record_line____(__CvT_miT,91,766);__v = reinterpret_cast < void *> ( __ul ) ; 
__CvT__record_line____(__CvT_miT,91,767);return __beg ; 
} 



template < typename _CharT , typename _OutIter > 
void 
num_put < _CharT , _OutIter >:: 
_M_pad ( _CharT __fill , streamsize __w , ios_base & __io , 
_CharT * __new , const _CharT * __cs , int & __len ) const 
{ __CvT__record_line____(__CvT_miT,91,777);


__CvT__record_line____(__CvT_miT,91,780);__pad < _CharT , char_traits < _CharT > >:: _S_pad ( __io , __fill , __new , 
__cs , __w , __len ) ; 
__CvT__record_line____(__CvT_miT,91,782);__len = static_cast < int > ( __w ) ; 
} 



template < typename _CharT , typename _ValueT > 
int 
__int_to_char ( _CharT * __bufend , _ValueT __v , const _CharT * __lit , 
ios_base :: fmtflags __flags , bool __dec ) 
{ __CvT__record_line____(__CvT_miT,91,791);
__CvT__record_line____(__CvT_miT,91,792);_CharT * __buf = __bufend ; 
__CvT__record_line____(__CvT_miT,91,793);if ( __builtin_expect ( __dec , true ) ) 
{{ 

__CvT__record_line____(__CvT_miT,91,796);do {
{ 
__CvT__record_line____(__CvT_miT,91,798);*-- __buf = __lit [ ( __v % 10 ) + __num_base :: _S_odigits ] ; 
__CvT__record_line____(__CvT_miT,91,799);__v /= 10 ; 
} 
}while ( __v != 0 ) ;
} 
}else {__CvT__record_line____(__CvT_miT,91,803);if ( ( __flags & ios_base :: basefield ) == ios_base :: oct ) 
{{ 

__CvT__record_line____(__CvT_miT,91,806);do {
{ 
__CvT__record_line____(__CvT_miT,91,808);*-- __buf = __lit [ ( __v & 0x7 ) + __num_base :: _S_odigits ] ; 
__CvT__record_line____(__CvT_miT,91,809);__v >>= 3 ; 
} 
}while ( __v != 0 ) ;
} 
}else {
{ 

__CvT__record_line____(__CvT_miT,91,816);const bool __uppercase = __flags & ios_base :: uppercase ; 
__CvT__record_line____(__CvT_miT,91,817);const int __case_offset = __uppercase ? __num_base :: _S_oudigits 
: __num_base :: _S_odigits ; 
__CvT__record_line____(__CvT_miT,91,819);do {
{ 
__CvT__record_line____(__CvT_miT,91,821);*-- __buf = __lit [ ( __v & 0xf ) + __case_offset ] ; 
__CvT__record_line____(__CvT_miT,91,822);__v >>= 4 ; 
} 
}while ( __v != 0 ) ;
} 
}}__CvT__record_line____(__CvT_miT,91,826);return __bufend - __buf ; 
} 



template < typename _CharT , typename _OutIter > 
void 
num_put < _CharT , _OutIter >:: 
_M_group_int ( const char * __grouping , size_t __grouping_size , _CharT __sep , 
ios_base & , _CharT * __new , _CharT * __cs , int & __len ) const 
{ __CvT__record_line____(__CvT_miT,91,836);
__CvT__record_line____(__CvT_miT,91,837);_CharT * __p = std :: __add_grouping ( __new , __sep , __grouping , 
__grouping_size , __cs , __cs + __len ) ; 
__CvT__record_line____(__CvT_miT,91,839);__len = __p - __new ; 
} 

template < typename _CharT , typename _OutIter > 
template < typename _ValueT > 
_OutIter 
num_put < _CharT , _OutIter >:: 
_M_insert_int ( _OutIter __s , ios_base & __io , _CharT __fill , 
_ValueT __v ) const 
{ __CvT__record_line____(__CvT_miT,91,848);
using __gnu_cxx :: __add_unsigned ; 
typedef typename __add_unsigned < _ValueT >:: __type __unsigned_type ; 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,91,852);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,91,853);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,91,854);const __cache_type * __lc = __uc ( __loc ) ; 
__CvT__record_line____(__CvT_miT,91,855);const _CharT * __lit = __lc -> _M_atoms_out ; 
__CvT__record_line____(__CvT_miT,91,856);const ios_base :: fmtflags __flags = __io . flags ( ) ; 


__CvT__record_line____(__CvT_miT,91,859);const int __ilen = 5 * sizeof ( _ValueT ) ; 
__CvT__record_line____(__CvT_miT,91,860);_CharT * __cs = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __ilen ) ) ; 



__CvT__record_line____(__CvT_miT,91,865);const ios_base :: fmtflags __basefield = __flags & ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,91,866);const bool __dec = ( __basefield != ios_base :: oct 
&& __basefield != ios_base :: hex ) ; 
__CvT__record_line____(__CvT_miT,91,868);const __unsigned_type __u = ( ( __v > 0 || ! __dec ) 
? __unsigned_type ( __v ) 
: - __unsigned_type ( __v ) ) ; 
__CvT__record_line____(__CvT_miT,91,871);int __len = __int_to_char ( __cs + __ilen , __u , __lit , __flags , __dec ) ; 
__CvT__record_line____(__CvT_miT,91,872);__cs += __ilen - __len ; 


__CvT__record_line____(__CvT_miT,91,875);if ( __lc -> _M_use_grouping ) 
{{ 


__CvT__record_line____(__CvT_miT,91,879);_CharT * __cs2 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* ( __len + 1 ) 
* 2 ) ) ; 
__CvT__record_line____(__CvT_miT,91,882);_M_group_int ( __lc -> _M_grouping , __lc -> _M_grouping_size , 
__lc -> _M_thousands_sep , __io , __cs2 + 2 , __cs , __len ) ; 
__CvT__record_line____(__CvT_miT,91,884);__cs = __cs2 + 2 ; 
} 


}__CvT__record_line____(__CvT_miT,91,888);if ( __builtin_expect ( __dec , true ) ) 
{{ 

__CvT__record_line____(__CvT_miT,91,891);if ( __v >= 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,91,893);if ( bool ( __flags & ios_base :: showpos ) 
&& __gnu_cxx :: __numeric_traits < _ValueT >:: __is_signed ) 
{__CvT__record_line____(__CvT_miT,91,895);*-- __cs = __lit [ __num_base :: _S_oplus ] , ++ __len ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,91,898);*-- __cs = __lit [ __num_base :: _S_ominus ] , ++ __len ; 
}} 
}else {__CvT__record_line____(__CvT_miT,91,900);if ( bool ( __flags & ios_base :: showbase ) && __v ) 
{{ 
__CvT__record_line____(__CvT_miT,91,902);if ( __basefield == ios_base :: oct ) 
{__CvT__record_line____(__CvT_miT,91,903);*-- __cs = __lit [ __num_base :: _S_odigits ] , ++ __len ; 
}else {
{ 

__CvT__record_line____(__CvT_miT,91,907);const bool __uppercase = __flags & ios_base :: uppercase ; 
__CvT__record_line____(__CvT_miT,91,908);*-- __cs = __lit [ __num_base :: _S_ox + __uppercase ] ; 

__CvT__record_line____(__CvT_miT,91,910);*-- __cs = __lit [ __num_base :: _S_odigits ] ; 
__CvT__record_line____(__CvT_miT,91,911);__len += 2 ; 
} 
}} 


}}__CvT__record_line____(__CvT_miT,91,916);const streamsize __w = __io . width ( ) ; 
__CvT__record_line____(__CvT_miT,91,917);if ( __w > static_cast < streamsize > ( __len ) ) 
{{ 
__CvT__record_line____(__CvT_miT,91,919);_CharT * __cs3 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __w ) ) ; 
__CvT__record_line____(__CvT_miT,91,921);_M_pad ( __fill , __w , __io , __cs3 , __cs , __len ) ; 
__CvT__record_line____(__CvT_miT,91,922);__cs = __cs3 ; 
} 
}__CvT__record_line____(__CvT_miT,91,924);__io . width ( 0 ) ; 



__CvT__record_line____(__CvT_miT,91,928);return std :: __write ( __s , __cs , __len ) ; 
} 

template < typename _CharT , typename _OutIter > 
void 
num_put < _CharT , _OutIter >:: 
_M_group_float ( const char * __grouping , size_t __grouping_size , 
_CharT __sep , const _CharT * __p , _CharT * __new , 
_CharT * __cs , int & __len ) const 
{ __CvT__record_line____(__CvT_miT,91,937);



__CvT__record_line____(__CvT_miT,91,941);const int __declen = __p ? __p - __cs : __len ; 
__CvT__record_line____(__CvT_miT,91,942);_CharT * __p2 = std :: __add_grouping ( __new , __sep , __grouping , 
__grouping_size , 
__cs , __cs + __declen ) ; 


__CvT__record_line____(__CvT_miT,91,947);int __newlen = __p2 - __new ; 
__CvT__record_line____(__CvT_miT,91,948);if ( __p ) 
{{ 
__CvT__record_line____(__CvT_miT,91,950);char_traits < _CharT >:: copy ( __p2 , __p , __len - __declen ) ; 
__CvT__record_line____(__CvT_miT,91,951);__newlen += __len - __declen ; 
} 
}__CvT__record_line____(__CvT_miT,91,953);__len = __newlen ; 
} 
# 966 "/usr/include/c++/4.8/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _OutIter > 
template < typename _ValueT > 
_OutIter 
num_put < _CharT , _OutIter >:: 
_M_insert_float ( _OutIter __s , ios_base & __io , _CharT __fill , char __mod , 
_ValueT __v ) const 
{ __CvT__record_line____(__CvT_miT,91,972);
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,91,974);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,91,975);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,91,976);const __cache_type * __lc = __uc ( __loc ) ; 


__CvT__record_line____(__CvT_miT,91,979);const streamsize __prec = __io . precision ( ) < 0 ? 6 : __io . precision ( ) ; 

__CvT__record_line____(__CvT_miT,91,981);const int __max_digits = 
__gnu_cxx :: __numeric_traits < _ValueT >:: __digits10 ; 


__CvT__record_line____(__CvT_miT,91,985);int __len ; 

__CvT__record_line____(__CvT_miT,91,987);char __fbuf [ 16 ] ; 
__CvT__record_line____(__CvT_miT,91,988);__num_base :: _S_format_float ( __io , __fbuf , __mod ) ; 




__CvT__record_line____(__CvT_miT,91,993);int __cs_size = __max_digits * 3 ; 
__CvT__record_line____(__CvT_miT,91,994);char * __cs = static_cast < char *> ( __builtin_alloca ( __cs_size ) ) ; 
__CvT__record_line____(__CvT_miT,91,995);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __prec , __v ) ; 


__CvT__record_line____(__CvT_miT,91,999);if ( __len >= __cs_size ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1001);__cs_size = __len + 1 ; 
__CvT__record_line____(__CvT_miT,91,1002);__cs = static_cast < char *> ( __builtin_alloca ( __cs_size ) ) ; 
__CvT__record_line____(__CvT_miT,91,1003);__len = std :: __convert_from_v ( _S_get_c_locale ( ) , __cs , __cs_size , 
__fbuf , __prec , __v ) ; 
} 
# 1027 "/usr/include/c++/4.8/bits/locale_facets.tcc" 3 
}__CvT__record_line____(__CvT_miT,91,1027);const ctype < _CharT >& __ctype = use_facet < ctype < _CharT > > ( __loc ) ; 

__CvT__record_line____(__CvT_miT,91,1029);_CharT * __ws = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __len ) ) ; 
__CvT__record_line____(__CvT_miT,91,1031);__ctype . widen ( __cs , __cs + __len , __ws ) ; 


__CvT__record_line____(__CvT_miT,91,1034);_CharT * __wp = 0 ; 
__CvT__record_line____(__CvT_miT,91,1035);const char * __p = char_traits < char >:: find ( __cs , __len , '.' ) ; 
__CvT__record_line____(__CvT_miT,91,1036);if ( __p ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1038);__wp = __ws + ( __p - __cs ) ; 
__CvT__record_line____(__CvT_miT,91,1039);* __wp = __lc -> _M_decimal_point ; 
} 




}__CvT__record_line____(__CvT_miT,91,1045);if ( __lc -> _M_use_grouping 
&& ( __wp || __len < 3 || ( __cs [ 1 ] <= '9' && __cs [ 2 ] <= '9' 
&& __cs [ 1 ] >= '0' && __cs [ 2 ] >= '0' ) ) ) 
{{ 


__CvT__record_line____(__CvT_miT,91,1051);_CharT * __ws2 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __len * 2 ) ) ; 

__CvT__record_line____(__CvT_miT,91,1054);streamsize __off = 0 ; 
__CvT__record_line____(__CvT_miT,91,1055);if ( __cs [ 0 ] == '-' || __cs [ 0 ] == '+' ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1057);__off = 1 ; 
__CvT__record_line____(__CvT_miT,91,1058);__ws2 [ 0 ] = __ws [ 0 ] ; 
__CvT__record_line____(__CvT_miT,91,1059);__len -= 1 ; 
} 

}__CvT__record_line____(__CvT_miT,91,1062);_M_group_float ( __lc -> _M_grouping , __lc -> _M_grouping_size , 
__lc -> _M_thousands_sep , __wp , __ws2 + __off , 
__ws + __off , __len ) ; 
__CvT__record_line____(__CvT_miT,91,1065);__len += __off ; 

__CvT__record_line____(__CvT_miT,91,1067);__ws = __ws2 ; 
} 


}__CvT__record_line____(__CvT_miT,91,1071);const streamsize __w = __io . width ( ) ; 
__CvT__record_line____(__CvT_miT,91,1072);if ( __w > static_cast < streamsize > ( __len ) ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1074);_CharT * __ws3 = static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __w ) ) ; 
__CvT__record_line____(__CvT_miT,91,1076);_M_pad ( __fill , __w , __io , __ws3 , __ws , __len ) ; 
__CvT__record_line____(__CvT_miT,91,1077);__ws = __ws3 ; 
} 
}__CvT__record_line____(__CvT_miT,91,1079);__io . width ( 0 ) ; 



__CvT__record_line____(__CvT_miT,91,1083);return std :: __write ( __s , __ws , __len ) ; 
} 

template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , bool __v ) const 
{ __CvT__record_line____(__CvT_miT,91,1090);
__CvT__record_line____(__CvT_miT,91,1091);const ios_base :: fmtflags __flags = __io . flags ( ) ; 
__CvT__record_line____(__CvT_miT,91,1092);if ( ( __flags & ios_base :: boolalpha ) == 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1094);const long __l = __v ; 
__CvT__record_line____(__CvT_miT,91,1095);__s = _M_insert_int ( __s , __io , __fill , __l ) ; 
} 
}else {
{ 
typedef __numpunct_cache < _CharT > __cache_type ; 
__CvT__record_line____(__CvT_miT,91,1100);__use_cache < __cache_type > __uc ; 
__CvT__record_line____(__CvT_miT,91,1101);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,91,1102);const __cache_type * __lc = __uc ( __loc ) ; 

__CvT__record_line____(__CvT_miT,91,1104);const _CharT * __name = __v ? __lc -> _M_truename 
: __lc -> _M_falsename ; 
__CvT__record_line____(__CvT_miT,91,1106);int __len = __v ? __lc -> _M_truename_size 
: __lc -> _M_falsename_size ; 

__CvT__record_line____(__CvT_miT,91,1109);const streamsize __w = __io . width ( ) ; 
__CvT__record_line____(__CvT_miT,91,1110);if ( __w > static_cast < streamsize > ( __len ) ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1112);const streamsize __plen = __w - __len ; 
__CvT__record_line____(__CvT_miT,91,1113);_CharT * __ps 
= static_cast < _CharT *> ( __builtin_alloca ( sizeof ( _CharT ) 
* __plen ) ) ; 

__CvT__record_line____(__CvT_miT,91,1117);char_traits < _CharT >:: assign ( __ps , __plen , __fill ) ; 
__CvT__record_line____(__CvT_miT,91,1118);__io . width ( 0 ) ; 

__CvT__record_line____(__CvT_miT,91,1120);if ( ( __flags & ios_base :: adjustfield ) == ios_base :: left ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1122);__s = std :: __write ( __s , __name , __len ) ; 
__CvT__record_line____(__CvT_miT,91,1123);__s = std :: __write ( __s , __ps , __plen ) ; 
} 
}else {
{ 
__CvT__record_line____(__CvT_miT,91,1127);__s = std :: __write ( __s , __ps , __plen ) ; 
__CvT__record_line____(__CvT_miT,91,1128);__s = std :: __write ( __s , __name , __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,91,1130);return __s ; 
} 
}__CvT__record_line____(__CvT_miT,91,1132);__io . width ( 0 ) ; 
__CvT__record_line____(__CvT_miT,91,1133);__s = std :: __write ( __s , __name , __len ) ; 
} 
}__CvT__record_line____(__CvT_miT,91,1135);return __s ; 
} 

template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , double __v ) const 
{ __CvT__record_line____(__CvT_miT,91,1142);return _M_insert_float ( __s , __io , __fill , char ( ) , __v ) ; } 
# 1152 "/usr/include/c++/4.8/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
long double __v ) const 
{ __CvT__record_line____(__CvT_miT,91,1157);return _M_insert_float ( __s , __io , __fill , 'L' , __v ) ; } 

template < typename _CharT , typename _OutIter > 
_OutIter 
num_put < _CharT , _OutIter >:: 
do_put ( iter_type __s , ios_base & __io , char_type __fill , 
const void * __v ) const 
{ __CvT__record_line____(__CvT_miT,91,1164);
__CvT__record_line____(__CvT_miT,91,1165);const ios_base :: fmtflags __flags = __io . flags ( ) ; 
__CvT__record_line____(__CvT_miT,91,1166);const ios_base :: fmtflags __fmt = ~ ( ios_base :: basefield 
| ios_base :: uppercase ) ; 
__CvT__record_line____(__CvT_miT,91,1168);__io . flags ( ( __flags & __fmt ) | ( ios_base :: hex | ios_base :: showbase ) ) ; 

typedef __gnu_cxx :: __conditional_type < ( sizeof ( const void * ) 
<= sizeof ( unsigned long ) ) , 
unsigned long , unsigned long long >:: __type _UIntPtrType ; 

__CvT__record_line____(__CvT_miT,91,1174);__s = _M_insert_int ( __s , __io , __fill , 
reinterpret_cast < _UIntPtrType > ( __v ) ) ; 
__CvT__record_line____(__CvT_miT,91,1176);__io . flags ( __flags ) ; 
__CvT__record_line____(__CvT_miT,91,1177);return __s ; 
} 


# 1189 "/usr/include/c++/4.8/bits/locale_facets.tcc" 3 
template < typename _CharT , typename _Traits > 
void 
__pad < _CharT , _Traits >:: _S_pad ( ios_base & __io , _CharT __fill , 
_CharT * __news , const _CharT * __olds , 
streamsize __newlen , streamsize __oldlen ) 
{ __CvT__record_line____(__CvT_miT,91,1194);
__CvT__record_line____(__CvT_miT,91,1195);const size_t __plen = static_cast < size_t > ( __newlen - __oldlen ) ; 
__CvT__record_line____(__CvT_miT,91,1196);const ios_base :: fmtflags __adjust = __io . flags ( ) & ios_base :: adjustfield ; 


__CvT__record_line____(__CvT_miT,91,1199);if ( __adjust == ios_base :: left ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1201);_Traits :: copy ( __news , __olds , __oldlen ) ; 
__CvT__record_line____(__CvT_miT,91,1202);_Traits :: assign ( __news + __oldlen , __plen , __fill ) ; 
__CvT__record_line____(__CvT_miT,91,1203);return ; 
} 

}__CvT__record_line____(__CvT_miT,91,1206);size_t __mod = 0 ; 
__CvT__record_line____(__CvT_miT,91,1207);if ( __adjust == ios_base :: internal ) 
{{ 



__CvT__record_line____(__CvT_miT,91,1212);const locale & __loc = __io . _M_getloc ( ) ; 
__CvT__record_line____(__CvT_miT,91,1213);const ctype < _CharT >& __ctype = use_facet < ctype < _CharT > > ( __loc ) ; 

__CvT__record_line____(__CvT_miT,91,1215);if ( __ctype . widen ( '-' ) == __olds [ 0 ] 
|| __ctype . widen ( '+' ) == __olds [ 0 ] ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1218);__news [ 0 ] = __olds [ 0 ] ; 
__CvT__record_line____(__CvT_miT,91,1219);__mod = 1 ; 
__CvT__record_line____(__CvT_miT,91,1220);++ __news ; 
} 
}else {__CvT__record_line____(__CvT_miT,91,1222);if ( __ctype . widen ( '0' ) == __olds [ 0 ] 
&& __oldlen > 1 
&& ( __ctype . widen ( 'x' ) == __olds [ 1 ] 
|| __ctype . widen ( 'X' ) == __olds [ 1 ] ) ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1227);__news [ 0 ] = __olds [ 0 ] ; 
__CvT__record_line____(__CvT_miT,91,1228);__news [ 1 ] = __olds [ 1 ] ; 
__CvT__record_line____(__CvT_miT,91,1229);__mod = 2 ; 
__CvT__record_line____(__CvT_miT,91,1230);__news += 2 ; 
} 

}}} 
}__CvT__record_line____(__CvT_miT,91,1234);_Traits :: assign ( __news , __plen , __fill ) ; 
__CvT__record_line____(__CvT_miT,91,1235);_Traits :: copy ( __news + __plen , __olds + __mod , __oldlen - __mod ) ; 
} 

template < typename _CharT > 
_CharT * 
__add_grouping ( _CharT * __s , _CharT __sep , 
const char * __gbeg , size_t __gsize , 
const _CharT * __first , const _CharT * __last ) 
{ __CvT__record_line____(__CvT_miT,91,1243);
__CvT__record_line____(__CvT_miT,91,1244);size_t __idx = 0 ; 
__CvT__record_line____(__CvT_miT,91,1245);size_t __ctr = 0 ; 

__CvT__record_line____(__CvT_miT,91,1247);while ( __last - __first > __gbeg [ __idx ] 
&& static_cast < signed char > ( __gbeg [ __idx ] ) > 0 
&& __gbeg [ __idx ] != __gnu_cxx :: __numeric_traits < char >:: __max ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1251);__last -= __gbeg [ __idx ] ; 
__CvT__record_line____(__CvT_miT,91,1252);__idx < __gsize - 1 ? ++ __idx : ++ __ctr ; 
} 

}__CvT__record_line____(__CvT_miT,91,1255);while ( __first != __last ) 
{__CvT__record_line____(__CvT_miT,91,1256);* __s ++ = * __first ++ ; 

}__CvT__record_line____(__CvT_miT,91,1258);while ( __ctr -- ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1260);* __s ++ = __sep ; 
__CvT__record_line____(__CvT_miT,91,1261);for ( char __i = __gbeg [ __idx ] ; __i > 0 ; -- __i ) 
{__CvT__record_line____(__CvT_miT,91,1262);* __s ++ = * __first ++ ; 
}} 

}__CvT__record_line____(__CvT_miT,91,1265);while ( __idx -- ) 
{{ 
__CvT__record_line____(__CvT_miT,91,1267);* __s ++ = __sep ; 
__CvT__record_line____(__CvT_miT,91,1268);for ( char __i = __gbeg [ __idx ] ; __i > 0 ; -- __i ) 
{__CvT__record_line____(__CvT_miT,91,1269);* __s ++ = * __first ++ ; 
}} 

}__CvT__record_line____(__CvT_miT,91,1272);return __s ; 
} 




extern template class numpunct < char > ; 
extern template class numpunct_byname < char > ; 
extern template class num_get < char > ; 
extern template class num_put < char > ; 
extern template class ctype_byname < char > ; 

extern template 
const ctype < char >& 
use_facet < ctype < char > > ( const locale & ) ; 

extern template 
const numpunct < char >& 
use_facet < numpunct < char > > ( const locale & ) ; 

extern template 
const num_put < char >& 
use_facet < num_put < char > > ( const locale & ) ; 

extern template 
const num_get < char >& 
use_facet < num_get < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < ctype < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < numpunct < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_put < char > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_get < char > > ( const locale & ) ; 


extern template class numpunct < wchar_t > ; 
extern template class numpunct_byname < wchar_t > ; 
extern template class num_get < wchar_t > ; 
extern template class num_put < wchar_t > ; 
extern template class ctype_byname < wchar_t > ; 

extern template 
const ctype < wchar_t >& 
use_facet < ctype < wchar_t > > ( const locale & ) ; 

extern template 
const numpunct < wchar_t >& 
use_facet < numpunct < wchar_t > > ( const locale & ) ; 

extern template 
const num_put < wchar_t >& 
use_facet < num_put < wchar_t > > ( const locale & ) ; 

extern template 
const num_get < wchar_t >& 
use_facet < num_get < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < ctype < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < numpunct < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_put < wchar_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < num_get < wchar_t > > ( const locale & ) ; 




} 
# 2609 "/usr/include/c++/4.8/bits/locale_facets.h" 2 3 
# 38 "/usr/include/c++/4.8/bits/basic_ios.h" 2 3 


namespace std 
{ 


template < typename _Facet > 
inline const _Facet & 
__check_facet ( const _Facet * __f ) 
{ 
if ( ! __f ) 
__throw_bad_cast ( ) ; 
return * __f ; 
} 
# 65 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
template < typename _CharT , typename _Traits > 
class basic_ios : public ios_base 
{ 
public : 






typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 






typedef ctype < _CharT > __ctype_type ; 
typedef num_put < _CharT , ostreambuf_iterator < _CharT , _Traits > > 
__num_put_type ; 
typedef num_get < _CharT , istreambuf_iterator < _CharT , _Traits > > 
__num_get_type ; 



protected : 
basic_ostream < _CharT , _Traits >* _M_tie ; 
mutable char_type _M_fill ; 
mutable bool _M_fill_init ; 
basic_streambuf < _CharT , _Traits >* _M_streambuf ; 


const __ctype_type * _M_ctype ; 

const __num_put_type * _M_num_put ; 

const __num_get_type * _M_num_get ; 

public : 







operator void * ( ) const 
{ __CvT__record_line____(__CvT_miT,84,116);return this -> fail ( ) ? 0 : const_cast < basic_ios *> ( this ) ; } 

bool 
operator ! ( ) const 
{ __CvT__record_line____(__CvT_miT,84,120);return this -> fail ( ) ; } 
# 130 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
iostate 
rdstate ( ) const 
{ __CvT__record_line____(__CvT_miT,84,132);return _M_streambuf_state ; } 
# 141 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
void 
clear ( iostate __state = goodbit ) ; 







void 
setstate ( iostate __state ) 
{ __CvT__record_line____(__CvT_miT,84,152);this -> clear ( this -> rdstate ( ) | __state ) ; } 




void 
_M_setstate ( iostate __state ) 
{ __CvT__record_line____(__CvT_miT,84,159);


__CvT__record_line____(__CvT_miT,84,162);_M_streambuf_state |= __state ; 
__CvT__record_line____(__CvT_miT,84,163);if ( this -> exceptions ( ) & __state ) 
{__CvT__record_line____(__CvT_miT,84,164);throw ; 
}} 







bool 
good ( ) const 
{ __CvT__record_line____(__CvT_miT,84,175);return this -> rdstate ( ) == 0 ; } 







bool 
eof ( ) const 
{ __CvT__record_line____(__CvT_miT,84,185);return ( this -> rdstate ( ) & eofbit ) != 0 ; } 
# 194 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
bool 
fail ( ) const 
{ __CvT__record_line____(__CvT_miT,84,196);return ( this -> rdstate ( ) & ( badbit | failbit ) ) != 0 ; } 







bool 
bad ( ) const 
{ __CvT__record_line____(__CvT_miT,84,206);return ( this -> rdstate ( ) & badbit ) != 0 ; } 
# 215 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
iostate 
exceptions ( ) const 
{ __CvT__record_line____(__CvT_miT,84,217);return _M_exception ; } 
# 250 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
void 
exceptions ( iostate __except ) 
{ __CvT__record_line____(__CvT_miT,84,252);
__CvT__record_line____(__CvT_miT,84,253);_M_exception = __except ; 
__CvT__record_line____(__CvT_miT,84,254);this -> clear ( _M_streambuf_state ) ; 
} 







explicit 
basic_ios ( basic_streambuf < _CharT , _Traits >* __sb ) 
: ios_base ( ) , _M_tie ( 0 ) , _M_fill ( ) , _M_fill_init ( false ) , _M_streambuf ( 0 ) , 
_M_ctype ( 0 ) , _M_num_put ( 0 ) , _M_num_get ( 0 ) 
{ __CvT__record_line____(__CvT_miT,84,267);this -> init ( __sb ) ; } 







virtual 
~ basic_ios ( ) { __CvT__record_line____(__CvT_miT,84,276);} 
# 288 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
basic_ostream < _CharT , _Traits >* 
tie ( ) const 
{ __CvT__record_line____(__CvT_miT,84,290);return _M_tie ; } 
# 300 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
basic_ostream < _CharT , _Traits >* 
tie ( basic_ostream < _CharT , _Traits >* __tiestr ) 
{ __CvT__record_line____(__CvT_miT,84,302);
__CvT__record_line____(__CvT_miT,84,303);basic_ostream < _CharT , _Traits >* __old = _M_tie ; 
__CvT__record_line____(__CvT_miT,84,304);_M_tie = __tiestr ; 
__CvT__record_line____(__CvT_miT,84,305);return __old ; 
} 







basic_streambuf < _CharT , _Traits >* 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,84,316);return _M_streambuf ; } 
# 340 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
basic_streambuf < _CharT , _Traits >* 
rdbuf ( basic_streambuf < _CharT , _Traits >* __sb ) ; 
# 354 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
basic_ios & 
copyfmt ( const basic_ios & __rhs ) ; 







char_type 
fill ( ) const 
{ __CvT__record_line____(__CvT_miT,84,365);
__CvT__record_line____(__CvT_miT,84,366);if ( ! _M_fill_init ) 
{{ 
__CvT__record_line____(__CvT_miT,84,368);_M_fill = this -> widen ( ' ' ) ; 
__CvT__record_line____(__CvT_miT,84,369);_M_fill_init = true ; 
} 
}__CvT__record_line____(__CvT_miT,84,371);return _M_fill ; 
} 
# 383 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
char_type 
fill ( char_type __ch ) 
{ __CvT__record_line____(__CvT_miT,84,385);
__CvT__record_line____(__CvT_miT,84,386);char_type __old = this -> fill ( ) ; 
__CvT__record_line____(__CvT_miT,84,387);_M_fill = __ch ; 
__CvT__record_line____(__CvT_miT,84,388);return __old ; 
} 
# 403 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
locale 
imbue ( const locale & __loc ) ; 
# 423 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
char 
narrow ( char_type __c , char __dfault ) const 
{ __CvT__record_line____(__CvT_miT,84,425);return __check_facet ( _M_ctype ) . narrow ( __c , __dfault ) ; } 
# 442 "/usr/include/c++/4.8/bits/basic_ios.h" 3 
char_type 
widen ( char __c ) const 
{ __CvT__record_line____(__CvT_miT,84,444);return __check_facet ( _M_ctype ) . widen ( __c ) ; } 

protected : 







basic_ios ( ) 
: ios_base ( ) , _M_tie ( 0 ) , _M_fill ( char_type ( ) ) , _M_fill_init ( false ) , 
_M_streambuf ( 0 ) , _M_ctype ( 0 ) , _M_num_put ( 0 ) , _M_num_get ( 0 ) 
{ __CvT__record_line____(__CvT_miT,84,457);} 







void 
init ( basic_streambuf < _CharT , _Traits >* __sb ) ; 

void 
_M_cache_locale ( const locale & __loc ) ; 
} ; 


} 

# 1 "/usr/include/c++/4.8/bits/basic_ios.tcc" 1 3 
# 33 "/usr/include/c++/4.8/bits/basic_ios.tcc" 3 

# 34 "/usr/include/c++/4.8/bits/basic_ios.tcc" 3 

namespace std 
{ 


template < typename _CharT , typename _Traits > 
void 
basic_ios < _CharT , _Traits >:: clear ( iostate __state ) 
{ __CvT__record_line____(__CvT_miT,92,42);
__CvT__record_line____(__CvT_miT,92,43);if ( this -> rdbuf ( ) ) 
{__CvT__record_line____(__CvT_miT,92,44);_M_streambuf_state = __state ; 
}else {
__CvT__record_line____(__CvT_miT,92,46);_M_streambuf_state = __state | badbit ; 
}__CvT__record_line____(__CvT_miT,92,47);if ( this -> exceptions ( ) & this -> rdstate ( ) ) 
{__CvT__record_line____(__CvT_miT,92,48);__throw_ios_failure ( ( "basic_ios::clear" ) ) ; 
}} 

template < typename _CharT , typename _Traits > 
basic_streambuf < _CharT , _Traits >* 
basic_ios < _CharT , _Traits >:: rdbuf ( basic_streambuf < _CharT , _Traits >* __sb ) 
{ __CvT__record_line____(__CvT_miT,92,54);
__CvT__record_line____(__CvT_miT,92,55);basic_streambuf < _CharT , _Traits >* __old = _M_streambuf ; 
__CvT__record_line____(__CvT_miT,92,56);_M_streambuf = __sb ; 
__CvT__record_line____(__CvT_miT,92,57);this -> clear ( ) ; 
__CvT__record_line____(__CvT_miT,92,58);return __old ; 
} 

template < typename _CharT , typename _Traits > 
basic_ios < _CharT , _Traits >& 
basic_ios < _CharT , _Traits >:: copyfmt ( const basic_ios & __rhs ) 
{ __CvT__record_line____(__CvT_miT,92,64);


__CvT__record_line____(__CvT_miT,92,67);if ( this != & __rhs ) 
{{ 




__CvT__record_line____(__CvT_miT,92,73);_Words * __words = ( __rhs . _M_word_size <= _S_local_word_size ) ? 
_M_local_word : new _Words [ __rhs . _M_word_size ] ; 


__CvT__record_line____(__CvT_miT,92,77);_Callback_list * __cb = __rhs . _M_callbacks ; 
__CvT__record_line____(__CvT_miT,92,78);if ( __cb ) 
{__CvT__record_line____(__CvT_miT,92,79);__cb -> _M_add_reference ( ) ; 
}__CvT__record_line____(__CvT_miT,92,80);_M_call_callbacks ( erase_event ) ; 
__CvT__record_line____(__CvT_miT,92,81);if ( _M_word != _M_local_word ) 
{{ 
__CvT__record_line____(__CvT_miT,92,83);delete [ ] _M_word ; 
__CvT__record_line____(__CvT_miT,92,84);_M_word = 0 ; 
} 
}__CvT__record_line____(__CvT_miT,92,86);_M_dispose_callbacks ( ) ; 


__CvT__record_line____(__CvT_miT,92,89);_M_callbacks = __cb ; 
__CvT__record_line____(__CvT_miT,92,90);for ( int __i = 0 ; __i < __rhs . _M_word_size ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,92,91);__words [ __i ] = __rhs . _M_word [ __i ] ; 
}__CvT__record_line____(__CvT_miT,92,92);_M_word = __words ; 
__CvT__record_line____(__CvT_miT,92,93);_M_word_size = __rhs . _M_word_size ; 

__CvT__record_line____(__CvT_miT,92,95);this -> flags ( __rhs . flags ( ) ) ; 
__CvT__record_line____(__CvT_miT,92,96);this -> width ( __rhs . width ( ) ) ; 
__CvT__record_line____(__CvT_miT,92,97);this -> precision ( __rhs . precision ( ) ) ; 
__CvT__record_line____(__CvT_miT,92,98);this -> tie ( __rhs . tie ( ) ) ; 
__CvT__record_line____(__CvT_miT,92,99);this -> fill ( __rhs . fill ( ) ) ; 
__CvT__record_line____(__CvT_miT,92,100);_M_ios_locale = __rhs . getloc ( ) ; 
__CvT__record_line____(__CvT_miT,92,101);_M_cache_locale ( _M_ios_locale ) ; 

__CvT__record_line____(__CvT_miT,92,103);_M_call_callbacks ( copyfmt_event ) ; 


__CvT__record_line____(__CvT_miT,92,106);this -> exceptions ( __rhs . exceptions ( ) ) ; 
} 
}__CvT__record_line____(__CvT_miT,92,108);return * this ; 
} 


template < typename _CharT , typename _Traits > 
locale 
basic_ios < _CharT , _Traits >:: imbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,92,115);
__CvT__record_line____(__CvT_miT,92,116);locale __old ( this -> getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,92,117);ios_base :: imbue ( __loc ) ; 
__CvT__record_line____(__CvT_miT,92,118);_M_cache_locale ( __loc ) ; 
__CvT__record_line____(__CvT_miT,92,119);if ( this -> rdbuf ( ) != 0 ) 
{__CvT__record_line____(__CvT_miT,92,120);this -> rdbuf ( ) -> pubimbue ( __loc ) ; 
}__CvT__record_line____(__CvT_miT,92,121);return __old ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_ios < _CharT , _Traits >:: init ( basic_streambuf < _CharT , _Traits >* __sb ) 
{ __CvT__record_line____(__CvT_miT,92,127);

__CvT__record_line____(__CvT_miT,92,129);ios_base :: _M_init ( ) ; 


__CvT__record_line____(__CvT_miT,92,132);_M_cache_locale ( _M_ios_locale ) ; 
# 146 "/usr/include/c++/4.8/bits/basic_ios.tcc" 3 
__CvT__record_line____(__CvT_miT,92,146);_M_fill = _CharT ( ) ; 
__CvT__record_line____(__CvT_miT,92,147);_M_fill_init = false ; 

__CvT__record_line____(__CvT_miT,92,149);_M_tie = 0 ; 
__CvT__record_line____(__CvT_miT,92,150);_M_exception = goodbit ; 
__CvT__record_line____(__CvT_miT,92,151);_M_streambuf = __sb ; 
__CvT__record_line____(__CvT_miT,92,152);_M_streambuf_state = __sb ? goodbit : badbit ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_ios < _CharT , _Traits >:: _M_cache_locale ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,92,158);
__CvT__record_line____(__CvT_miT,92,159);if ( __builtin_expect ( has_facet < __ctype_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,92,160);_M_ctype = & use_facet < __ctype_type > ( __loc ) ; 
}else {
__CvT__record_line____(__CvT_miT,92,162);_M_ctype = 0 ; 

}__CvT__record_line____(__CvT_miT,92,164);if ( __builtin_expect ( has_facet < __num_put_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,92,165);_M_num_put = & use_facet < __num_put_type > ( __loc ) ; 
}else {
__CvT__record_line____(__CvT_miT,92,167);_M_num_put = 0 ; 

}__CvT__record_line____(__CvT_miT,92,169);if ( __builtin_expect ( has_facet < __num_get_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,92,170);_M_num_get = & use_facet < __num_get_type > ( __loc ) ; 
}else {
__CvT__record_line____(__CvT_miT,92,172);_M_num_get = 0 ; 
}} 




extern template class basic_ios < char > ; 


extern template class basic_ios < wchar_t > ; 




} 
# 476 "/usr/include/c++/4.8/bits/basic_ios.h" 2 3 
# 45 "/usr/include/c++/4.8/ios" 2 3 
# 39 "/usr/include/c++/4.8/istream" 2 3 
# 1 "/usr/include/c++/4.8/ostream" 1 3 
# 36 "/usr/include/c++/4.8/ostream" 3 

# 37 "/usr/include/c++/4.8/ostream" 3 




namespace std 
{ 

# 57 "/usr/include/c++/4.8/ostream" 3 
template < typename _CharT , typename _Traits > 
class basic_ostream : virtual public basic_ios < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 


typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef basic_ios < _CharT , _Traits > __ios_type ; 
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 
typedef num_put < _CharT , ostreambuf_iterator < _CharT , _Traits > > 
__num_put_type ; 
typedef ctype < _CharT > __ctype_type ; 
# 83 "/usr/include/c++/4.8/ostream" 3 
explicit 
basic_ostream ( __streambuf_type * __sb ) 
{ __CvT__record_line____(__CvT_miT,93,85);this -> init ( __sb ) ; } 






virtual 
~ basic_ostream ( ) { __CvT__record_line____(__CvT_miT,93,93);} 


class sentry ; 
friend class sentry ; 
# 107 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
operator << ( __ostream_type & ( * __pf ) ( __ostream_type & ) ) 
{ __CvT__record_line____(__CvT_miT,93,109);



__CvT__record_line____(__CvT_miT,93,113);return __pf ( * this ) ; 
} 

__ostream_type & 
operator << ( __ios_type & ( * __pf ) ( __ios_type & ) ) 
{ __CvT__record_line____(__CvT_miT,93,118);



__CvT__record_line____(__CvT_miT,93,122);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,93,123);return * this ; 
} 

__ostream_type & 
operator << ( ios_base & ( * __pf ) ( ios_base & ) ) 
{ __CvT__record_line____(__CvT_miT,93,128);



__CvT__record_line____(__CvT_miT,93,132);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,93,133);return * this ; 
} 
# 165 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
operator << ( long __n ) 
{ __CvT__record_line____(__CvT_miT,93,167);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( unsigned long __n ) 
{ __CvT__record_line____(__CvT_miT,93,171);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( bool __n ) 
{ __CvT__record_line____(__CvT_miT,93,175);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( short __n ) ; 

__ostream_type & 
operator << ( unsigned short __n ) 
{ __CvT__record_line____(__CvT_miT,93,182);


__CvT__record_line____(__CvT_miT,93,185);return _M_insert ( static_cast < unsigned long > ( __n ) ) ; 
} 

__ostream_type & 
operator << ( int __n ) ; 

__ostream_type & 
operator << ( unsigned int __n ) 
{ __CvT__record_line____(__CvT_miT,93,193);


__CvT__record_line____(__CvT_miT,93,196);return _M_insert ( static_cast < unsigned long > ( __n ) ) ; 
} 


__ostream_type & 
operator << ( long long __n ) 
{ __CvT__record_line____(__CvT_miT,93,202);return _M_insert ( __n ) ; } 

__ostream_type & 
operator << ( unsigned long long __n ) 
{ __CvT__record_line____(__CvT_miT,93,206);return _M_insert ( __n ) ; } 
# 219 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
operator << ( double __f ) 
{ __CvT__record_line____(__CvT_miT,93,221);return _M_insert ( __f ) ; } 

__ostream_type & 
operator << ( float __f ) 
{ __CvT__record_line____(__CvT_miT,93,225);


__CvT__record_line____(__CvT_miT,93,228);return _M_insert ( static_cast < double > ( __f ) ) ; 
} 

__ostream_type & 
operator << ( long double __f ) 
{ __CvT__record_line____(__CvT_miT,93,233);return _M_insert ( __f ) ; } 
# 244 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
operator << ( const void * __p ) 
{ __CvT__record_line____(__CvT_miT,93,246);return _M_insert ( __p ) ; } 
# 269 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
operator << ( __streambuf_type * __sb ) ; 
# 302 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
put ( char_type __c ) ; 






void 
_M_write ( const char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,93,312);
__CvT__record_line____(__CvT_miT,93,313);const streamsize __put = this -> rdbuf ( ) -> sputn ( __s , __n ) ; 
__CvT__record_line____(__CvT_miT,93,314);if ( __put != __n ) 
{__CvT__record_line____(__CvT_miT,93,315);this -> setstate ( ios_base :: badbit ) ; 
}} 
# 334 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
write ( const char_type * __s , streamsize __n ) ; 
# 347 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
flush ( ) ; 
# 357 "/usr/include/c++/4.8/ostream" 3 
pos_type 
tellp ( ) ; 
# 368 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
seekp ( pos_type ) ; 
# 380 "/usr/include/c++/4.8/ostream" 3 
__ostream_type & 
seekp ( off_type , ios_base :: seekdir ) ; 

protected : 
basic_ostream ( ) 
{ __CvT__record_line____(__CvT_miT,93,385);this -> init ( 0 ) ; } 

template < typename _ValueT > 
__ostream_type & 
_M_insert ( _ValueT __v ) ; 
} ; 
# 399 "/usr/include/c++/4.8/ostream" 3 
template < typename _CharT , typename _Traits > 
class basic_ostream < _CharT , _Traits >:: sentry 
{ 

bool _M_ok ; 
basic_ostream < _CharT , _Traits >& _M_os ; 

public : 
# 418 "/usr/include/c++/4.8/ostream" 3 
explicit 
sentry ( basic_ostream < _CharT , _Traits >& __os ) ; 
# 428 "/usr/include/c++/4.8/ostream" 3 
~ sentry ( ) 
{ __CvT__record_line____(__CvT_miT,93,429);

__CvT__record_line____(__CvT_miT,93,431);if ( bool ( _M_os . flags ( ) & ios_base :: unitbuf ) && ! uncaught_exception ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,93,434);if ( _M_os . rdbuf ( ) && _M_os . rdbuf ( ) -> pubsync ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,93,435);_M_os . setstate ( ios_base :: badbit ) ; 
}} 
}} 
# 449 "/usr/include/c++/4.8/ostream" 3 
operator bool ( ) const 
{ __CvT__record_line____(__CvT_miT,93,450);return _M_ok ; } 
} ; 
# 469 "/usr/include/c++/4.8/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , _CharT __c ) 
{ __CvT__record_line____(__CvT_miT,93,472);return __ostream_insert ( __out , & __c , 1 ) ; } 

template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , char __c ) 
{ __CvT__record_line____(__CvT_miT,93,477);return ( __out << __out . widen ( __c ) ) ; } 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , char __c ) 
{ __CvT__record_line____(__CvT_miT,93,483);return __ostream_insert ( __out , & __c , 1 ) ; } 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , signed char __c ) 
{ __CvT__record_line____(__CvT_miT,93,489);return ( __out << static_cast < char > ( __c ) ) ; } 

template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , unsigned char __c ) 
{ __CvT__record_line____(__CvT_miT,93,494);return ( __out << static_cast < char > ( __c ) ) ; } 
# 511 "/usr/include/c++/4.8/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , const _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,93,514);
__CvT__record_line____(__CvT_miT,93,515);if ( ! __s ) 
{__CvT__record_line____(__CvT_miT,93,516);__out . setstate ( ios_base :: badbit ) ; 
}else {
__CvT__record_line____(__CvT_miT,93,518);__ostream_insert ( __out , __s , 
static_cast < streamsize > ( _Traits :: length ( __s ) ) ) ; 
}__CvT__record_line____(__CvT_miT,93,520);return __out ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits > & 
operator << ( basic_ostream < _CharT , _Traits >& __out , const char * __s ) ; 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , const char * __s ) 
{ __CvT__record_line____(__CvT_miT,93,531);
__CvT__record_line____(__CvT_miT,93,532);if ( ! __s ) 
{__CvT__record_line____(__CvT_miT,93,533);__out . setstate ( ios_base :: badbit ) ; 
}else {
__CvT__record_line____(__CvT_miT,93,535);__ostream_insert ( __out , __s , 
static_cast < streamsize > ( _Traits :: length ( __s ) ) ) ; 
}__CvT__record_line____(__CvT_miT,93,537);return __out ; 
} 


template < class _Traits > 
inline basic_ostream < char , _Traits >& 
operator << ( basic_ostream < char , _Traits >& __out , const signed char * __s ) 
{ __CvT__record_line____(__CvT_miT,93,544);return ( __out << reinterpret_cast < const char *> ( __s ) ) ; } 

template < class _Traits > 
inline basic_ostream < char , _Traits > & 
operator << ( basic_ostream < char , _Traits >& __out , const unsigned char * __s ) 
{ __CvT__record_line____(__CvT_miT,93,549);return ( __out << reinterpret_cast < const char *> ( __s ) ) ; } 
# 562 "/usr/include/c++/4.8/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
endl ( basic_ostream < _CharT , _Traits >& __os ) 
{ __CvT__record_line____(__CvT_miT,93,565);return flush ( __os . put ( __os . widen ( '\n' ) ) ) ; } 
# 574 "/usr/include/c++/4.8/ostream" 3 
template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
ends ( basic_ostream < _CharT , _Traits >& __os ) 
{ __CvT__record_line____(__CvT_miT,93,577);return __os . put ( _CharT ( ) ) ; } 






template < typename _CharT , typename _Traits > 
inline basic_ostream < _CharT , _Traits >& 
flush ( basic_ostream < _CharT , _Traits >& __os ) 
{ __CvT__record_line____(__CvT_miT,93,587);return __os . flush ( ) ; } 
# 609 "/usr/include/c++/4.8/ostream" 3 

} 

# 1 "/usr/include/c++/4.8/bits/ostream.tcc" 1 3 
# 37 "/usr/include/c++/4.8/bits/ostream.tcc" 3 

# 38 "/usr/include/c++/4.8/bits/ostream.tcc" 3 



namespace std 
{ 


template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >:: sentry :: 
sentry ( basic_ostream < _CharT , _Traits >& __os ) 
: _M_ok ( false ) , _M_os ( __os ) 
{ __CvT__record_line____(__CvT_miT,94,49);

__CvT__record_line____(__CvT_miT,94,51);if ( __os . tie ( ) && __os . good ( ) ) 
{__CvT__record_line____(__CvT_miT,94,52);__os . tie ( ) -> flush ( ) ; 

}__CvT__record_line____(__CvT_miT,94,54);if ( __os . good ( ) ) 
{__CvT__record_line____(__CvT_miT,94,55);_M_ok = true ; 
}else {
__CvT__record_line____(__CvT_miT,94,57);__os . setstate ( ios_base :: failbit ) ; 
}} 

template < typename _CharT , typename _Traits > 
template < typename _ValueT > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
_M_insert ( _ValueT __v ) 
{ __CvT__record_line____(__CvT_miT,94,65);
__CvT__record_line____(__CvT_miT,94,66);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,94,67);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,94,69);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,94,70);try 
{ 
__CvT__record_line____(__CvT_miT,94,72);const __num_put_type & __np = __check_facet ( this -> _M_num_put ) ; 
__CvT__record_line____(__CvT_miT,94,73);if ( __np . put ( * this , * this , this -> fill ( ) , __v ) . failed ( ) ) 
{__CvT__record_line____(__CvT_miT,94,74);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,94,78);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,94,79);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,94,82);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,94,83);if ( __err ) 
{__CvT__record_line____(__CvT_miT,94,84);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,94,86);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
operator << ( short __n ) 
{ __CvT__record_line____(__CvT_miT,94,93);


__CvT__record_line____(__CvT_miT,94,96);const ios_base :: fmtflags __fmt = this -> flags ( ) & ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,94,97);if ( __fmt == ios_base :: oct || __fmt == ios_base :: hex ) 
{__CvT__record_line____(__CvT_miT,94,98);return _M_insert ( static_cast < long > ( static_cast < unsigned short > ( __n ) ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,94,100);return _M_insert ( static_cast < long > ( __n ) ) ; 
}} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
operator << ( int __n ) 
{ __CvT__record_line____(__CvT_miT,94,107);


__CvT__record_line____(__CvT_miT,94,110);const ios_base :: fmtflags __fmt = this -> flags ( ) & ios_base :: basefield ; 
__CvT__record_line____(__CvT_miT,94,111);if ( __fmt == ios_base :: oct || __fmt == ios_base :: hex ) 
{__CvT__record_line____(__CvT_miT,94,112);return _M_insert ( static_cast < long > ( static_cast < unsigned int > ( __n ) ) ) ; 
}else {
__CvT__record_line____(__CvT_miT,94,114);return _M_insert ( static_cast < long > ( __n ) ) ; 
}} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
operator << ( __streambuf_type * __sbin ) 
{ __CvT__record_line____(__CvT_miT,94,121);
__CvT__record_line____(__CvT_miT,94,122);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,94,123);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,94,124);if ( __cerb && __sbin ) 
{{ 
__CvT__record_line____(__CvT_miT,94,126);try 
{ 
__CvT__record_line____(__CvT_miT,94,128);if ( ! __copy_streambufs ( __sbin , this -> rdbuf ( ) ) ) 
{__CvT__record_line____(__CvT_miT,94,129);__err |= ios_base :: failbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,94,133);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,94,134);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,94,137);this -> _M_setstate ( ios_base :: failbit ) ; } 
} 
}else {__CvT__record_line____(__CvT_miT,94,139);if ( ! __sbin ) 
{__CvT__record_line____(__CvT_miT,94,140);__err |= ios_base :: badbit ; 
}}__CvT__record_line____(__CvT_miT,94,141);if ( __err ) 
{__CvT__record_line____(__CvT_miT,94,142);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,94,143);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
put ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,94,150);






__CvT__record_line____(__CvT_miT,94,157);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,94,158);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,94,160);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,94,161);try 
{ 
__CvT__record_line____(__CvT_miT,94,163);const int_type __put = this -> rdbuf ( ) -> sputc ( __c ) ; 
__CvT__record_line____(__CvT_miT,94,164);if ( traits_type :: eq_int_type ( __put , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,94,165);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,94,169);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,94,170);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,94,173);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,94,174);if ( __err ) 
{__CvT__record_line____(__CvT_miT,94,175);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,94,177);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
write ( const _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,94,184);







__CvT__record_line____(__CvT_miT,94,192);sentry __cerb ( * this ) ; 
__CvT__record_line____(__CvT_miT,94,193);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,94,195);try 
{ __CvT__record_line____(__CvT_miT,94,196);_M_write ( __s , __n ) ; } 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,94,199);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,94,200);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,94,203);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,94,205);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
flush ( ) 
{ __CvT__record_line____(__CvT_miT,94,212);



__CvT__record_line____(__CvT_miT,94,216);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,94,217);try 
{ 
__CvT__record_line____(__CvT_miT,94,219);if ( this -> rdbuf ( ) && this -> rdbuf ( ) -> pubsync ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,94,220);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,94,224);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,94,225);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,94,228);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,94,229);if ( __err ) 
{__CvT__record_line____(__CvT_miT,94,230);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,94,231);return * this ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_ostream < _CharT , _Traits >:: pos_type 
basic_ostream < _CharT , _Traits >:: 
tellp ( ) 
{ __CvT__record_line____(__CvT_miT,94,238);
__CvT__record_line____(__CvT_miT,94,239);pos_type __ret = pos_type ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,94,240);try 
{ 
__CvT__record_line____(__CvT_miT,94,242);if ( ! this -> fail ( ) ) 
{__CvT__record_line____(__CvT_miT,94,243);__ret = this -> rdbuf ( ) -> pubseekoff ( 0 , ios_base :: cur , ios_base :: out ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,94,247);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,94,248);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,94,251);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,94,252);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
seekp ( pos_type __pos ) 
{ __CvT__record_line____(__CvT_miT,94,259);
__CvT__record_line____(__CvT_miT,94,260);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,94,261);try 
{ 
__CvT__record_line____(__CvT_miT,94,263);if ( ! this -> fail ( ) ) 
{{ 


__CvT__record_line____(__CvT_miT,94,267);const pos_type __p = this -> rdbuf ( ) -> pubseekpos ( __pos , 
ios_base :: out ) ; 


__CvT__record_line____(__CvT_miT,94,271);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,94,272);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,94,277);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,94,278);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,94,281);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,94,282);if ( __err ) 
{__CvT__record_line____(__CvT_miT,94,283);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,94,284);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
basic_ostream < _CharT , _Traits >:: 
seekp ( off_type __off , ios_base :: seekdir __dir ) 
{ __CvT__record_line____(__CvT_miT,94,291);
__CvT__record_line____(__CvT_miT,94,292);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,94,293);try 
{ 
__CvT__record_line____(__CvT_miT,94,295);if ( ! this -> fail ( ) ) 
{{ 


__CvT__record_line____(__CvT_miT,94,299);const pos_type __p = this -> rdbuf ( ) -> pubseekoff ( __off , __dir , 
ios_base :: out ) ; 


__CvT__record_line____(__CvT_miT,94,303);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,94,304);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,94,309);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,94,310);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,94,313);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,94,314);if ( __err ) 
{__CvT__record_line____(__CvT_miT,94,315);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,94,316);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_ostream < _CharT , _Traits >& 
operator << ( basic_ostream < _CharT , _Traits >& __out , const char * __s ) 
{ __CvT__record_line____(__CvT_miT,94,322);
__CvT__record_line____(__CvT_miT,94,323);if ( ! __s ) 
{__CvT__record_line____(__CvT_miT,94,324);__out . setstate ( ios_base :: badbit ) ; 
}else {
{ 


__CvT__record_line____(__CvT_miT,94,329);const size_t __clen = char_traits < char >:: length ( __s ) ; 
__CvT__record_line____(__CvT_miT,94,330);try 
{ 
__CvT__record_line____(__CvT_miT,94,332);struct __ptr_guard 
{ 
_CharT * __p ; 
__ptr_guard ( _CharT * __ip ) : __p ( __ip ) { __CvT__record_line____(__CvT_miT,94,335);} 
~ __ptr_guard ( ) { __CvT__record_line____(__CvT_miT,94,336);delete [ ] __p ; } 
_CharT * __get ( ) { __CvT__record_line____(__CvT_miT,94,337);return __p ; } 
} __pg ( new _CharT [ __clen ] ) ; 

__CvT__record_line____(__CvT_miT,94,340);_CharT * __ws = __pg . __get ( ) ; 
__CvT__record_line____(__CvT_miT,94,341);for ( size_t __i = 0 ; __i < __clen ; ++ __i ) 
{__CvT__record_line____(__CvT_miT,94,342);__ws [ __i ] = __out . widen ( __s [ __i ] ) ; 
}__CvT__record_line____(__CvT_miT,94,343);__ostream_insert ( __out , __ws , __clen ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,94,347);__out . _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,94,348);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,94,351);__out . _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,94,353);return __out ; 
} 




extern template class basic_ostream < char > ; 
extern template ostream & endl ( ostream & ) ; 
extern template ostream & ends ( ostream & ) ; 
extern template ostream & flush ( ostream & ) ; 
extern template ostream & operator << ( ostream & , char ) ; 
extern template ostream & operator << ( ostream & , unsigned char ) ; 
extern template ostream & operator << ( ostream & , signed char ) ; 
extern template ostream & operator << ( ostream & , const char * ) ; 
extern template ostream & operator << ( ostream & , const unsigned char * ) ; 
extern template ostream & operator << ( ostream & , const signed char * ) ; 

extern template ostream & ostream :: _M_insert ( long ) ; 
extern template ostream & ostream :: _M_insert ( unsigned long ) ; 
extern template ostream & ostream :: _M_insert ( bool ) ; 

extern template ostream & ostream :: _M_insert ( long long ) ; 
extern template ostream & ostream :: _M_insert ( unsigned long long ) ; 

extern template ostream & ostream :: _M_insert ( double ) ; 
extern template ostream & ostream :: _M_insert ( long double ) ; 
extern template ostream & ostream :: _M_insert ( const void * ) ; 


extern template class basic_ostream < wchar_t > ; 
extern template wostream & endl ( wostream & ) ; 
extern template wostream & ends ( wostream & ) ; 
extern template wostream & flush ( wostream & ) ; 
extern template wostream & operator << ( wostream & , wchar_t ) ; 
extern template wostream & operator << ( wostream & , char ) ; 
extern template wostream & operator << ( wostream & , const wchar_t * ) ; 
extern template wostream & operator << ( wostream & , const char * ) ; 

extern template wostream & wostream :: _M_insert ( long ) ; 
extern template wostream & wostream :: _M_insert ( unsigned long ) ; 
extern template wostream & wostream :: _M_insert ( bool ) ; 

extern template wostream & wostream :: _M_insert ( long long ) ; 
extern template wostream & wostream :: _M_insert ( unsigned long long ) ; 

extern template wostream & wostream :: _M_insert ( double ) ; 
extern template wostream & wostream :: _M_insert ( long double ) ; 
extern template wostream & wostream :: _M_insert ( const void * ) ; 




} 
# 613 "/usr/include/c++/4.8/ostream" 2 3 
# 40 "/usr/include/c++/4.8/istream" 2 3 

namespace std 
{ 

# 57 "/usr/include/c++/4.8/istream" 3 
template < typename _CharT , typename _Traits > 
class basic_istream : virtual public basic_ios < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 


typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef basic_ios < _CharT , _Traits > __ios_type ; 
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef num_get < _CharT , istreambuf_iterator < _CharT , _Traits > > 
__num_get_type ; 
typedef ctype < _CharT > __ctype_type ; 

protected : 





streamsize _M_gcount ; 

public : 







explicit 
basic_istream ( __streambuf_type * __sb ) 
: _M_gcount ( streamsize ( 0 ) ) 
{ __CvT__record_line____(__CvT_miT,77,95);this -> init ( __sb ) ; } 






virtual 
~ basic_istream ( ) 
{ __CvT__record_line____(__CvT_miT,77,104);_M_gcount = streamsize ( 0 ) ; } 


class sentry ; 
friend class sentry ; 
# 119 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
operator >> ( __istream_type & ( * __pf ) ( __istream_type & ) ) 
{ __CvT__record_line____(__CvT_miT,77,121);return __pf ( * this ) ; } 

__istream_type & 
operator >> ( __ios_type & ( * __pf ) ( __ios_type & ) ) 
{ __CvT__record_line____(__CvT_miT,77,125);
__CvT__record_line____(__CvT_miT,77,126);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,77,127);return * this ; 
} 

__istream_type & 
operator >> ( ios_base & ( * __pf ) ( ios_base & ) ) 
{ __CvT__record_line____(__CvT_miT,77,132);
__CvT__record_line____(__CvT_miT,77,133);__pf ( * this ) ; 
__CvT__record_line____(__CvT_miT,77,134);return * this ; 
} 
# 167 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
operator >> ( bool & __n ) 
{ __CvT__record_line____(__CvT_miT,77,169);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( short & __n ) ; 

__istream_type & 
operator >> ( unsigned short & __n ) 
{ __CvT__record_line____(__CvT_miT,77,176);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( int & __n ) ; 

__istream_type & 
operator >> ( unsigned int & __n ) 
{ __CvT__record_line____(__CvT_miT,77,183);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( long & __n ) 
{ __CvT__record_line____(__CvT_miT,77,187);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( unsigned long & __n ) 
{ __CvT__record_line____(__CvT_miT,77,191);return _M_extract ( __n ) ; } 


__istream_type & 
operator >> ( long long & __n ) 
{ __CvT__record_line____(__CvT_miT,77,196);return _M_extract ( __n ) ; } 

__istream_type & 
operator >> ( unsigned long long & __n ) 
{ __CvT__record_line____(__CvT_miT,77,200);return _M_extract ( __n ) ; } 
# 213 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
operator >> ( float & __f ) 
{ __CvT__record_line____(__CvT_miT,77,215);return _M_extract ( __f ) ; } 

__istream_type & 
operator >> ( double & __f ) 
{ __CvT__record_line____(__CvT_miT,77,219);return _M_extract ( __f ) ; } 

__istream_type & 
operator >> ( long double & __f ) 
{ __CvT__record_line____(__CvT_miT,77,223);return _M_extract ( __f ) ; } 
# 234 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
operator >> ( void *& __p ) 
{ __CvT__record_line____(__CvT_miT,77,236);return _M_extract ( __p ) ; } 
# 258 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
operator >> ( __streambuf_type * __sb ) ; 
# 268 "/usr/include/c++/4.8/istream" 3 
streamsize 
gcount ( ) const 
{ __CvT__record_line____(__CvT_miT,77,270);return _M_gcount ; } 
# 301 "/usr/include/c++/4.8/istream" 3 
int_type 
get ( ) ; 
# 315 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
get ( char_type & __c ) ; 
# 342 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
get ( char_type * __s , streamsize __n , char_type __delim ) ; 
# 353 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
get ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,77,355);return this -> get ( __s , __n , this -> widen ( '\n' ) ) ; } 
# 376 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
get ( __streambuf_type & __sb , char_type __delim ) ; 
# 386 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
get ( __streambuf_type & __sb ) 
{ __CvT__record_line____(__CvT_miT,77,388);return this -> get ( __sb , this -> widen ( '\n' ) ) ; } 
# 415 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
getline ( char_type * __s , streamsize __n , char_type __delim ) ; 
# 426 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
getline ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,77,428);return this -> getline ( __s , __n , this -> widen ( '\n' ) ) ; } 
# 450 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
ignore ( streamsize __n , int_type __delim ) ; 

__istream_type & 
ignore ( streamsize __n ) ; 

__istream_type & 
ignore ( ) ; 
# 467 "/usr/include/c++/4.8/istream" 3 
int_type 
peek ( ) ; 
# 485 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
read ( char_type * __s , streamsize __n ) ; 
# 504 "/usr/include/c++/4.8/istream" 3 
streamsize 
readsome ( char_type * __s , streamsize __n ) ; 
# 521 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
putback ( char_type __c ) ; 
# 537 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
unget ( ) ; 
# 555 "/usr/include/c++/4.8/istream" 3 
int 
sync ( ) ; 
# 570 "/usr/include/c++/4.8/istream" 3 
pos_type 
tellg ( ) ; 
# 585 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
seekg ( pos_type ) ; 
# 601 "/usr/include/c++/4.8/istream" 3 
__istream_type & 
seekg ( off_type , ios_base :: seekdir ) ; 


protected : 
basic_istream ( ) 
: _M_gcount ( streamsize ( 0 ) ) 
{ __CvT__record_line____(__CvT_miT,77,608);this -> init ( 0 ) ; } 

template < typename _ValueT > 
__istream_type & 
_M_extract ( _ValueT & __v ) ; 
} ; 


template <> 
basic_istream < char >& 
basic_istream < char >:: 
getline ( char_type * __s , streamsize __n , char_type __delim ) ; 

template <> 
basic_istream < char >& 
basic_istream < char >:: 
ignore ( streamsize __n ) ; 

template <> 
basic_istream < char >& 
basic_istream < char >:: 
ignore ( streamsize __n , int_type __delim ) ; 


template <> 
basic_istream < wchar_t >& 
basic_istream < wchar_t >:: 
getline ( char_type * __s , streamsize __n , char_type __delim ) ; 

template <> 
basic_istream < wchar_t >& 
basic_istream < wchar_t >:: 
ignore ( streamsize __n ) ; 

template <> 
basic_istream < wchar_t >& 
basic_istream < wchar_t >:: 
ignore ( streamsize __n , int_type __delim ) ; 
# 656 "/usr/include/c++/4.8/istream" 3 
template < typename _CharT , typename _Traits > 
class basic_istream < _CharT , _Traits >:: sentry 
{ 

bool _M_ok ; 

public : 

typedef _Traits traits_type ; 
typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef typename __istream_type :: __ctype_type __ctype_type ; 
typedef typename _Traits :: int_type __int_type ; 
# 692 "/usr/include/c++/4.8/istream" 3 
explicit 
sentry ( basic_istream < _CharT , _Traits >& __is , bool __noskipws = false ) ; 
# 705 "/usr/include/c++/4.8/istream" 3 
operator bool ( ) const 
{ __CvT__record_line____(__CvT_miT,77,706);return _M_ok ; } 
} ; 
# 721 "/usr/include/c++/4.8/istream" 3 
template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT & __c ) ; 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , unsigned char & __c ) 
{ __CvT__record_line____(__CvT_miT,77,728);return ( __in >> reinterpret_cast < char &> ( __c ) ) ; } 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , signed char & __c ) 
{ __CvT__record_line____(__CvT_miT,77,733);return ( __in >> reinterpret_cast < char &> ( __c ) ) ; } 
# 763 "/usr/include/c++/4.8/istream" 3 
template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT * __s ) ; 


template <> 
basic_istream < char >& 
operator >> ( basic_istream < char >& __in , char * __s ) ; 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , unsigned char * __s ) 
{ __CvT__record_line____(__CvT_miT,77,775);return ( __in >> reinterpret_cast < char *> ( __s ) ) ; } 

template < class _Traits > 
inline basic_istream < char , _Traits >& 
operator >> ( basic_istream < char , _Traits >& __in , signed char * __s ) 
{ __CvT__record_line____(__CvT_miT,77,780);return ( __in >> reinterpret_cast < char *> ( __s ) ) ; } 
# 794 "/usr/include/c++/4.8/istream" 3 
template < typename _CharT , typename _Traits > 
class basic_iostream 
: public basic_istream < _CharT , _Traits > , 
public basic_ostream < _CharT , _Traits > 
{ 
public : 



typedef _CharT char_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef typename _Traits :: pos_type pos_type ; 
typedef typename _Traits :: off_type off_type ; 
typedef _Traits traits_type ; 


typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_ostream < _CharT , _Traits > __ostream_type ; 







explicit 
basic_iostream ( basic_streambuf < _CharT , _Traits >* __sb ) 
: __istream_type ( __sb ) , __ostream_type ( __sb ) { __CvT__record_line____(__CvT_miT,77,821);} 




virtual 
~ basic_iostream ( ) { __CvT__record_line____(__CvT_miT,77,827);} 

protected : 
basic_iostream ( ) 
: __istream_type ( ) , __ostream_type ( ) { __CvT__record_line____(__CvT_miT,77,831);} 
} ; 
# 854 "/usr/include/c++/4.8/istream" 3 
template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
ws ( basic_istream < _CharT , _Traits >& __is ) ; 
# 879 "/usr/include/c++/4.8/istream" 3 

} 

# 1 "/usr/include/c++/4.8/bits/istream.tcc" 1 3 
# 37 "/usr/include/c++/4.8/bits/istream.tcc" 3 

# 38 "/usr/include/c++/4.8/bits/istream.tcc" 3 



namespace std 
{ 


template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >:: sentry :: 
sentry ( basic_istream < _CharT , _Traits >& __in , bool __noskip ) : _M_ok ( false ) 
{ __CvT__record_line____(__CvT_miT,95,48);
__CvT__record_line____(__CvT_miT,95,49);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,50);if ( __in . good ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,52);if ( __in . tie ( ) ) 
{__CvT__record_line____(__CvT_miT,95,53);__in . tie ( ) -> flush ( ) ; 
}__CvT__record_line____(__CvT_miT,95,54);if ( ! __noskip && bool ( __in . flags ( ) & ios_base :: skipws ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,56);const __int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,57);__streambuf_type * __sb = __in . rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,58);__int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,95,60);const __ctype_type & __ct = __check_facet ( __in . _M_ctype ) ; 
__CvT__record_line____(__CvT_miT,95,61);while ( ! traits_type :: eq_int_type ( __c , __eof ) 
&& __ct . is ( ctype_base :: space , 
traits_type :: to_char_type ( __c ) ) ) 
{__CvT__record_line____(__CvT_miT,95,64);__c = __sb -> snextc ( ) ; 




}__CvT__record_line____(__CvT_miT,95,69);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,70);__err |= ios_base :: eofbit ; 
}} 
}} 

}__CvT__record_line____(__CvT_miT,95,74);if ( __in . good ( ) && __err == ios_base :: goodbit ) 
{__CvT__record_line____(__CvT_miT,95,75);_M_ok = true ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,78);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,95,79);__in . setstate ( __err ) ; 
} 
}} 

template < typename _CharT , typename _Traits > 
template < typename _ValueT > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
_M_extract ( _ValueT & __v ) 
{ __CvT__record_line____(__CvT_miT,95,88);
__CvT__record_line____(__CvT_miT,95,89);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,95,90);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,92);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,93);try 
{ 
__CvT__record_line____(__CvT_miT,95,95);const __num_get_type & __ng = __check_facet ( this -> _M_num_get ) ; 
__CvT__record_line____(__CvT_miT,95,96);__ng . get ( * this , 0 , * this , __err , __v ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,100);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,101);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,104);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,105);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,106);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,108);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
operator >> ( short & __n ) 
{ __CvT__record_line____(__CvT_miT,95,115);


__CvT__record_line____(__CvT_miT,95,118);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,95,119);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,121);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,122);try 
{ 
__CvT__record_line____(__CvT_miT,95,124);long __l ; 
__CvT__record_line____(__CvT_miT,95,125);const __num_get_type & __ng = __check_facet ( this -> _M_num_get ) ; 
__CvT__record_line____(__CvT_miT,95,126);__ng . get ( * this , 0 , * this , __err , __l ) ; 



__CvT__record_line____(__CvT_miT,95,130);if ( __l < __gnu_cxx :: __numeric_traits < short >:: __min ) 
{{ 
__CvT__record_line____(__CvT_miT,95,132);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,95,133);__n = __gnu_cxx :: __numeric_traits < short >:: __min ; 
} 
}else {__CvT__record_line____(__CvT_miT,95,135);if ( __l > __gnu_cxx :: __numeric_traits < short >:: __max ) 
{{ 
__CvT__record_line____(__CvT_miT,95,137);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,95,138);__n = __gnu_cxx :: __numeric_traits < short >:: __max ; 
} 
}else {
__CvT__record_line____(__CvT_miT,95,141);__n = short ( __l ) ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,145);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,146);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,149);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,150);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,151);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,153);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
operator >> ( int & __n ) 
{ __CvT__record_line____(__CvT_miT,95,160);


__CvT__record_line____(__CvT_miT,95,163);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,95,164);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,166);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,167);try 
{ 
__CvT__record_line____(__CvT_miT,95,169);long __l ; 
__CvT__record_line____(__CvT_miT,95,170);const __num_get_type & __ng = __check_facet ( this -> _M_num_get ) ; 
__CvT__record_line____(__CvT_miT,95,171);__ng . get ( * this , 0 , * this , __err , __l ) ; 



__CvT__record_line____(__CvT_miT,95,175);if ( __l < __gnu_cxx :: __numeric_traits < int >:: __min ) 
{{ 
__CvT__record_line____(__CvT_miT,95,177);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,95,178);__n = __gnu_cxx :: __numeric_traits < int >:: __min ; 
} 
}else {__CvT__record_line____(__CvT_miT,95,180);if ( __l > __gnu_cxx :: __numeric_traits < int >:: __max ) 
{{ 
__CvT__record_line____(__CvT_miT,95,182);__err |= ios_base :: failbit ; 
__CvT__record_line____(__CvT_miT,95,183);__n = __gnu_cxx :: __numeric_traits < int >:: __max ; 
} 
}else {
__CvT__record_line____(__CvT_miT,95,186);__n = int ( __l ) ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,190);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,191);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,194);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,195);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,196);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,198);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
operator >> ( __streambuf_type * __sbout ) 
{ __CvT__record_line____(__CvT_miT,95,205);
__CvT__record_line____(__CvT_miT,95,206);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,207);sentry __cerb ( * this , false ) ; 
__CvT__record_line____(__CvT_miT,95,208);if ( __cerb && __sbout ) 
{{ 
__CvT__record_line____(__CvT_miT,95,210);try 
{ 
__CvT__record_line____(__CvT_miT,95,212);bool __ineof ; 
__CvT__record_line____(__CvT_miT,95,213);if ( ! __copy_streambufs_eof ( this -> rdbuf ( ) , __sbout , __ineof ) ) 
{__CvT__record_line____(__CvT_miT,95,214);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,95,215);if ( __ineof ) 
{__CvT__record_line____(__CvT_miT,95,216);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,220);this -> _M_setstate ( ios_base :: failbit ) ; 
__CvT__record_line____(__CvT_miT,95,221);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,224);this -> _M_setstate ( ios_base :: failbit ) ; } 
} 
}else {__CvT__record_line____(__CvT_miT,95,226);if ( ! __sbout ) 
{__CvT__record_line____(__CvT_miT,95,227);__err |= ios_base :: failbit ; 
}}__CvT__record_line____(__CvT_miT,95,228);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,229);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,95,230);return * this ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_istream < _CharT , _Traits >:: int_type 
basic_istream < _CharT , _Traits >:: 
get ( void ) 
{ __CvT__record_line____(__CvT_miT,95,237);
__CvT__record_line____(__CvT_miT,95,238);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,239);int_type __c = __eof ; 
__CvT__record_line____(__CvT_miT,95,240);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,241);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,242);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,243);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,245);try 
{ 
__CvT__record_line____(__CvT_miT,95,247);__c = this -> rdbuf ( ) -> sbumpc ( ) ; 

__CvT__record_line____(__CvT_miT,95,249);if ( ! traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,250);_M_gcount = 1 ; 
}else {
__CvT__record_line____(__CvT_miT,95,252);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,256);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,257);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,260);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,95,262);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,95,263);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,95,264);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,265);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,95,266);return __c ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
get ( char_type & __c ) 
{ __CvT__record_line____(__CvT_miT,95,273);
__CvT__record_line____(__CvT_miT,95,274);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,275);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,276);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,277);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,279);try 
{ 
__CvT__record_line____(__CvT_miT,95,281);const int_type __cb = this -> rdbuf ( ) -> sbumpc ( ) ; 

__CvT__record_line____(__CvT_miT,95,283);if ( ! traits_type :: eq_int_type ( __cb , traits_type :: eof ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,285);_M_gcount = 1 ; 
__CvT__record_line____(__CvT_miT,95,286);__c = traits_type :: to_char_type ( __cb ) ; 
} 
}else {
__CvT__record_line____(__CvT_miT,95,289);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,293);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,294);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,297);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,95,299);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,95,300);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,95,301);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,302);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,95,303);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
get ( char_type * __s , streamsize __n , char_type __delim ) 
{ __CvT__record_line____(__CvT_miT,95,310);
__CvT__record_line____(__CvT_miT,95,311);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,312);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,313);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,314);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,316);try 
{ 
__CvT__record_line____(__CvT_miT,95,318);const int_type __idelim = traits_type :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,95,319);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,320);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,321);int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,95,323);while ( _M_gcount + 1 < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,327);* __s ++ = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,95,328);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,95,329);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,95,331);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,332);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,336);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,337);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,340);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 


}__CvT__record_line____(__CvT_miT,95,344);if ( __n > 0 ) 
{__CvT__record_line____(__CvT_miT,95,345);* __s = char_type ( ) ; 
}__CvT__record_line____(__CvT_miT,95,346);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,95,347);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,95,348);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,349);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,95,350);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
get ( __streambuf_type & __sb , char_type __delim ) 
{ __CvT__record_line____(__CvT_miT,95,357);
__CvT__record_line____(__CvT_miT,95,358);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,359);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,360);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,361);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,363);try 
{ 
__CvT__record_line____(__CvT_miT,95,365);const int_type __idelim = traits_type :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,95,366);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,367);__streambuf_type * __this_sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,368);int_type __c = __this_sb -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,95,369);char_type __c2 = traits_type :: to_char_type ( __c ) ; 

__CvT__record_line____(__CvT_miT,95,371);while ( ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __idelim ) 
&& ! traits_type :: eq_int_type ( __sb . sputc ( __c2 ) , __eof ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,375);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,95,376);__c = __this_sb -> snextc ( ) ; 
__CvT__record_line____(__CvT_miT,95,377);__c2 = traits_type :: to_char_type ( __c ) ; 
} 
}__CvT__record_line____(__CvT_miT,95,379);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,380);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,384);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,385);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,388);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,95,390);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,95,391);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,95,392);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,393);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,95,394);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
getline ( char_type * __s , streamsize __n , char_type __delim ) 
{ __CvT__record_line____(__CvT_miT,95,401);
__CvT__record_line____(__CvT_miT,95,402);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,403);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,404);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,405);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,407);try 
{ 
__CvT__record_line____(__CvT_miT,95,409);const int_type __idelim = traits_type :: to_int_type ( __delim ) ; 
__CvT__record_line____(__CvT_miT,95,410);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,411);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,412);int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,95,414);while ( _M_gcount + 1 < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,418);* __s ++ = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,95,419);__c = __sb -> snextc ( ) ; 
__CvT__record_line____(__CvT_miT,95,420);++ _M_gcount ; 
} 
}__CvT__record_line____(__CvT_miT,95,422);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,423);__err |= ios_base :: eofbit ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,95,426);if ( traits_type :: eq_int_type ( __c , __idelim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,428);__sb -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,95,429);++ _M_gcount ; 
} 
}else {
__CvT__record_line____(__CvT_miT,95,432);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,437);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,438);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,441);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 


}__CvT__record_line____(__CvT_miT,95,445);if ( __n > 0 ) 
{__CvT__record_line____(__CvT_miT,95,446);* __s = char_type ( ) ; 
}__CvT__record_line____(__CvT_miT,95,447);if ( ! _M_gcount ) 
{__CvT__record_line____(__CvT_miT,95,448);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,95,449);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,450);this -> setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,95,451);return * this ; 
} 




template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
ignore ( void ) 
{ __CvT__record_line____(__CvT_miT,95,461);
__CvT__record_line____(__CvT_miT,95,462);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,463);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,464);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,466);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,467);try 
{ 
__CvT__record_line____(__CvT_miT,95,469);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,470);__streambuf_type * __sb = this -> rdbuf ( ) ; 

__CvT__record_line____(__CvT_miT,95,472);if ( traits_type :: eq_int_type ( __sb -> sbumpc ( ) , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,473);__err |= ios_base :: eofbit ; 
}else {
__CvT__record_line____(__CvT_miT,95,475);_M_gcount = 1 ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,479);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,480);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,483);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,484);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,485);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,487);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
ignore ( streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,95,494);
__CvT__record_line____(__CvT_miT,95,495);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,496);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,497);if ( __cerb && __n > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,95,499);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,500);try 
{ 
__CvT__record_line____(__CvT_miT,95,502);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,503);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,504);int_type __c = __sb -> sgetc ( ) ; 
# 513 "/usr/include/c++/4.8/bits/istream.tcc" 3 
__CvT__record_line____(__CvT_miT,95,513);bool __large_ignore = false ; 
__CvT__record_line____(__CvT_miT,95,514);while ( true ) 
{{ 
__CvT__record_line____(__CvT_miT,95,516);while ( _M_gcount < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,519);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,95,520);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,95,522);if ( __n == __gnu_cxx :: __numeric_traits < streamsize >:: __max 
&& ! traits_type :: eq_int_type ( __c , __eof ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,525);_M_gcount = 
__gnu_cxx :: __numeric_traits < streamsize >:: __min ; 
__CvT__record_line____(__CvT_miT,95,527);__large_ignore = true ; 
} 
}else {
__CvT__record_line____(__CvT_miT,95,530);break ; 
}} 

}__CvT__record_line____(__CvT_miT,95,533);if ( __large_ignore ) 
{__CvT__record_line____(__CvT_miT,95,534);_M_gcount = __gnu_cxx :: __numeric_traits < streamsize >:: __max ; 

}__CvT__record_line____(__CvT_miT,95,536);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,537);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,541);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,542);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,545);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,546);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,547);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,549);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
ignore ( streamsize __n , int_type __delim ) 
{ __CvT__record_line____(__CvT_miT,95,556);
__CvT__record_line____(__CvT_miT,95,557);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,558);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,559);if ( __cerb && __n > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,95,561);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,562);try 
{ 
__CvT__record_line____(__CvT_miT,95,564);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,565);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,566);int_type __c = __sb -> sgetc ( ) ; 


__CvT__record_line____(__CvT_miT,95,569);bool __large_ignore = false ; 
__CvT__record_line____(__CvT_miT,95,570);while ( true ) 
{{ 
__CvT__record_line____(__CvT_miT,95,572);while ( _M_gcount < __n 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __delim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,576);++ _M_gcount ; 
__CvT__record_line____(__CvT_miT,95,577);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,95,579);if ( __n == __gnu_cxx :: __numeric_traits < streamsize >:: __max 
&& ! traits_type :: eq_int_type ( __c , __eof ) 
&& ! traits_type :: eq_int_type ( __c , __delim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,583);_M_gcount = 
__gnu_cxx :: __numeric_traits < streamsize >:: __min ; 
__CvT__record_line____(__CvT_miT,95,585);__large_ignore = true ; 
} 
}else {
__CvT__record_line____(__CvT_miT,95,588);break ; 
}} 

}__CvT__record_line____(__CvT_miT,95,591);if ( __large_ignore ) 
{__CvT__record_line____(__CvT_miT,95,592);_M_gcount = __gnu_cxx :: __numeric_traits < streamsize >:: __max ; 

}__CvT__record_line____(__CvT_miT,95,594);if ( traits_type :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,595);__err |= ios_base :: eofbit ; 
}else {__CvT__record_line____(__CvT_miT,95,596);if ( traits_type :: eq_int_type ( __c , __delim ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,598);if ( _M_gcount 
< __gnu_cxx :: __numeric_traits < streamsize >:: __max ) 
{__CvT__record_line____(__CvT_miT,95,600);++ _M_gcount ; 
}__CvT__record_line____(__CvT_miT,95,601);__sb -> sbumpc ( ) ; 
} 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,606);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,607);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,610);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,611);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,612);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,614);return * this ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_istream < _CharT , _Traits >:: int_type 
basic_istream < _CharT , _Traits >:: 
peek ( void ) 
{ __CvT__record_line____(__CvT_miT,95,621);
__CvT__record_line____(__CvT_miT,95,622);int_type __c = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,623);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,624);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,625);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,627);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,628);try 
{ 
__CvT__record_line____(__CvT_miT,95,630);__c = this -> rdbuf ( ) -> sgetc ( ) ; 
__CvT__record_line____(__CvT_miT,95,631);if ( traits_type :: eq_int_type ( __c , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,95,632);__err |= ios_base :: eofbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,636);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,637);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,640);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,641);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,642);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,644);return __c ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
read ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,95,651);
__CvT__record_line____(__CvT_miT,95,652);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,653);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,654);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,656);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,657);try 
{ 
__CvT__record_line____(__CvT_miT,95,659);_M_gcount = this -> rdbuf ( ) -> sgetn ( __s , __n ) ; 
__CvT__record_line____(__CvT_miT,95,660);if ( _M_gcount != __n ) 
{__CvT__record_line____(__CvT_miT,95,661);__err |= ( ios_base :: eofbit | ios_base :: failbit ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,665);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,666);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,669);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,670);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,671);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,673);return * this ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_istream < _CharT , _Traits >:: 
readsome ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,95,680);
__CvT__record_line____(__CvT_miT,95,681);_M_gcount = 0 ; 
__CvT__record_line____(__CvT_miT,95,682);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,683);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,685);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,686);try 
{ 

__CvT__record_line____(__CvT_miT,95,689);const streamsize __num = this -> rdbuf ( ) -> in_avail ( ) ; 
__CvT__record_line____(__CvT_miT,95,690);if ( __num > 0 ) 
{__CvT__record_line____(__CvT_miT,95,691);_M_gcount = this -> rdbuf ( ) -> sgetn ( __s , std :: min ( __num , __n ) ) ; 
}else {__CvT__record_line____(__CvT_miT,95,692);if ( __num == - 1 ) 
{__CvT__record_line____(__CvT_miT,95,693);__err |= ios_base :: eofbit ; 
}}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,697);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,698);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,701);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,702);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,703);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,705);return _M_gcount ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
putback ( char_type __c ) 
{ __CvT__record_line____(__CvT_miT,95,712);


__CvT__record_line____(__CvT_miT,95,715);_M_gcount = 0 ; 

__CvT__record_line____(__CvT_miT,95,717);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,95,718);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,719);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,721);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,722);try 
{ 
__CvT__record_line____(__CvT_miT,95,724);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,725);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,726);if ( ! __sb 
|| traits_type :: eq_int_type ( __sb -> sputbackc ( __c ) , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,728);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,732);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,733);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,736);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,737);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,738);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,740);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
unget ( void ) 
{ __CvT__record_line____(__CvT_miT,95,747);


__CvT__record_line____(__CvT_miT,95,750);_M_gcount = 0 ; 

__CvT__record_line____(__CvT_miT,95,752);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,95,753);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,754);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,756);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,757);try 
{ 
__CvT__record_line____(__CvT_miT,95,759);const int_type __eof = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,760);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,761);if ( ! __sb 
|| traits_type :: eq_int_type ( __sb -> sungetc ( ) , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,763);__err |= ios_base :: badbit ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,767);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,768);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,771);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,772);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,773);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,775);return * this ; 
} 

template < typename _CharT , typename _Traits > 
int 
basic_istream < _CharT , _Traits >:: 
sync ( void ) 
{ __CvT__record_line____(__CvT_miT,95,782);


__CvT__record_line____(__CvT_miT,95,785);int __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,95,786);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,787);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,789);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,790);try 
{ 
__CvT__record_line____(__CvT_miT,95,792);__streambuf_type * __sb = this -> rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,793);if ( __sb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,795);if ( __sb -> pubsync ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,95,796);__err |= ios_base :: badbit ; 
}else {
__CvT__record_line____(__CvT_miT,95,798);__ret = 0 ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,803);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,804);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,807);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,808);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,809);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,811);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_istream < _CharT , _Traits >:: pos_type 
basic_istream < _CharT , _Traits >:: 
tellg ( void ) 
{ __CvT__record_line____(__CvT_miT,95,818);


__CvT__record_line____(__CvT_miT,95,821);pos_type __ret = pos_type ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,95,822);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,823);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,825);try 
{ 
__CvT__record_line____(__CvT_miT,95,827);if ( ! this -> fail ( ) ) 
{__CvT__record_line____(__CvT_miT,95,828);__ret = this -> rdbuf ( ) -> pubseekoff ( 0 , ios_base :: cur , 
ios_base :: in ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,833);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,834);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,837);this -> _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,95,839);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
seekg ( pos_type __pos ) 
{ __CvT__record_line____(__CvT_miT,95,846);



__CvT__record_line____(__CvT_miT,95,850);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,95,851);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,852);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,854);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,855);try 
{ 
__CvT__record_line____(__CvT_miT,95,857);if ( ! this -> fail ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,95,860);const pos_type __p = this -> rdbuf ( ) -> pubseekpos ( __pos , 
ios_base :: in ) ; 


__CvT__record_line____(__CvT_miT,95,864);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,95,865);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,870);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,871);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,874);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,875);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,876);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,878);return * this ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
basic_istream < _CharT , _Traits >:: 
seekg ( off_type __off , ios_base :: seekdir __dir ) 
{ __CvT__record_line____(__CvT_miT,95,885);



__CvT__record_line____(__CvT_miT,95,889);this -> clear ( this -> rdstate ( ) & ~ ios_base :: eofbit ) ; 
__CvT__record_line____(__CvT_miT,95,890);sentry __cerb ( * this , true ) ; 
__CvT__record_line____(__CvT_miT,95,891);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,893);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,894);try 
{ 
__CvT__record_line____(__CvT_miT,95,896);if ( ! this -> fail ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,95,899);const pos_type __p = this -> rdbuf ( ) -> pubseekoff ( __off , __dir , 
ios_base :: in ) ; 


__CvT__record_line____(__CvT_miT,95,903);if ( __p == pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,95,904);__err |= ios_base :: failbit ; 
}} 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,909);this -> _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,910);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,913);this -> _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,914);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,915);this -> setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,917);return * this ; 
} 


template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT & __c ) 
{ __CvT__record_line____(__CvT_miT,95,924);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef typename __istream_type :: int_type __int_type ; 

__CvT__record_line____(__CvT_miT,95,928);typename __istream_type :: sentry __cerb ( __in , false ) ; 
__CvT__record_line____(__CvT_miT,95,929);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,931);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,932);try 
{ 
__CvT__record_line____(__CvT_miT,95,934);const __int_type __cb = __in . rdbuf ( ) -> sbumpc ( ) ; 
__CvT__record_line____(__CvT_miT,95,935);if ( ! _Traits :: eq_int_type ( __cb , _Traits :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,95,936);__c = _Traits :: to_char_type ( __cb ) ; 
}else {
__CvT__record_line____(__CvT_miT,95,938);__err |= ( ios_base :: eofbit | ios_base :: failbit ) ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,942);__in . _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,943);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,946);__in . _M_setstate ( ios_base :: badbit ) ; } 
__CvT__record_line____(__CvT_miT,95,947);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,948);__in . setstate ( __err ) ; 
}} 
}__CvT__record_line____(__CvT_miT,95,950);return __in ; 
} 

template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
operator >> ( basic_istream < _CharT , _Traits >& __in , _CharT * __s ) 
{ __CvT__record_line____(__CvT_miT,95,956);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef typename _Traits :: int_type int_type ; 
typedef _CharT char_type ; 
typedef ctype < _CharT > __ctype_type ; 

__CvT__record_line____(__CvT_miT,95,963);streamsize __extracted = 0 ; 
__CvT__record_line____(__CvT_miT,95,964);ios_base :: iostate __err = ios_base :: goodbit ; 
__CvT__record_line____(__CvT_miT,95,965);typename __istream_type :: sentry __cerb ( __in , false ) ; 
__CvT__record_line____(__CvT_miT,95,966);if ( __cerb ) 
{{ 
__CvT__record_line____(__CvT_miT,95,968);try 
{ 

__CvT__record_line____(__CvT_miT,95,971);streamsize __num = __in . width ( ) ; 
__CvT__record_line____(__CvT_miT,95,972);if ( __num <= 0 ) 
{__CvT__record_line____(__CvT_miT,95,973);__num = __gnu_cxx :: __numeric_traits < streamsize >:: __max ; 

}__CvT__record_line____(__CvT_miT,95,975);const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) ) ; 

__CvT__record_line____(__CvT_miT,95,977);const int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,978);__streambuf_type * __sb = __in . rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,979);int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,95,981);while ( __extracted < __num - 1 
&& ! _Traits :: eq_int_type ( __c , __eof ) 
&& ! __ct . is ( ctype_base :: space , 
_Traits :: to_char_type ( __c ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,95,986);* __s ++ = _Traits :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,95,987);++ __extracted ; 
__CvT__record_line____(__CvT_miT,95,988);__c = __sb -> snextc ( ) ; 
} 
}__CvT__record_line____(__CvT_miT,95,990);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,991);__err |= ios_base :: eofbit ; 



}__CvT__record_line____(__CvT_miT,95,995);* __s = char_type ( ) ; 
__CvT__record_line____(__CvT_miT,95,996);__in . width ( 0 ) ; 
} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,95,1000);__in . _M_setstate ( ios_base :: badbit ) ; 
__CvT__record_line____(__CvT_miT,95,1001);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,95,1004);__in . _M_setstate ( ios_base :: badbit ) ; } 
} 
}__CvT__record_line____(__CvT_miT,95,1006);if ( ! __extracted ) 
{__CvT__record_line____(__CvT_miT,95,1007);__err |= ios_base :: failbit ; 
}__CvT__record_line____(__CvT_miT,95,1008);if ( __err ) 
{__CvT__record_line____(__CvT_miT,95,1009);__in . setstate ( __err ) ; 
}__CvT__record_line____(__CvT_miT,95,1010);return __in ; 
} 


template < typename _CharT , typename _Traits > 
basic_istream < _CharT , _Traits >& 
ws ( basic_istream < _CharT , _Traits >& __in ) 
{ __CvT__record_line____(__CvT_miT,95,1017);
typedef basic_istream < _CharT , _Traits > __istream_type ; 
typedef basic_streambuf < _CharT , _Traits > __streambuf_type ; 
typedef typename __istream_type :: int_type __int_type ; 
typedef ctype < _CharT > __ctype_type ; 

__CvT__record_line____(__CvT_miT,95,1023);const __ctype_type & __ct = use_facet < __ctype_type > ( __in . getloc ( ) ) ; 
__CvT__record_line____(__CvT_miT,95,1024);const __int_type __eof = _Traits :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,95,1025);__streambuf_type * __sb = __in . rdbuf ( ) ; 
__CvT__record_line____(__CvT_miT,95,1026);__int_type __c = __sb -> sgetc ( ) ; 

__CvT__record_line____(__CvT_miT,95,1028);while ( ! _Traits :: eq_int_type ( __c , __eof ) 
&& __ct . is ( ctype_base :: space , _Traits :: to_char_type ( __c ) ) ) 
{__CvT__record_line____(__CvT_miT,95,1030);__c = __sb -> snextc ( ) ; 

}__CvT__record_line____(__CvT_miT,95,1032);if ( _Traits :: eq_int_type ( __c , __eof ) ) 
{__CvT__record_line____(__CvT_miT,95,1033);__in . setstate ( ios_base :: eofbit ) ; 
}__CvT__record_line____(__CvT_miT,95,1034);return __in ; 
} 




extern template class basic_istream < char > ; 
extern template istream & ws ( istream & ) ; 
extern template istream & operator >> ( istream & , char & ) ; 
extern template istream & operator >> ( istream & , char * ) ; 
extern template istream & operator >> ( istream & , unsigned char & ) ; 
extern template istream & operator >> ( istream & , signed char & ) ; 
extern template istream & operator >> ( istream & , unsigned char * ) ; 
extern template istream & operator >> ( istream & , signed char * ) ; 

extern template istream & istream :: _M_extract ( unsigned short & ) ; 
extern template istream & istream :: _M_extract ( unsigned int & ) ; 
extern template istream & istream :: _M_extract ( long & ) ; 
extern template istream & istream :: _M_extract ( unsigned long & ) ; 
extern template istream & istream :: _M_extract ( bool & ) ; 

extern template istream & istream :: _M_extract ( long long & ) ; 
extern template istream & istream :: _M_extract ( unsigned long long & ) ; 

extern template istream & istream :: _M_extract ( float & ) ; 
extern template istream & istream :: _M_extract ( double & ) ; 
extern template istream & istream :: _M_extract ( long double & ) ; 
extern template istream & istream :: _M_extract ( void *& ) ; 

extern template class basic_iostream < char > ; 


extern template class basic_istream < wchar_t > ; 
extern template wistream & ws ( wistream & ) ; 
extern template wistream & operator >> ( wistream & , wchar_t & ) ; 
extern template wistream & operator >> ( wistream & , wchar_t * ) ; 

extern template wistream & wistream :: _M_extract ( unsigned short & ) ; 
extern template wistream & wistream :: _M_extract ( unsigned int & ) ; 
extern template wistream & wistream :: _M_extract ( long & ) ; 
extern template wistream & wistream :: _M_extract ( unsigned long & ) ; 
extern template wistream & wistream :: _M_extract ( bool & ) ; 

extern template wistream & wistream :: _M_extract ( long long & ) ; 
extern template wistream & wistream :: _M_extract ( unsigned long long & ) ; 

extern template wistream & wistream :: _M_extract ( float & ) ; 
extern template wistream & wistream :: _M_extract ( double & ) ; 
extern template wistream & wistream :: _M_extract ( long double & ) ; 
extern template wistream & wistream :: _M_extract ( void *& ) ; 

extern template class basic_iostream < wchar_t > ; 




} 
# 883 "/usr/include/c++/4.8/istream" 2 3 
# 39 "/usr/include/c++/4.8/fstream" 2 3 

# 1 "/usr/include/c++/4.8/bits/codecvt.h" 1 3 
# 39 "/usr/include/c++/4.8/bits/codecvt.h" 3 

# 40 "/usr/include/c++/4.8/bits/codecvt.h" 3 

namespace std 
{ 



class codecvt_base 
{ 
public : 
enum result 
{ 
ok , 
partial , 
error , 
noconv 
} ; 
} ; 
# 67 "/usr/include/c++/4.8/bits/codecvt.h" 3 
template < typename _InternT , typename _ExternT , typename _StateT > 
class __codecvt_abstract_base 
: public locale :: facet , public codecvt_base 
{ 
public : 

typedef codecvt_base :: result result ; 
typedef _InternT intern_type ; 
typedef _ExternT extern_type ; 
typedef _StateT state_type ; 
# 115 "/usr/include/c++/4.8/bits/codecvt.h" 3 
result 
out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const 
{ __CvT__record_line____(__CvT_miT,96,120);
__CvT__record_line____(__CvT_miT,96,121);return this -> do_out ( __state , __from , __from_end , __from_next , 
__to , __to_end , __to_next ) ; 
} 
# 154 "/usr/include/c++/4.8/bits/codecvt.h" 3 
result 
unshift ( state_type & __state , extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const 
{ __CvT__record_line____(__CvT_miT,96,157);return this -> do_unshift ( __state , __to , __to_end , __to_next ) ; } 
# 195 "/usr/include/c++/4.8/bits/codecvt.h" 3 
result 
in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const 
{ __CvT__record_line____(__CvT_miT,96,200);
__CvT__record_line____(__CvT_miT,96,201);return this -> do_in ( __state , __from , __from_end , __from_next , 
__to , __to_end , __to_next ) ; 
} 

int 
encoding ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,96,207);return this -> do_encoding ( ) ; } 

bool 
always_noconv ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,96,211);return this -> do_always_noconv ( ) ; } 

int 
length ( state_type & __state , const extern_type * __from , 
const extern_type * __end , size_t __max ) const 
{ __CvT__record_line____(__CvT_miT,96,216);return this -> do_length ( __state , __from , __end , __max ) ; } 

int 
max_length ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,96,220);return this -> do_max_length ( ) ; } 

protected : 
explicit 
__codecvt_abstract_base ( size_t __refs = 0 ) : locale :: facet ( __refs ) { __CvT__record_line____(__CvT_miT,96,224);} 

virtual 
~ __codecvt_abstract_base ( ) { __CvT__record_line____(__CvT_miT,96,227);} 
# 236 "/usr/include/c++/4.8/bits/codecvt.h" 3 
virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const = 0 ; 

virtual result 
do_unshift ( state_type & __state , extern_type * __to , 
extern_type * __to_end , extern_type *& __to_next ) const = 0 ; 

virtual result 
do_in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const = 0 ; 

virtual int 
do_encoding ( ) const throw ( ) = 0 ; 

virtual bool 
do_always_noconv ( ) const throw ( ) = 0 ; 

virtual int 
do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const = 0 ; 

virtual int 
do_max_length ( ) const throw ( ) = 0 ; 
} ; 
# 275 "/usr/include/c++/4.8/bits/codecvt.h" 3 
template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt 
: public __codecvt_abstract_base < _InternT , _ExternT , _StateT > 
{ 
public : 

typedef codecvt_base :: result result ; 
typedef _InternT intern_type ; 
typedef _ExternT extern_type ; 
typedef _StateT state_type ; 

protected : 
__c_locale _M_c_locale_codecvt ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) 
: __codecvt_abstract_base < _InternT , _ExternT , _StateT > ( __refs ) , 
_M_c_locale_codecvt ( 0 ) 
{ __CvT__record_line____(__CvT_miT,96,296);} 

explicit 
codecvt ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
virtual 
~ codecvt ( ) { __CvT__record_line____(__CvT_miT,96,303);} 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , extern_type * __to , 
extern_type * __to_end , extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual int 
do_encoding ( ) const throw ( ) ; 

virtual bool 
do_always_noconv ( ) const throw ( ) ; 

virtual int 
do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 

template < typename _InternT , typename _ExternT , typename _StateT > 
locale :: id codecvt < _InternT , _ExternT , _StateT >:: id ; 


template <> 
class codecvt < char , char , mbstate_t > 
: public __codecvt_abstract_base < char , char , mbstate_t > 
{ 
public : 

typedef char intern_type ; 
typedef char extern_type ; 
typedef mbstate_t state_type ; 

protected : 
__c_locale _M_c_locale_codecvt ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) ; 

explicit 
codecvt ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
virtual 
~ codecvt ( ) ; 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , extern_type * __to , 
extern_type * __to_end , extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , const extern_type * __from , 
const extern_type * __from_end , const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual int 
do_encoding ( ) const throw ( ) ; 

virtual bool 
do_always_noconv ( ) const throw ( ) ; 

virtual int 
do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 



template <> 
class codecvt < wchar_t , char , mbstate_t > 
: public __codecvt_abstract_base < wchar_t , char , mbstate_t > 
{ 
public : 

typedef wchar_t intern_type ; 
typedef char extern_type ; 
typedef mbstate_t state_type ; 

protected : 
__c_locale _M_c_locale_codecvt ; 

public : 
static locale :: id id ; 

explicit 
codecvt ( size_t __refs = 0 ) ; 

explicit 
codecvt ( __c_locale __cloc , size_t __refs = 0 ) ; 

protected : 
virtual 
~ codecvt ( ) ; 

virtual result 
do_out ( state_type & __state , const intern_type * __from , 
const intern_type * __from_end , const intern_type *& __from_next , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_unshift ( state_type & __state , 
extern_type * __to , extern_type * __to_end , 
extern_type *& __to_next ) const ; 

virtual result 
do_in ( state_type & __state , 
const extern_type * __from , const extern_type * __from_end , 
const extern_type *& __from_next , 
intern_type * __to , intern_type * __to_end , 
intern_type *& __to_next ) const ; 

virtual 
int do_encoding ( ) const throw ( ) ; 

virtual 
bool do_always_noconv ( ) const throw ( ) ; 

virtual 
int do_length ( state_type & , const extern_type * __from , 
const extern_type * __end , size_t __max ) const ; 

virtual int 
do_max_length ( ) const throw ( ) ; 
} ; 



template < typename _InternT , typename _ExternT , typename _StateT > 
class codecvt_byname : public codecvt < _InternT , _ExternT , _StateT > 
{ 
public : 
explicit 
codecvt_byname ( const char * __s , size_t __refs = 0 ) 
: codecvt < _InternT , _ExternT , _StateT > ( __refs ) 
{ __CvT__record_line____(__CvT_miT,96,464);
__CvT__record_line____(__CvT_miT,96,465);if ( __builtin_strcmp ( __s , "C" ) != 0 
&& __builtin_strcmp ( __s , "POSIX" ) != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,96,468);this -> _S_destroy_c_locale ( this -> _M_c_locale_codecvt ) ; 
__CvT__record_line____(__CvT_miT,96,469);this -> _S_create_c_locale ( this -> _M_c_locale_codecvt , __s ) ; 
} 
}} 

protected : 
virtual 
~ codecvt_byname ( ) { __CvT__record_line____(__CvT_miT,96,475);} 
} ; 




extern template class codecvt_byname < char , char , mbstate_t > ; 

extern template 
const codecvt < char , char , mbstate_t >& 
use_facet < codecvt < char , char , mbstate_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < codecvt < char , char , mbstate_t > > ( const locale & ) ; 


extern template class codecvt_byname < wchar_t , char , mbstate_t > ; 

extern template 
const codecvt < wchar_t , char , mbstate_t >& 
use_facet < codecvt < wchar_t , char , mbstate_t > > ( const locale & ) ; 

extern template 
bool 
has_facet < codecvt < wchar_t , char , mbstate_t > > ( const locale & ) ; 




} 
# 41 "/usr/include/c++/4.8/fstream" 2 3 
# 1 "/usr/include/c++/4.8/cstdio" 1 3 
# 39 "/usr/include/c++/4.8/cstdio" 3 

# 40 "/usr/include/c++/4.8/cstdio" 3 


# 1 "/usr/include/stdio.h" 1 3 4 
# 29 "/usr/include/stdio.h" 3 4 
extern "C" { 



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4 
# 34 "/usr/include/stdio.h" 2 3 4 
# 74 "/usr/include/stdio.h" 3 4 
# 1 "/usr/include/libio.h" 1 3 4 
# 31 "/usr/include/libio.h" 3 4 
# 1 "/usr/include/_G_config.h" 1 3 4 
# 15 "/usr/include/_G_config.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4 
# 16 "/usr/include/_G_config.h" 2 3 4 




# 1 "/usr/include/wchar.h" 1 3 4 
# 21 "/usr/include/_G_config.h" 2 3 4 
typedef struct 
{ 
__off_t __pos ; 
__mbstate_t __state ; 
} _G_fpos_t ; 
typedef struct 
{ 
__off64_t __pos ; 
__mbstate_t __state ; 
} _G_fpos64_t ; 
# 32 "/usr/include/libio.h" 2 3 4 
# 49 "/usr/include/libio.h" 3 4 
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4 
# 50 "/usr/include/libio.h" 2 3 4 
# 144 "/usr/include/libio.h" 3 4 
struct _IO_jump_t ; struct _IO_FILE ; 
# 154 "/usr/include/libio.h" 3 4 
typedef void _IO_lock_t ; 





struct _IO_marker { 
struct _IO_marker * _next ; 
struct _IO_FILE * _sbuf ; 



int _pos ; 
# 177 "/usr/include/libio.h" 3 4 
} ; 


enum __codecvt_result 
{ 
__codecvt_ok , 
__codecvt_partial , 
__codecvt_error , 
__codecvt_noconv 
} ; 
# 245 "/usr/include/libio.h" 3 4 
struct _IO_FILE { 
int _flags ; 




char * _IO_read_ptr ; 
char * _IO_read_end ; 
char * _IO_read_base ; 
char * _IO_write_base ; 
char * _IO_write_ptr ; 
char * _IO_write_end ; 
char * _IO_buf_base ; 
char * _IO_buf_end ; 

char * _IO_save_base ; 
char * _IO_backup_base ; 
char * _IO_save_end ; 

struct _IO_marker * _markers ; 

struct _IO_FILE * _chain ; 

int _fileno ; 



int _flags2 ; 

__off_t _old_offset ; 



unsigned short _cur_column ; 
signed char _vtable_offset ; 
char _shortbuf [ 1 ] ; 



_IO_lock_t * _lock ; 
# 293 "/usr/include/libio.h" 3 4 
__off64_t _offset ; 
# 302 "/usr/include/libio.h" 3 4 
void * __pad1 ; 
void * __pad2 ; 
void * __pad3 ; 
void * __pad4 ; 
size_t __pad5 ; 

int _mode ; 

char _unused2 [ 15 * sizeof ( int ) - 4 * sizeof ( void * ) - sizeof ( size_t ) ] ; 

} ; 





struct _IO_FILE_plus ; 

extern struct _IO_FILE_plus _IO_2_1_stdin_ ; 
extern struct _IO_FILE_plus _IO_2_1_stdout_ ; 
extern struct _IO_FILE_plus _IO_2_1_stderr_ ; 
# 338 "/usr/include/libio.h" 3 4 
typedef __ssize_t __io_read_fn ( void * __cookie , char * __buf , size_t __nbytes ) ; 







typedef __ssize_t __io_write_fn ( void * __cookie , const char * __buf , 
size_t __n ) ; 







typedef int __io_seek_fn ( void * __cookie , __off64_t * __pos , int __w ) ; 


typedef int __io_close_fn ( void * __cookie ) ; 




typedef __io_read_fn cookie_read_function_t ; 
typedef __io_write_fn cookie_write_function_t ; 
typedef __io_seek_fn cookie_seek_function_t ; 
typedef __io_close_fn cookie_close_function_t ; 


typedef struct 
{ 
__io_read_fn * read ; 
__io_write_fn * write ; 
__io_seek_fn * seek ; 
__io_close_fn * close ; 
} _IO_cookie_io_functions_t ; 
typedef _IO_cookie_io_functions_t cookie_io_functions_t ; 

struct _IO_cookie_file ; 


extern void _IO_cookie_init ( struct _IO_cookie_file * __cfile , int __read_write , 
void * __cookie , _IO_cookie_io_functions_t __fns ) ; 




extern "C" { 


extern int __underflow ( _IO_FILE * ) ; 
extern int __uflow ( _IO_FILE * ) ; 
extern int __overflow ( _IO_FILE * , int ) ; 
# 434 "/usr/include/libio.h" 3 4 
extern int _IO_getc ( _IO_FILE * __fp ) ; 
extern int _IO_putc ( int __c , _IO_FILE * __fp ) ; 
extern int _IO_feof ( _IO_FILE * __fp ) throw ( ) ; 
extern int _IO_ferror ( _IO_FILE * __fp ) throw ( ) ; 

extern int _IO_peekc_locked ( _IO_FILE * __fp ) ; 





extern void _IO_flockfile ( _IO_FILE * ) throw ( ) ; 
extern void _IO_funlockfile ( _IO_FILE * ) throw ( ) ; 
extern int _IO_ftrylockfile ( _IO_FILE * ) throw ( ) ; 
# 464 "/usr/include/libio.h" 3 4 
extern int _IO_vfscanf ( _IO_FILE * __restrict , const char * __restrict , 
__gnuc_va_list , int * __restrict ) ; 
extern int _IO_vfprintf ( _IO_FILE * __restrict , const char * __restrict , 
__gnuc_va_list ) ; 
extern __ssize_t _IO_padn ( _IO_FILE * , int , __ssize_t ) ; 
extern size_t _IO_sgetn ( _IO_FILE * , void * , size_t ) ; 

extern __off64_t _IO_seekoff ( _IO_FILE * , __off64_t , int , int ) ; 
extern __off64_t _IO_seekpos ( _IO_FILE * , __off64_t , int ) ; 

extern void _IO_free_backup_area ( _IO_FILE * ) throw ( ) ; 
# 526 "/usr/include/libio.h" 3 4 
} 
# 75 "/usr/include/stdio.h" 2 3 4 




typedef __gnuc_va_list va_list ; 
# 90 "/usr/include/stdio.h" 3 4 
typedef __off_t off_t ; 






typedef __off64_t off64_t ; 




typedef __ssize_t ssize_t ; 







typedef _G_fpos_t fpos_t ; 





typedef _G_fpos64_t fpos64_t ; 
# 164 "/usr/include/stdio.h" 3 4 
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4 
# 165 "/usr/include/stdio.h" 2 3 4 



extern struct _IO_FILE * stdin ; 
extern struct _IO_FILE * stdout ; 
extern struct _IO_FILE * stderr ; 







extern int remove ( const char * __filename ) throw ( ) ; 

extern int rename ( const char * __old , const char * __new ) throw ( ) ; 




extern int renameat ( int __oldfd , const char * __old , int __newfd , 
const char * __new ) throw ( ) ; 








extern FILE * tmpfile ( void ) ; 
# 205 "/usr/include/stdio.h" 3 4 
extern FILE * tmpfile64 ( void ) ; 



extern char * tmpnam ( char * __s ) throw ( ) ; 





extern char * tmpnam_r ( char * __s ) throw ( ) ; 
# 227 "/usr/include/stdio.h" 3 4 
extern char * tempnam ( const char * __dir , const char * __pfx ) 
throw ( ) ; 








extern int fclose ( FILE * __stream ) ; 




extern int fflush ( FILE * __stream ) ; 

# 252 "/usr/include/stdio.h" 3 4 
extern int fflush_unlocked ( FILE * __stream ) ; 
# 262 "/usr/include/stdio.h" 3 4 
extern int fcloseall ( void ) ; 









extern FILE * fopen ( const char * __restrict __filename , 
const char * __restrict __modes ) ; 




extern FILE * freopen ( const char * __restrict __filename , 
const char * __restrict __modes , 
FILE * __restrict __stream ) ; 
# 295 "/usr/include/stdio.h" 3 4 


extern FILE * fopen64 ( const char * __restrict __filename , 
const char * __restrict __modes ) ; 
extern FILE * freopen64 ( const char * __restrict __filename , 
const char * __restrict __modes , 
FILE * __restrict __stream ) ; 




extern FILE * fdopen ( int __fd , const char * __modes ) throw ( ) ; 





extern FILE * fopencookie ( void * __restrict __magic_cookie , 
const char * __restrict __modes , 
_IO_cookie_io_functions_t __io_funcs ) throw ( ) ; 




extern FILE * fmemopen ( void * __s , size_t __len , const char * __modes ) 
throw ( ) ; 




extern FILE * open_memstream ( char ** __bufloc , size_t * __sizeloc ) throw ( ) ; 






extern void setbuf ( FILE * __restrict __stream , char * __restrict __buf ) throw ( ) ; 



extern int setvbuf ( FILE * __restrict __stream , char * __restrict __buf , 
int __modes , size_t __n ) throw ( ) ; 





extern void setbuffer ( FILE * __restrict __stream , char * __restrict __buf , 
size_t __size ) throw ( ) ; 


extern void setlinebuf ( FILE * __stream ) throw ( ) ; 








extern int fprintf ( FILE * __restrict __stream , 
const char * __restrict __format , ... ) ; 




extern int printf ( const char * __restrict __format , ... ) ; 

extern int sprintf ( char * __restrict __s , 
const char * __restrict __format , ... ) throw ( ) ; 





extern int vfprintf ( FILE * __restrict __s , const char * __restrict __format , 
__gnuc_va_list __arg ) ; 




extern int vprintf ( const char * __restrict __format , __gnuc_va_list __arg ) ; 

extern int vsprintf ( char * __restrict __s , const char * __restrict __format , 
__gnuc_va_list __arg ) throw ( ) ; 





extern int snprintf ( char * __restrict __s , size_t __maxlen , 
const char * __restrict __format , ... ) 
throw ( ) ; 

extern int vsnprintf ( char * __restrict __s , size_t __maxlen , 
const char * __restrict __format , __gnuc_va_list __arg ) 
throw ( ) ; 






extern int vasprintf ( char ** __restrict __ptr , const char * __restrict __f , 
__gnuc_va_list __arg ) 
throw ( ) ; 
extern int __asprintf ( char ** __restrict __ptr , 
const char * __restrict __fmt , ... ) 
throw ( ) ; 
extern int asprintf ( char ** __restrict __ptr , 
const char * __restrict __fmt , ... ) 
throw ( ) ; 




extern int vdprintf ( int __fd , const char * __restrict __fmt , 
__gnuc_va_list __arg ) 
; 
extern int dprintf ( int __fd , const char * __restrict __fmt , ... ) 
; 








extern int fscanf ( FILE * __restrict __stream , 
const char * __restrict __format , ... ) ; 




extern int scanf ( const char * __restrict __format , ... ) ; 

extern int sscanf ( const char * __restrict __s , 
const char * __restrict __format , ... ) throw ( ) ; 
# 463 "/usr/include/stdio.h" 3 4 








extern int vfscanf ( FILE * __restrict __s , const char * __restrict __format , 
__gnuc_va_list __arg ) 
; 





extern int vscanf ( const char * __restrict __format , __gnuc_va_list __arg ) 
; 


extern int vsscanf ( const char * __restrict __s , 
const char * __restrict __format , __gnuc_va_list __arg ) 
throw ( ) ; 
# 522 "/usr/include/stdio.h" 3 4 









extern int fgetc ( FILE * __stream ) ; 
extern int getc ( FILE * __stream ) ; 





extern int getchar ( void ) ; 

# 550 "/usr/include/stdio.h" 3 4 
extern int getc_unlocked ( FILE * __stream ) ; 
extern int getchar_unlocked ( void ) ; 
# 561 "/usr/include/stdio.h" 3 4 
extern int fgetc_unlocked ( FILE * __stream ) ; 











extern int fputc ( int __c , FILE * __stream ) ; 
extern int putc ( int __c , FILE * __stream ) ; 





extern int putchar ( int __c ) ; 

# 594 "/usr/include/stdio.h" 3 4 
extern int fputc_unlocked ( int __c , FILE * __stream ) ; 







extern int putc_unlocked ( int __c , FILE * __stream ) ; 
extern int putchar_unlocked ( int __c ) ; 






extern int getw ( FILE * __stream ) ; 


extern int putw ( int __w , FILE * __stream ) ; 








extern char * fgets ( char * __restrict __s , int __n , FILE * __restrict __stream ) 
; 
# 638 "/usr/include/stdio.h" 3 4 
extern char * gets ( char * __s ) ; 


# 649 "/usr/include/stdio.h" 3 4 
extern char * fgets_unlocked ( char * __restrict __s , int __n , 
FILE * __restrict __stream ) ; 
# 665 "/usr/include/stdio.h" 3 4 
extern __ssize_t __getdelim ( char ** __restrict __lineptr , 
size_t * __restrict __n , int __delimiter , 
FILE * __restrict __stream ) ; 
extern __ssize_t getdelim ( char ** __restrict __lineptr , 
size_t * __restrict __n , int __delimiter , 
FILE * __restrict __stream ) ; 







extern __ssize_t getline ( char ** __restrict __lineptr , 
size_t * __restrict __n , 
FILE * __restrict __stream ) ; 








extern int fputs ( const char * __restrict __s , FILE * __restrict __stream ) ; 





extern int puts ( const char * __s ) ; 






extern int ungetc ( int __c , FILE * __stream ) ; 






extern size_t fread ( void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __stream ) ; 




extern size_t fwrite ( const void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __s ) ; 

# 726 "/usr/include/stdio.h" 3 4 
extern int fputs_unlocked ( const char * __restrict __s , 
FILE * __restrict __stream ) ; 
# 737 "/usr/include/stdio.h" 3 4 
extern size_t fread_unlocked ( void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __stream ) ; 
extern size_t fwrite_unlocked ( const void * __restrict __ptr , size_t __size , 
size_t __n , FILE * __restrict __stream ) ; 








extern int fseek ( FILE * __stream , long int __off , int __whence ) ; 




extern long int ftell ( FILE * __stream ) ; 




extern void rewind ( FILE * __stream ) ; 

# 773 "/usr/include/stdio.h" 3 4 
extern int fseeko ( FILE * __stream , __off_t __off , int __whence ) ; 




extern __off_t ftello ( FILE * __stream ) ; 
# 792 "/usr/include/stdio.h" 3 4 






extern int fgetpos ( FILE * __restrict __stream , fpos_t * __restrict __pos ) ; 




extern int fsetpos ( FILE * __stream , const fpos_t * __pos ) ; 
# 815 "/usr/include/stdio.h" 3 4 



extern int fseeko64 ( FILE * __stream , __off64_t __off , int __whence ) ; 
extern __off64_t ftello64 ( FILE * __stream ) ; 
extern int fgetpos64 ( FILE * __restrict __stream , fpos64_t * __restrict __pos ) ; 
extern int fsetpos64 ( FILE * __stream , const fpos64_t * __pos ) ; 




extern void clearerr ( FILE * __stream ) throw ( ) ; 

extern int feof ( FILE * __stream ) throw ( ) ; 

extern int ferror ( FILE * __stream ) throw ( ) ; 




extern void clearerr_unlocked ( FILE * __stream ) throw ( ) ; 
extern int feof_unlocked ( FILE * __stream ) throw ( ) ; 
extern int ferror_unlocked ( FILE * __stream ) throw ( ) ; 








extern void perror ( const char * __s ) ; 






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4 
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4 
extern int sys_nerr ; 
extern const char * const sys_errlist [ ] ; 


extern int _sys_nerr ; 
extern const char * const _sys_errlist [ ] ; 
# 854 "/usr/include/stdio.h" 2 3 4 




extern int fileno ( FILE * __stream ) throw ( ) ; 




extern int fileno_unlocked ( FILE * __stream ) throw ( ) ; 
# 873 "/usr/include/stdio.h" 3 4 
extern FILE * popen ( const char * __command , const char * __modes ) ; 





extern int pclose ( FILE * __stream ) ; 





extern char * ctermid ( char * __s ) throw ( ) ; 





extern char * cuserid ( char * __s ) ; 




struct obstack ; 


extern int obstack_printf ( struct obstack * __restrict __obstack , 
const char * __restrict __format , ... ) 
throw ( ) ; 
extern int obstack_vprintf ( struct obstack * __restrict __obstack , 
const char * __restrict __format , 
__gnuc_va_list __args ) 
throw ( ) ; 







extern void flockfile ( FILE * __stream ) throw ( ) ; 



extern int ftrylockfile ( FILE * __stream ) throw ( ) ; 


extern void funlockfile ( FILE * __stream ) throw ( ) ; 
# 943 "/usr/include/stdio.h" 3 4 
} 
# 43 "/usr/include/c++/4.8/cstdio" 2 3 
# 94 "/usr/include/c++/4.8/cstdio" 3 
namespace std 
{ 
using :: FILE ; 
using :: fpos_t ; 

using :: clearerr ; 
using :: fclose ; 
using :: feof ; 
using :: ferror ; 
using :: fflush ; 
using :: fgetc ; 
using :: fgetpos ; 
using :: fgets ; 
using :: fopen ; 
using :: fprintf ; 
using :: fputc ; 
using :: fputs ; 
using :: fread ; 
using :: freopen ; 
using :: fscanf ; 
using :: fseek ; 
using :: fsetpos ; 
using :: ftell ; 
using :: fwrite ; 
using :: getc ; 
using :: getchar ; 
using :: gets ; 
using :: perror ; 
using :: printf ; 
using :: putc ; 
using :: putchar ; 
using :: puts ; 
using :: remove ; 
using :: rename ; 
using :: rewind ; 
using :: scanf ; 
using :: setbuf ; 
using :: setvbuf ; 
using :: sprintf ; 
using :: sscanf ; 
using :: tmpfile ; 
using :: tmpnam ; 
using :: ungetc ; 
using :: vfprintf ; 
using :: vprintf ; 
using :: vsprintf ; 
} 
# 150 "/usr/include/c++/4.8/cstdio" 3 
namespace __gnu_cxx 
{ 
# 168 "/usr/include/c++/4.8/cstdio" 3 
using :: snprintf ; 
using :: vfscanf ; 
using :: vscanf ; 
using :: vsnprintf ; 
using :: vsscanf ; 

} 

namespace std 
{ 
using :: __gnu_cxx :: snprintf ; 
using :: __gnu_cxx :: vfscanf ; 
using :: __gnu_cxx :: vscanf ; 
using :: __gnu_cxx :: vsnprintf ; 
using :: __gnu_cxx :: vsscanf ; 
} 
# 42 "/usr/include/c++/4.8/fstream" 2 3 
# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/basic_file.h" 1 3 
# 37 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/basic_file.h" 3 

# 38 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/basic_file.h" 3 


# 1 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++io.h" 1 3 
# 35 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++io.h" 3 
# 1 "/usr/include/c++/4.8/cstdio" 1 3 
# 39 "/usr/include/c++/4.8/cstdio" 3 

# 40 "/usr/include/c++/4.8/cstdio" 3 
# 36 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++io.h" 2 3 


namespace std 
{ 


typedef __gthread_mutex_t __c_lock ; 


typedef FILE __c_file ; 


} 
# 41 "/usr/include/x86_64-linux-gnu/c++/4.8/bits/basic_file.h" 2 3 


namespace std 
{ 



template < typename _CharT > 
class __basic_file ; 


template <> 
class __basic_file < char > 
{ 

__c_file * _M_cfile ; 


bool _M_cfile_created ; 

public : 
__basic_file ( __c_lock * __lock = 0 ) throw ( ) ; 

__basic_file * 
open ( const char * __name , ios_base :: openmode __mode , int __prot = 0664 ) ; 

__basic_file * 
sys_open ( __c_file * __file , ios_base :: openmode ) ; 

__basic_file * 
sys_open ( int __fd , ios_base :: openmode __mode ) throw ( ) ; 

__basic_file * 
close ( ) ; 

bool 
is_open ( ) const throw ( ) ; 

int 
fd ( ) throw ( ) ; 

__c_file * 
file ( ) throw ( ) ; 

~ __basic_file ( ) ; 

streamsize 
xsputn ( const char * __s , streamsize __n ) ; 

streamsize 
xsputn_2 ( const char * __s1 , streamsize __n1 , 
const char * __s2 , streamsize __n2 ) ; 

streamsize 
xsgetn ( char * __s , streamsize __n ) ; 

streamoff 
seekoff ( streamoff __off , ios_base :: seekdir __way ) throw ( ) ; 

int 
sync ( ) ; 

streamsize 
showmanyc ( ) ; 
} ; 


} 
# 43 "/usr/include/c++/4.8/fstream" 2 3 




namespace std 
{ 

# 71 "/usr/include/c++/4.8/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_filebuf : public basic_streambuf < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 

typedef basic_streambuf < char_type , traits_type > __streambuf_type ; 
typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef __basic_file < char > __file_type ; 
typedef typename traits_type :: state_type __state_type ; 
typedef codecvt < char_type , char , __state_type > __codecvt_type ; 

friend class ios_base ; 

protected : 


__c_lock _M_lock ; 


__file_type _M_file ; 


ios_base :: openmode _M_mode ; 


__state_type _M_state_beg ; 




__state_type _M_state_cur ; 



__state_type _M_state_last ; 


char_type * _M_buf ; 






size_t _M_buf_size ; 


bool _M_buf_allocated ; 
# 133 "/usr/include/c++/4.8/fstream" 3 
bool _M_reading ; 
bool _M_writing ; 







char_type _M_pback ; 
char_type * _M_pback_cur_save ; 
char_type * _M_pback_end_save ; 
bool _M_pback_init ; 



const __codecvt_type * _M_codecvt ; 






char * _M_ext_buf ; 




streamsize _M_ext_buf_size ; 






const char * _M_ext_next ; 
char * _M_ext_end ; 






void 
_M_create_pback ( ) 
{ __CvT__record_line____(__CvT_miT,76,178);
__CvT__record_line____(__CvT_miT,76,179);if ( ! _M_pback_init ) 
{{ 
__CvT__record_line____(__CvT_miT,76,181);_M_pback_cur_save = this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,76,182);_M_pback_end_save = this -> egptr ( ) ; 
__CvT__record_line____(__CvT_miT,76,183);this -> setg ( & _M_pback , & _M_pback , & _M_pback + 1 ) ; 
__CvT__record_line____(__CvT_miT,76,184);_M_pback_init = true ; 
} 
}} 






void 
_M_destroy_pback ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,76,195);
__CvT__record_line____(__CvT_miT,76,196);if ( _M_pback_init ) 
{{ 

__CvT__record_line____(__CvT_miT,76,199);_M_pback_cur_save += this -> gptr ( ) != this -> eback ( ) ; 
__CvT__record_line____(__CvT_miT,76,200);this -> setg ( _M_buf , _M_pback_cur_save , _M_pback_end_save ) ; 
__CvT__record_line____(__CvT_miT,76,201);_M_pback_init = false ; 
} 
}} 

public : 







basic_filebuf ( ) ; 




virtual 
~ basic_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,76,220);this -> close ( ) ; } 





bool 
is_open ( ) const throw ( ) 
{ __CvT__record_line____(__CvT_miT,76,228);return _M_file . is_open ( ) ; } 
# 269 "/usr/include/c++/4.8/fstream" 3 
__filebuf_type * 
open ( const char * __s , ios_base :: openmode __mode ) ; 
# 296 "/usr/include/c++/4.8/fstream" 3 
__filebuf_type * 
close ( ) ; 

protected : 
void 
_M_allocate_internal_buffer ( ) ; 

void 
_M_destroy_internal_buffer ( ) throw ( ) ; 


virtual streamsize 
showmanyc ( ) ; 






virtual int_type 
underflow ( ) ; 

virtual int_type 
pbackfail ( int_type __c = _Traits :: eof ( ) ) ; 
# 328 "/usr/include/c++/4.8/fstream" 3 
virtual int_type 
overflow ( int_type __c = _Traits :: eof ( ) ) ; 



bool 
_M_convert_to_external ( char_type * , streamsize ) ; 
# 348 "/usr/include/c++/4.8/fstream" 3 
virtual __streambuf_type * 
setbuf ( char_type * __s , streamsize __n ) ; 

virtual pos_type 
seekoff ( off_type __off , ios_base :: seekdir __way , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) ; 

virtual pos_type 
seekpos ( pos_type __pos , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) ; 


pos_type 
_M_seek ( off_type __off , ios_base :: seekdir __way , __state_type __state ) ; 

int 
_M_get_ext_pos ( __state_type & __state ) ; 

virtual int 
sync ( ) ; 

virtual void 
imbue ( const locale & __loc ) ; 

virtual streamsize 
xsgetn ( char_type * __s , streamsize __n ) ; 

virtual streamsize 
xsputn ( const char_type * __s , streamsize __n ) ; 


bool 
_M_terminate_output ( ) ; 
# 394 "/usr/include/c++/4.8/fstream" 3 
void 
_M_set_buffer ( streamsize __off ) 
{ __CvT__record_line____(__CvT_miT,76,396);
__CvT__record_line____(__CvT_miT,76,397);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,76,398);const bool __testout = _M_mode & ios_base :: out ; 

__CvT__record_line____(__CvT_miT,76,400);if ( __testin && __off > 0 ) 
{__CvT__record_line____(__CvT_miT,76,401);this -> setg ( _M_buf , _M_buf , _M_buf + __off ) ; 
}else {
__CvT__record_line____(__CvT_miT,76,403);this -> setg ( _M_buf , _M_buf , _M_buf ) ; 

}__CvT__record_line____(__CvT_miT,76,405);if ( __testout && __off == 0 && _M_buf_size > 1 ) 
{__CvT__record_line____(__CvT_miT,76,406);this -> setp ( _M_buf , _M_buf + _M_buf_size - 1 ) ; 
}else {
__CvT__record_line____(__CvT_miT,76,408);this -> setp ( 0 , 0 ) ; 
}} 
} ; 
# 426 "/usr/include/c++/4.8/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_ifstream : public basic_istream < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 


typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef basic_istream < char_type , traits_type > __istream_type ; 

private : 
__filebuf_type _M_filebuf ; 

public : 
# 453 "/usr/include/c++/4.8/fstream" 3 
basic_ifstream ( ) : __istream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,76,454);this -> init ( & _M_filebuf ) ; } 
# 466 "/usr/include/c++/4.8/fstream" 3 
explicit 
basic_ifstream ( const char * __s , ios_base :: openmode __mode = ios_base :: in ) 
: __istream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,76,469);
__CvT__record_line____(__CvT_miT,76,470);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,76,471);this -> open ( __s , __mode ) ; 
} 
# 498 "/usr/include/c++/4.8/fstream" 3 
~ basic_ifstream ( ) 
{ __CvT__record_line____(__CvT_miT,76,499);} 
# 508 "/usr/include/c++/4.8/fstream" 3 
__filebuf_type * 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,76,510);return const_cast < __filebuf_type *> ( & _M_filebuf ) ; } 





bool 
is_open ( ) 
{ __CvT__record_line____(__CvT_miT,76,518);return _M_filebuf . is_open ( ) ; } 



bool 
is_open ( ) const 
{ __CvT__record_line____(__CvT_miT,76,524);return _M_filebuf . is_open ( ) ; } 
# 537 "/usr/include/c++/4.8/fstream" 3 
void 
open ( const char * __s , ios_base :: openmode __mode = ios_base :: in ) 
{ __CvT__record_line____(__CvT_miT,76,539);
__CvT__record_line____(__CvT_miT,76,540);if ( ! _M_filebuf . open ( __s , __mode | ios_base :: in ) ) 
{__CvT__record_line____(__CvT_miT,76,541);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,76,545);this -> clear ( ) ; 
}} 
# 575 "/usr/include/c++/4.8/fstream" 3 
void 
close ( ) 
{ __CvT__record_line____(__CvT_miT,76,577);
__CvT__record_line____(__CvT_miT,76,578);if ( ! _M_filebuf . close ( ) ) 
{__CvT__record_line____(__CvT_miT,76,579);this -> setstate ( ios_base :: failbit ) ; 
}} 
} ; 
# 598 "/usr/include/c++/4.8/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_ofstream : public basic_ostream < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 


typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef basic_ostream < char_type , traits_type > __ostream_type ; 

private : 
__filebuf_type _M_filebuf ; 

public : 
# 625 "/usr/include/c++/4.8/fstream" 3 
basic_ofstream ( ) : __ostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,76,626);this -> init ( & _M_filebuf ) ; } 
# 639 "/usr/include/c++/4.8/fstream" 3 
explicit 
basic_ofstream ( const char * __s , 
ios_base :: openmode __mode = ios_base :: out | ios_base :: trunc ) 
: __ostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,76,643);
__CvT__record_line____(__CvT_miT,76,644);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,76,645);this -> open ( __s , __mode ) ; 
} 
# 673 "/usr/include/c++/4.8/fstream" 3 
~ basic_ofstream ( ) 
{ __CvT__record_line____(__CvT_miT,76,674);} 
# 683 "/usr/include/c++/4.8/fstream" 3 
__filebuf_type * 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,76,685);return const_cast < __filebuf_type *> ( & _M_filebuf ) ; } 





bool 
is_open ( ) 
{ __CvT__record_line____(__CvT_miT,76,693);return _M_filebuf . is_open ( ) ; } 



bool 
is_open ( ) const 
{ __CvT__record_line____(__CvT_miT,76,699);return _M_filebuf . is_open ( ) ; } 
# 712 "/usr/include/c++/4.8/fstream" 3 
void 
open ( const char * __s , 
ios_base :: openmode __mode = ios_base :: out | ios_base :: trunc ) 
{ __CvT__record_line____(__CvT_miT,76,715);
__CvT__record_line____(__CvT_miT,76,716);if ( ! _M_filebuf . open ( __s , __mode | ios_base :: out ) ) 
{__CvT__record_line____(__CvT_miT,76,717);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,76,721);this -> clear ( ) ; 
}} 
# 752 "/usr/include/c++/4.8/fstream" 3 
void 
close ( ) 
{ __CvT__record_line____(__CvT_miT,76,754);
__CvT__record_line____(__CvT_miT,76,755);if ( ! _M_filebuf . close ( ) ) 
{__CvT__record_line____(__CvT_miT,76,756);this -> setstate ( ios_base :: failbit ) ; 
}} 
} ; 
# 775 "/usr/include/c++/4.8/fstream" 3 
template < typename _CharT , typename _Traits > 
class basic_fstream : public basic_iostream < _CharT , _Traits > 
{ 
public : 

typedef _CharT char_type ; 
typedef _Traits traits_type ; 
typedef typename traits_type :: int_type int_type ; 
typedef typename traits_type :: pos_type pos_type ; 
typedef typename traits_type :: off_type off_type ; 


typedef basic_filebuf < char_type , traits_type > __filebuf_type ; 
typedef basic_ios < char_type , traits_type > __ios_type ; 
typedef basic_iostream < char_type , traits_type > __iostream_type ; 

private : 
__filebuf_type _M_filebuf ; 

public : 
# 803 "/usr/include/c++/4.8/fstream" 3 
basic_fstream ( ) 
: __iostream_type ( ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,76,805);this -> init ( & _M_filebuf ) ; } 
# 815 "/usr/include/c++/4.8/fstream" 3 
explicit 
basic_fstream ( const char * __s , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
: __iostream_type ( 0 ) , _M_filebuf ( ) 
{ __CvT__record_line____(__CvT_miT,76,819);
__CvT__record_line____(__CvT_miT,76,820);this -> init ( & _M_filebuf ) ; 
__CvT__record_line____(__CvT_miT,76,821);this -> open ( __s , __mode ) ; 
} 
# 846 "/usr/include/c++/4.8/fstream" 3 
~ basic_fstream ( ) 
{ __CvT__record_line____(__CvT_miT,76,847);} 
# 856 "/usr/include/c++/4.8/fstream" 3 
__filebuf_type * 
rdbuf ( ) const 
{ __CvT__record_line____(__CvT_miT,76,858);return const_cast < __filebuf_type *> ( & _M_filebuf ) ; } 





bool 
is_open ( ) 
{ __CvT__record_line____(__CvT_miT,76,866);return _M_filebuf . is_open ( ) ; } 



bool 
is_open ( ) const 
{ __CvT__record_line____(__CvT_miT,76,872);return _M_filebuf . is_open ( ) ; } 
# 885 "/usr/include/c++/4.8/fstream" 3 
void 
open ( const char * __s , 
ios_base :: openmode __mode = ios_base :: in | ios_base :: out ) 
{ __CvT__record_line____(__CvT_miT,76,888);
__CvT__record_line____(__CvT_miT,76,889);if ( ! _M_filebuf . open ( __s , __mode ) ) 
{__CvT__record_line____(__CvT_miT,76,890);this -> setstate ( ios_base :: failbit ) ; 
}else {


__CvT__record_line____(__CvT_miT,76,894);this -> clear ( ) ; 
}} 
# 925 "/usr/include/c++/4.8/fstream" 3 
void 
close ( ) 
{ __CvT__record_line____(__CvT_miT,76,927);
__CvT__record_line____(__CvT_miT,76,928);if ( ! _M_filebuf . close ( ) ) 
{__CvT__record_line____(__CvT_miT,76,929);this -> setstate ( ios_base :: failbit ) ; 
}} 
} ; 


} 

# 1 "/usr/include/c++/4.8/bits/fstream.tcc" 1 3 
# 37 "/usr/include/c++/4.8/bits/fstream.tcc" 3 

# 38 "/usr/include/c++/4.8/bits/fstream.tcc" 3 



namespace std 
{ 


template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
_M_allocate_internal_buffer ( ) 
{ __CvT__record_line____(__CvT_miT,104,49);


__CvT__record_line____(__CvT_miT,104,52);if ( ! _M_buf_allocated && ! _M_buf ) 
{{ 
__CvT__record_line____(__CvT_miT,104,54);_M_buf = new char_type [ _M_buf_size ] ; 
__CvT__record_line____(__CvT_miT,104,55);_M_buf_allocated = true ; 
} 
}} 

template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
_M_destroy_internal_buffer ( ) throw ( ) 
{ __CvT__record_line____(__CvT_miT,104,63);
__CvT__record_line____(__CvT_miT,104,64);if ( _M_buf_allocated ) 
{{ 
__CvT__record_line____(__CvT_miT,104,66);delete [ ] _M_buf ; 
__CvT__record_line____(__CvT_miT,104,67);_M_buf = 0 ; 
__CvT__record_line____(__CvT_miT,104,68);_M_buf_allocated = false ; 
} 
}__CvT__record_line____(__CvT_miT,104,70);delete [ ] _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,104,71);_M_ext_buf = 0 ; 
__CvT__record_line____(__CvT_miT,104,72);_M_ext_buf_size = 0 ; 
__CvT__record_line____(__CvT_miT,104,73);_M_ext_next = 0 ; 
__CvT__record_line____(__CvT_miT,104,74);_M_ext_end = 0 ; 
} 

template < typename _CharT , typename _Traits > 
basic_filebuf < _CharT , _Traits >:: 
basic_filebuf ( ) : __streambuf_type ( ) , _M_lock ( ) , _M_file ( & _M_lock ) , 
_M_mode ( ios_base :: openmode ( 0 ) ) , _M_state_beg ( ) , _M_state_cur ( ) , 
_M_state_last ( ) , _M_buf ( 0 ) , _M_buf_size ( 8192 ) , 
_M_buf_allocated ( false ) , _M_reading ( false ) , _M_writing ( false ) , _M_pback ( ) , 
_M_pback_cur_save ( 0 ) , _M_pback_end_save ( 0 ) , _M_pback_init ( false ) , 
_M_codecvt ( 0 ) , _M_ext_buf ( 0 ) , _M_ext_buf_size ( 0 ) , _M_ext_next ( 0 ) , 
_M_ext_end ( 0 ) 
{ __CvT__record_line____(__CvT_miT,104,86);
__CvT__record_line____(__CvT_miT,104,87);if ( has_facet < __codecvt_type > ( this -> _M_buf_locale ) ) 
{__CvT__record_line____(__CvT_miT,104,88);_M_codecvt = & use_facet < __codecvt_type > ( this -> _M_buf_locale ) ; 
}} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: __filebuf_type * 
basic_filebuf < _CharT , _Traits >:: 
open ( const char * __s , ios_base :: openmode __mode ) 
{ __CvT__record_line____(__CvT_miT,104,95);
__CvT__record_line____(__CvT_miT,104,96);__filebuf_type * __ret = 0 ; 
__CvT__record_line____(__CvT_miT,104,97);if ( ! this -> is_open ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,99);_M_file . open ( __s , __mode ) ; 
__CvT__record_line____(__CvT_miT,104,100);if ( this -> is_open ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,102);_M_allocate_internal_buffer ( ) ; 
__CvT__record_line____(__CvT_miT,104,103);_M_mode = __mode ; 


__CvT__record_line____(__CvT_miT,104,106);_M_reading = false ; 
__CvT__record_line____(__CvT_miT,104,107);_M_writing = false ; 
__CvT__record_line____(__CvT_miT,104,108);_M_set_buffer ( - 1 ) ; 


__CvT__record_line____(__CvT_miT,104,111);_M_state_last = _M_state_cur = _M_state_beg ; 


__CvT__record_line____(__CvT_miT,104,114);if ( ( __mode & ios_base :: ate ) 
&& this -> seekoff ( 0 , ios_base :: end , __mode ) 
== pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,104,117);this -> close ( ) ; 
}else {
__CvT__record_line____(__CvT_miT,104,119);__ret = this ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,104,122);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: __filebuf_type * 
basic_filebuf < _CharT , _Traits >:: 
close ( ) 
{ __CvT__record_line____(__CvT_miT,104,129);
__CvT__record_line____(__CvT_miT,104,130);if ( ! this -> is_open ( ) ) 
{__CvT__record_line____(__CvT_miT,104,131);return 0 ; 

}__CvT__record_line____(__CvT_miT,104,133);bool __testfail = false ; 
{ 

__CvT__record_line____(__CvT_miT,104,136);struct __close_sentry 
{ 
basic_filebuf * __fb ; 
__close_sentry ( basic_filebuf * __fbi ) : __fb ( __fbi ) { __CvT__record_line____(__CvT_miT,104,139);} 
~ __close_sentry ( ) 
{ __CvT__record_line____(__CvT_miT,104,141);
__CvT__record_line____(__CvT_miT,104,142);__fb -> _M_mode = ios_base :: openmode ( 0 ) ; 
__CvT__record_line____(__CvT_miT,104,143);__fb -> _M_pback_init = false ; 
__CvT__record_line____(__CvT_miT,104,144);__fb -> _M_destroy_internal_buffer ( ) ; 
__CvT__record_line____(__CvT_miT,104,145);__fb -> _M_reading = false ; 
__CvT__record_line____(__CvT_miT,104,146);__fb -> _M_writing = false ; 
__CvT__record_line____(__CvT_miT,104,147);__fb -> _M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,104,148);__fb -> _M_state_last = __fb -> _M_state_cur = __fb -> _M_state_beg ; 
} 
} __cs ( this ) ; 

__CvT__record_line____(__CvT_miT,104,152);try 
{ 
__CvT__record_line____(__CvT_miT,104,154);if ( ! _M_terminate_output ( ) ) 
{__CvT__record_line____(__CvT_miT,104,155);__testfail = true ; 
}} 
catch ( __cxxabiv1 :: __forced_unwind & ) 
{ 
__CvT__record_line____(__CvT_miT,104,159);_M_file . close ( ) ; 
__CvT__record_line____(__CvT_miT,104,160);throw ; 
} 
catch ( ... ) 
{ __CvT__record_line____(__CvT_miT,104,163);__testfail = true ; } 
} 

__CvT__record_line____(__CvT_miT,104,166);if ( ! _M_file . close ( ) ) 
{__CvT__record_line____(__CvT_miT,104,167);__testfail = true ; 

}__CvT__record_line____(__CvT_miT,104,169);if ( __testfail ) 
{__CvT__record_line____(__CvT_miT,104,170);return 0 ; 
}else {
__CvT__record_line____(__CvT_miT,104,172);return this ; 
}} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_filebuf < _CharT , _Traits >:: 
showmanyc ( ) 
{ __CvT__record_line____(__CvT_miT,104,179);
__CvT__record_line____(__CvT_miT,104,180);streamsize __ret = - 1 ; 
__CvT__record_line____(__CvT_miT,104,181);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,104,182);if ( __testin && this -> is_open ( ) ) 
{{ 


__CvT__record_line____(__CvT_miT,104,186);__ret = this -> egptr ( ) - this -> gptr ( ) ; 







__CvT__record_line____(__CvT_miT,104,194);if ( __check_facet ( _M_codecvt ) . encoding ( ) >= 0 ) 

{__CvT__record_line____(__CvT_miT,104,196);__ret += _M_file . showmanyc ( ) / _M_codecvt -> max_length ( ) ; 
}} 
}__CvT__record_line____(__CvT_miT,104,198);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: int_type 
basic_filebuf < _CharT , _Traits >:: 
underflow ( ) 
{ __CvT__record_line____(__CvT_miT,104,205);
__CvT__record_line____(__CvT_miT,104,206);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,104,207);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,104,208);if ( __testin ) 
{{ 
__CvT__record_line____(__CvT_miT,104,210);if ( _M_writing ) 
{{ 
__CvT__record_line____(__CvT_miT,104,212);if ( overflow ( ) == traits_type :: eof ( ) ) 
{__CvT__record_line____(__CvT_miT,104,213);return __ret ; 
}__CvT__record_line____(__CvT_miT,104,214);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,104,215);_M_writing = false ; 
} 



}__CvT__record_line____(__CvT_miT,104,220);_M_destroy_pback ( ) ; 

__CvT__record_line____(__CvT_miT,104,222);if ( this -> gptr ( ) < this -> egptr ( ) ) 
{__CvT__record_line____(__CvT_miT,104,223);return traits_type :: to_int_type ( * this -> gptr ( ) ) ; 


}__CvT__record_line____(__CvT_miT,104,226);const size_t __buflen = _M_buf_size > 1 ? _M_buf_size - 1 : 1 ; 


__CvT__record_line____(__CvT_miT,104,229);bool __got_eof = false ; 

__CvT__record_line____(__CvT_miT,104,231);streamsize __ilen = 0 ; 
__CvT__record_line____(__CvT_miT,104,232);codecvt_base :: result __r = codecvt_base :: ok ; 
__CvT__record_line____(__CvT_miT,104,233);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,235);__ilen = _M_file . xsgetn ( reinterpret_cast < char *> ( this -> eback ( ) ) , 
__buflen ) ; 
__CvT__record_line____(__CvT_miT,104,237);if ( __ilen == 0 ) 
{__CvT__record_line____(__CvT_miT,104,238);__got_eof = true ; 
}} 
}else {
{ 


__CvT__record_line____(__CvT_miT,104,244);const int __enc = _M_codecvt -> encoding ( ) ; 
__CvT__record_line____(__CvT_miT,104,245);streamsize __blen ; 
__CvT__record_line____(__CvT_miT,104,246);streamsize __rlen ; 
__CvT__record_line____(__CvT_miT,104,247);if ( __enc > 0 ) 
{__CvT__record_line____(__CvT_miT,104,248);__blen = __rlen = __buflen * __enc ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,104,251);__blen = __buflen + _M_codecvt -> max_length ( ) - 1 ; 
__CvT__record_line____(__CvT_miT,104,252);__rlen = __buflen ; 
} 
}__CvT__record_line____(__CvT_miT,104,254);const streamsize __remainder = _M_ext_end - _M_ext_next ; 
__CvT__record_line____(__CvT_miT,104,255);__rlen = __rlen > __remainder ? __rlen - __remainder : 0 ; 



__CvT__record_line____(__CvT_miT,104,259);if ( _M_reading && this -> egptr ( ) == this -> eback ( ) && __remainder ) 
{__CvT__record_line____(__CvT_miT,104,260);__rlen = 0 ; 



}__CvT__record_line____(__CvT_miT,104,264);if ( _M_ext_buf_size < __blen ) 
{{ 
__CvT__record_line____(__CvT_miT,104,266);char * __buf = new char [ __blen ] ; 
__CvT__record_line____(__CvT_miT,104,267);if ( __remainder ) 
{__CvT__record_line____(__CvT_miT,104,268);__builtin_memcpy ( __buf , _M_ext_next , __remainder ) ; 

}__CvT__record_line____(__CvT_miT,104,270);delete [ ] _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,104,271);_M_ext_buf = __buf ; 
__CvT__record_line____(__CvT_miT,104,272);_M_ext_buf_size = __blen ; 
} 
}else {__CvT__record_line____(__CvT_miT,104,274);if ( __remainder ) 
{__CvT__record_line____(__CvT_miT,104,275);__builtin_memmove ( _M_ext_buf , _M_ext_next , __remainder ) ; 

}}__CvT__record_line____(__CvT_miT,104,277);_M_ext_next = _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,104,278);_M_ext_end = _M_ext_buf + __remainder ; 
__CvT__record_line____(__CvT_miT,104,279);_M_state_last = _M_state_cur ; 

__CvT__record_line____(__CvT_miT,104,281);do {
{ 
__CvT__record_line____(__CvT_miT,104,283);if ( __rlen > 0 ) 
{{ 



__CvT__record_line____(__CvT_miT,104,288);if ( _M_ext_end - _M_ext_buf + __rlen > _M_ext_buf_size ) 
{{ 
__CvT__record_line____(__CvT_miT,104,290);__throw_ios_failure ( ( "basic_filebuf::underflow " "codecvt::max_length() " "is not valid" ) 

) ; 
} 
}__CvT__record_line____(__CvT_miT,104,294);streamsize __elen = _M_file . xsgetn ( _M_ext_end , __rlen ) ; 
__CvT__record_line____(__CvT_miT,104,295);if ( __elen == 0 ) 
{__CvT__record_line____(__CvT_miT,104,296);__got_eof = true ; 
}else {__CvT__record_line____(__CvT_miT,104,297);if ( __elen == - 1 ) 
{__CvT__record_line____(__CvT_miT,104,298);break ; 
}}__CvT__record_line____(__CvT_miT,104,299);_M_ext_end += __elen ; 
} 

}__CvT__record_line____(__CvT_miT,104,302);char_type * __iend = this -> eback ( ) ; 
__CvT__record_line____(__CvT_miT,104,303);if ( _M_ext_next < _M_ext_end ) 
{__CvT__record_line____(__CvT_miT,104,304);__r = _M_codecvt -> in ( _M_state_cur , _M_ext_next , 
_M_ext_end , _M_ext_next , 
this -> eback ( ) , 
this -> eback ( ) + __buflen , __iend ) ; 
}__CvT__record_line____(__CvT_miT,104,308);if ( __r == codecvt_base :: noconv ) 
{{ 
__CvT__record_line____(__CvT_miT,104,310);size_t __avail = _M_ext_end - _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,104,311);__ilen = std :: min ( __avail , __buflen ) ; 
__CvT__record_line____(__CvT_miT,104,312);traits_type :: copy ( this -> eback ( ) , 
reinterpret_cast < char_type *> 
( _M_ext_buf ) , __ilen ) ; 
__CvT__record_line____(__CvT_miT,104,315);_M_ext_next = _M_ext_buf + __ilen ; 
} 
}else {
__CvT__record_line____(__CvT_miT,104,318);__ilen = __iend - this -> eback ( ) ; 




}__CvT__record_line____(__CvT_miT,104,323);if ( __r == codecvt_base :: error ) 
{__CvT__record_line____(__CvT_miT,104,324);break ; 

}__CvT__record_line____(__CvT_miT,104,326);__rlen = 1 ; 
} 
}while ( __ilen == 0 && ! __got_eof ) ;
} 

}__CvT__record_line____(__CvT_miT,104,331);if ( __ilen > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,104,333);_M_set_buffer ( __ilen ) ; 
__CvT__record_line____(__CvT_miT,104,334);_M_reading = true ; 
__CvT__record_line____(__CvT_miT,104,335);__ret = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,104,337);if ( __got_eof ) 
{{ 



__CvT__record_line____(__CvT_miT,104,342);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,104,343);_M_reading = false ; 


__CvT__record_line____(__CvT_miT,104,346);if ( __r == codecvt_base :: partial ) 
{__CvT__record_line____(__CvT_miT,104,347);__throw_ios_failure ( ( "basic_filebuf::underflow " "incomplete character in file" ) 
) ; 
}} 
}else {__CvT__record_line____(__CvT_miT,104,350);if ( __r == codecvt_base :: error ) 
{__CvT__record_line____(__CvT_miT,104,351);__throw_ios_failure ( ( "basic_filebuf::underflow " "invalid byte sequence in file" ) 
) ; 
}else {
__CvT__record_line____(__CvT_miT,104,354);__throw_ios_failure ( ( "basic_filebuf::underflow " "error reading the file" ) 
) ; 
}}}} 
}__CvT__record_line____(__CvT_miT,104,357);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: int_type 
basic_filebuf < _CharT , _Traits >:: 
pbackfail ( int_type __i ) 
{ __CvT__record_line____(__CvT_miT,104,364);
__CvT__record_line____(__CvT_miT,104,365);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,104,366);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,104,367);if ( __testin ) 
{{ 
__CvT__record_line____(__CvT_miT,104,369);if ( _M_writing ) 
{{ 
__CvT__record_line____(__CvT_miT,104,371);if ( overflow ( ) == traits_type :: eof ( ) ) 
{__CvT__record_line____(__CvT_miT,104,372);return __ret ; 
}__CvT__record_line____(__CvT_miT,104,373);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,104,374);_M_writing = false ; 
} 


}__CvT__record_line____(__CvT_miT,104,378);const bool __testpb = _M_pback_init ; 
__CvT__record_line____(__CvT_miT,104,379);const bool __testeof = traits_type :: eq_int_type ( __i , __ret ) ; 
__CvT__record_line____(__CvT_miT,104,380);int_type __tmp ; 
__CvT__record_line____(__CvT_miT,104,381);if ( this -> eback ( ) < this -> gptr ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,383);this -> gbump ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,104,384);__tmp = traits_type :: to_int_type ( * this -> gptr ( ) ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,104,386);if ( this -> seekoff ( - 1 , ios_base :: cur ) != pos_type ( off_type ( - 1 ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,388);__tmp = this -> underflow ( ) ; 
__CvT__record_line____(__CvT_miT,104,389);if ( traits_type :: eq_int_type ( __tmp , __ret ) ) 
{__CvT__record_line____(__CvT_miT,104,390);return __ret ; 
}} 
}else {
{ 





__CvT__record_line____(__CvT_miT,104,399);return __ret ; 
} 



}}__CvT__record_line____(__CvT_miT,104,404);if ( ! __testeof && traits_type :: eq_int_type ( __i , __tmp ) ) 
{__CvT__record_line____(__CvT_miT,104,405);__ret = __i ; 
}else {__CvT__record_line____(__CvT_miT,104,406);if ( __testeof ) 
{__CvT__record_line____(__CvT_miT,104,407);__ret = traits_type :: not_eof ( __i ) ; 
}else {__CvT__record_line____(__CvT_miT,104,408);if ( ! __testpb ) 
{{ 
__CvT__record_line____(__CvT_miT,104,410);_M_create_pback ( ) ; 
__CvT__record_line____(__CvT_miT,104,411);_M_reading = true ; 
__CvT__record_line____(__CvT_miT,104,412);* this -> gptr ( ) = traits_type :: to_char_type ( __i ) ; 
__CvT__record_line____(__CvT_miT,104,413);__ret = __i ; 
} 
}}}} 
}__CvT__record_line____(__CvT_miT,104,416);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: int_type 
basic_filebuf < _CharT , _Traits >:: 
overflow ( int_type __c ) 
{ __CvT__record_line____(__CvT_miT,104,423);
__CvT__record_line____(__CvT_miT,104,424);int_type __ret = traits_type :: eof ( ) ; 
__CvT__record_line____(__CvT_miT,104,425);const bool __testeof = traits_type :: eq_int_type ( __c , __ret ) ; 
__CvT__record_line____(__CvT_miT,104,426);const bool __testout = _M_mode & ios_base :: out ; 
__CvT__record_line____(__CvT_miT,104,427);if ( __testout ) 
{{ 
__CvT__record_line____(__CvT_miT,104,429);if ( _M_reading ) 
{{ 
__CvT__record_line____(__CvT_miT,104,431);_M_destroy_pback ( ) ; 
__CvT__record_line____(__CvT_miT,104,432);const int __gptr_off = _M_get_ext_pos ( _M_state_last ) ; 
__CvT__record_line____(__CvT_miT,104,433);if ( _M_seek ( __gptr_off , ios_base :: cur , _M_state_last ) 
== pos_type ( off_type ( - 1 ) ) ) 
{__CvT__record_line____(__CvT_miT,104,435);return __ret ; 
}} 
}__CvT__record_line____(__CvT_miT,104,437);if ( this -> pbase ( ) < this -> pptr ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,104,440);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,104,442);* this -> pptr ( ) = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,104,443);this -> pbump ( 1 ) ; 
} 



}__CvT__record_line____(__CvT_miT,104,448);if ( _M_convert_to_external ( this -> pbase ( ) , 
this -> pptr ( ) - this -> pbase ( ) ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,451);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,104,452);__ret = traits_type :: not_eof ( __c ) ; 
} 
}} 
}else {__CvT__record_line____(__CvT_miT,104,455);if ( _M_buf_size > 1 ) 
{{ 



__CvT__record_line____(__CvT_miT,104,460);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,104,461);_M_writing = true ; 
__CvT__record_line____(__CvT_miT,104,462);if ( ! __testeof ) 
{{ 
__CvT__record_line____(__CvT_miT,104,464);* this -> pptr ( ) = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,104,465);this -> pbump ( 1 ) ; 
} 
}__CvT__record_line____(__CvT_miT,104,467);__ret = traits_type :: not_eof ( __c ) ; 
} 
}else {
{ 

__CvT__record_line____(__CvT_miT,104,472);char_type __conv = traits_type :: to_char_type ( __c ) ; 
__CvT__record_line____(__CvT_miT,104,473);if ( __testeof || _M_convert_to_external ( & __conv , 1 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,475);_M_writing = true ; 
__CvT__record_line____(__CvT_miT,104,476);__ret = traits_type :: not_eof ( __c ) ; 
} 
}} 
}}} 
}__CvT__record_line____(__CvT_miT,104,480);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
bool 
basic_filebuf < _CharT , _Traits >:: 
_M_convert_to_external ( _CharT * __ibuf , streamsize __ilen ) 
{ __CvT__record_line____(__CvT_miT,104,487);

__CvT__record_line____(__CvT_miT,104,489);streamsize __elen ; 
__CvT__record_line____(__CvT_miT,104,490);streamsize __plen ; 
__CvT__record_line____(__CvT_miT,104,491);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,493);__elen = _M_file . xsputn ( reinterpret_cast < char *> ( __ibuf ) , __ilen ) ; 
__CvT__record_line____(__CvT_miT,104,494);__plen = __ilen ; 
} 
}else {
{ 


__CvT__record_line____(__CvT_miT,104,500);streamsize __blen = __ilen * _M_codecvt -> max_length ( ) ; 
__CvT__record_line____(__CvT_miT,104,501);char * __buf = static_cast < char *> ( __builtin_alloca ( __blen ) ) ; 

__CvT__record_line____(__CvT_miT,104,503);char * __bend ; 
__CvT__record_line____(__CvT_miT,104,504);const char_type * __iend ; 
__CvT__record_line____(__CvT_miT,104,505);codecvt_base :: result __r ; 
__CvT__record_line____(__CvT_miT,104,506);__r = _M_codecvt -> out ( _M_state_cur , __ibuf , __ibuf + __ilen , 
__iend , __buf , __buf + __blen , __bend ) ; 

__CvT__record_line____(__CvT_miT,104,509);if ( __r == codecvt_base :: ok || __r == codecvt_base :: partial ) 
{__CvT__record_line____(__CvT_miT,104,510);__blen = __bend - __buf ; 
}else {__CvT__record_line____(__CvT_miT,104,511);if ( __r == codecvt_base :: noconv ) 
{{ 

__CvT__record_line____(__CvT_miT,104,514);__buf = reinterpret_cast < char *> ( __ibuf ) ; 
__CvT__record_line____(__CvT_miT,104,515);__blen = __ilen ; 
} 
}else {
__CvT__record_line____(__CvT_miT,104,518);__throw_ios_failure ( ( "basic_filebuf::_M_convert_to_external " "conversion error" ) 
) ; 

}}__CvT__record_line____(__CvT_miT,104,521);__elen = _M_file . xsputn ( __buf , __blen ) ; 
__CvT__record_line____(__CvT_miT,104,522);__plen = __blen ; 


__CvT__record_line____(__CvT_miT,104,525);if ( __r == codecvt_base :: partial && __elen == __plen ) 
{{ 
__CvT__record_line____(__CvT_miT,104,527);const char_type * __iresume = __iend ; 
__CvT__record_line____(__CvT_miT,104,528);streamsize __rlen = this -> pptr ( ) - __iend ; 
__CvT__record_line____(__CvT_miT,104,529);__r = _M_codecvt -> out ( _M_state_cur , __iresume , 
__iresume + __rlen , __iend , __buf , 
__buf + __blen , __bend ) ; 
__CvT__record_line____(__CvT_miT,104,532);if ( __r != codecvt_base :: error ) 
{{ 
__CvT__record_line____(__CvT_miT,104,534);__rlen = __bend - __buf ; 
__CvT__record_line____(__CvT_miT,104,535);__elen = _M_file . xsputn ( __buf , __rlen ) ; 
__CvT__record_line____(__CvT_miT,104,536);__plen = __rlen ; 
} 
}else {
__CvT__record_line____(__CvT_miT,104,539);__throw_ios_failure ( ( "basic_filebuf::_M_convert_to_external " "conversion error" ) 
) ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,104,543);return __elen == __plen ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_filebuf < _CharT , _Traits >:: 
xsgetn ( _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,104,550);

__CvT__record_line____(__CvT_miT,104,552);streamsize __ret = 0 ; 
__CvT__record_line____(__CvT_miT,104,553);if ( _M_pback_init ) 
{{ 
__CvT__record_line____(__CvT_miT,104,555);if ( __n > 0 && this -> gptr ( ) == this -> eback ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,557);* __s ++ = * this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,104,558);this -> gbump ( 1 ) ; 
__CvT__record_line____(__CvT_miT,104,559);__ret = 1 ; 
__CvT__record_line____(__CvT_miT,104,560);-- __n ; 
} 
}__CvT__record_line____(__CvT_miT,104,562);_M_destroy_pback ( ) ; 
} 
}else {__CvT__record_line____(__CvT_miT,104,564);if ( _M_writing ) 
{{ 
__CvT__record_line____(__CvT_miT,104,566);if ( overflow ( ) == traits_type :: eof ( ) ) 
{__CvT__record_line____(__CvT_miT,104,567);return __ret ; 
}__CvT__record_line____(__CvT_miT,104,568);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,104,569);_M_writing = false ; 
} 




}}__CvT__record_line____(__CvT_miT,104,575);const bool __testin = _M_mode & ios_base :: in ; 
__CvT__record_line____(__CvT_miT,104,576);const streamsize __buflen = _M_buf_size > 1 ? _M_buf_size - 1 : 1 ; 

__CvT__record_line____(__CvT_miT,104,578);if ( __n > __buflen && __check_facet ( _M_codecvt ) . always_noconv ( ) 
&& __testin ) 
{{ 

__CvT__record_line____(__CvT_miT,104,582);const streamsize __avail = this -> egptr ( ) - this -> gptr ( ) ; 
__CvT__record_line____(__CvT_miT,104,583);if ( __avail != 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,104,585);traits_type :: copy ( __s , this -> gptr ( ) , __avail ) ; 
__CvT__record_line____(__CvT_miT,104,586);__s += __avail ; 
__CvT__record_line____(__CvT_miT,104,587);this -> setg ( this -> eback ( ) , this -> gptr ( ) + __avail , 
this -> egptr ( ) ) ; 
__CvT__record_line____(__CvT_miT,104,589);__ret += __avail ; 
__CvT__record_line____(__CvT_miT,104,590);__n -= __avail ; 
} 



}__CvT__record_line____(__CvT_miT,104,595);streamsize __len ; 
__CvT__record_line____(__CvT_miT,104,596);for ( ; ; ) 
{{ 
__CvT__record_line____(__CvT_miT,104,598);__len = _M_file . xsgetn ( reinterpret_cast < char *> ( __s ) , 
__n ) ; 
__CvT__record_line____(__CvT_miT,104,600);if ( __len == - 1 ) 
{__CvT__record_line____(__CvT_miT,104,601);__throw_ios_failure ( ( "basic_filebuf::xsgetn " "error reading the file" ) 
) ; 
}__CvT__record_line____(__CvT_miT,104,603);if ( __len == 0 ) 
{__CvT__record_line____(__CvT_miT,104,604);break ; 

}__CvT__record_line____(__CvT_miT,104,606);__n -= __len ; 
__CvT__record_line____(__CvT_miT,104,607);__ret += __len ; 
__CvT__record_line____(__CvT_miT,104,608);if ( __n == 0 ) 
{__CvT__record_line____(__CvT_miT,104,609);break ; 

}__CvT__record_line____(__CvT_miT,104,611);__s += __len ; 
} 

}__CvT__record_line____(__CvT_miT,104,614);if ( __n == 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,104,616);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,104,617);_M_reading = true ; 
} 
}else {__CvT__record_line____(__CvT_miT,104,619);if ( __len == 0 ) 
{{ 



__CvT__record_line____(__CvT_miT,104,624);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,104,625);_M_reading = false ; 
} 
}}} 
}else {
__CvT__record_line____(__CvT_miT,104,629);__ret += __streambuf_type :: xsgetn ( __s , __n ) ; 

}__CvT__record_line____(__CvT_miT,104,631);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
streamsize 
basic_filebuf < _CharT , _Traits >:: 
xsputn ( const _CharT * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,104,638);
__CvT__record_line____(__CvT_miT,104,639);streamsize __ret = 0 ; 



__CvT__record_line____(__CvT_miT,104,643);const bool __testout = _M_mode & ios_base :: out ; 
__CvT__record_line____(__CvT_miT,104,644);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) 
&& __testout && ! _M_reading ) 
{{ 

__CvT__record_line____(__CvT_miT,104,648);const streamsize __chunk = 1ul << 10 ; 
__CvT__record_line____(__CvT_miT,104,649);streamsize __bufavail = this -> epptr ( ) - this -> pptr ( ) ; 


__CvT__record_line____(__CvT_miT,104,652);if ( ! _M_writing && _M_buf_size > 1 ) 
{__CvT__record_line____(__CvT_miT,104,653);__bufavail = _M_buf_size - 1 ; 

}__CvT__record_line____(__CvT_miT,104,655);const streamsize __limit = std :: min ( __chunk , __bufavail ) ; 
__CvT__record_line____(__CvT_miT,104,656);if ( __n >= __limit ) 
{{ 
__CvT__record_line____(__CvT_miT,104,658);const streamsize __buffill = this -> pptr ( ) - this -> pbase ( ) ; 
__CvT__record_line____(__CvT_miT,104,659);const char * __buf = reinterpret_cast < const char *> ( this -> pbase ( ) ) ; 
__CvT__record_line____(__CvT_miT,104,660);__ret = _M_file . xsputn_2 ( __buf , __buffill , 
reinterpret_cast < const char *> ( __s ) , 
__n ) ; 
__CvT__record_line____(__CvT_miT,104,663);if ( __ret == __buffill + __n ) 
{{ 
__CvT__record_line____(__CvT_miT,104,665);_M_set_buffer ( 0 ) ; 
__CvT__record_line____(__CvT_miT,104,666);_M_writing = true ; 
} 
}__CvT__record_line____(__CvT_miT,104,668);if ( __ret > __buffill ) 
{__CvT__record_line____(__CvT_miT,104,669);__ret -= __buffill ; 
}else {
__CvT__record_line____(__CvT_miT,104,671);__ret = 0 ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,104,674);__ret = __streambuf_type :: xsputn ( __s , __n ) ; 
}} 
}else {
__CvT__record_line____(__CvT_miT,104,677);__ret = __streambuf_type :: xsputn ( __s , __n ) ; 
}__CvT__record_line____(__CvT_miT,104,678);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: __streambuf_type * 
basic_filebuf < _CharT , _Traits >:: 
setbuf ( char_type * __s , streamsize __n ) 
{ __CvT__record_line____(__CvT_miT,104,685);
__CvT__record_line____(__CvT_miT,104,686);if ( ! this -> is_open ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,688);if ( __s == 0 && __n == 0 ) 
{__CvT__record_line____(__CvT_miT,104,689);_M_buf_size = 1 ; 
}else {__CvT__record_line____(__CvT_miT,104,690);if ( __s && __n > 0 ) 
{{ 
# 700 "/usr/include/c++/4.8/bits/fstream.tcc" 3 
__CvT__record_line____(__CvT_miT,104,700);_M_buf = __s ; 
__CvT__record_line____(__CvT_miT,104,701);_M_buf_size = __n ; 
} 
}}} 
}__CvT__record_line____(__CvT_miT,104,704);return this ; 
} 




template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: pos_type 
basic_filebuf < _CharT , _Traits >:: 
seekoff ( off_type __off , ios_base :: seekdir __way , ios_base :: openmode ) 
{ __CvT__record_line____(__CvT_miT,104,714);
__CvT__record_line____(__CvT_miT,104,715);int __width = 0 ; 
__CvT__record_line____(__CvT_miT,104,716);if ( _M_codecvt ) 
{__CvT__record_line____(__CvT_miT,104,717);__width = _M_codecvt -> encoding ( ) ; 
}__CvT__record_line____(__CvT_miT,104,718);if ( __width < 0 ) 
{__CvT__record_line____(__CvT_miT,104,719);__width = 0 ; 

}__CvT__record_line____(__CvT_miT,104,721);pos_type __ret = pos_type ( off_type ( - 1 ) ) ; 
__CvT__record_line____(__CvT_miT,104,722);const bool __testfail = __off != 0 && __width <= 0 ; 
__CvT__record_line____(__CvT_miT,104,723);if ( this -> is_open ( ) && ! __testfail ) 
{{ 




__CvT__record_line____(__CvT_miT,104,729);bool __no_movement = __way == ios_base :: cur && __off == 0 
&& ( ! _M_writing || _M_codecvt -> always_noconv ( ) ) ; 


__CvT__record_line____(__CvT_miT,104,733);if ( ! __no_movement ) 
{__CvT__record_line____(__CvT_miT,104,734);_M_destroy_pback ( ) ; 






}__CvT__record_line____(__CvT_miT,104,741);__state_type __state = _M_state_beg ; 
__CvT__record_line____(__CvT_miT,104,742);off_type __computed_off = __off * __width ; 
__CvT__record_line____(__CvT_miT,104,743);if ( _M_reading && __way == ios_base :: cur ) 
{{ 
__CvT__record_line____(__CvT_miT,104,745);__state = _M_state_last ; 
__CvT__record_line____(__CvT_miT,104,746);__computed_off += _M_get_ext_pos ( __state ) ; 
} 
}__CvT__record_line____(__CvT_miT,104,748);if ( ! __no_movement ) 
{__CvT__record_line____(__CvT_miT,104,749);__ret = _M_seek ( __computed_off , __way , __state ) ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,104,752);if ( _M_writing ) 
{__CvT__record_line____(__CvT_miT,104,753);__computed_off = this -> pptr ( ) - this -> pbase ( ) ; 

}__CvT__record_line____(__CvT_miT,104,755);off_type __file_off = _M_file . seekoff ( 0 , ios_base :: cur ) ; 
__CvT__record_line____(__CvT_miT,104,756);if ( __file_off != off_type ( - 1 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,758);__ret = __file_off + __computed_off ; 
__CvT__record_line____(__CvT_miT,104,759);__ret . state ( __state ) ; 
} 
}} 
}} 
}__CvT__record_line____(__CvT_miT,104,763);return __ret ; 
} 





template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: pos_type 
basic_filebuf < _CharT , _Traits >:: 
seekpos ( pos_type __pos , ios_base :: openmode ) 
{ __CvT__record_line____(__CvT_miT,104,774);
__CvT__record_line____(__CvT_miT,104,775);pos_type __ret = pos_type ( off_type ( - 1 ) ) ; 
__CvT__record_line____(__CvT_miT,104,776);if ( this -> is_open ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,104,779);_M_destroy_pback ( ) ; 
__CvT__record_line____(__CvT_miT,104,780);__ret = _M_seek ( off_type ( __pos ) , ios_base :: beg , __pos . state ( ) ) ; 
} 
}__CvT__record_line____(__CvT_miT,104,782);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
typename basic_filebuf < _CharT , _Traits >:: pos_type 
basic_filebuf < _CharT , _Traits >:: 
_M_seek ( off_type __off , ios_base :: seekdir __way , __state_type __state ) 
{ __CvT__record_line____(__CvT_miT,104,789);
__CvT__record_line____(__CvT_miT,104,790);pos_type __ret = pos_type ( off_type ( - 1 ) ) ; 
__CvT__record_line____(__CvT_miT,104,791);if ( _M_terminate_output ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,793);off_type __file_off = _M_file . seekoff ( __off , __way ) ; 
__CvT__record_line____(__CvT_miT,104,794);if ( __file_off != off_type ( - 1 ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,796);_M_reading = false ; 
__CvT__record_line____(__CvT_miT,104,797);_M_writing = false ; 
__CvT__record_line____(__CvT_miT,104,798);_M_ext_next = _M_ext_end = _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,104,799);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,104,800);_M_state_cur = __state ; 
__CvT__record_line____(__CvT_miT,104,801);__ret = __file_off ; 
__CvT__record_line____(__CvT_miT,104,802);__ret . state ( _M_state_cur ) ; 
} 
}} 
}__CvT__record_line____(__CvT_miT,104,805);return __ret ; 
} 




template < typename _CharT , typename _Traits > 
int basic_filebuf < _CharT , _Traits >:: 
_M_get_ext_pos ( __state_type & __state ) 
{ __CvT__record_line____(__CvT_miT,104,814);
__CvT__record_line____(__CvT_miT,104,815);if ( _M_codecvt -> always_noconv ( ) ) 
{__CvT__record_line____(__CvT_miT,104,816);return this -> gptr ( ) - this -> egptr ( ) ; 
}else {
{ 



__CvT__record_line____(__CvT_miT,104,822);const int __gptr_off = 
_M_codecvt -> length ( __state , _M_ext_buf , _M_ext_next , 
this -> gptr ( ) - this -> eback ( ) ) ; 
__CvT__record_line____(__CvT_miT,104,825);return _M_ext_buf + __gptr_off - _M_ext_end ; 
} 
}} 

template < typename _CharT , typename _Traits > 
bool 
basic_filebuf < _CharT , _Traits >:: 
_M_terminate_output ( ) 
{ __CvT__record_line____(__CvT_miT,104,833);

__CvT__record_line____(__CvT_miT,104,835);bool __testvalid = true ; 
__CvT__record_line____(__CvT_miT,104,836);if ( this -> pbase ( ) < this -> pptr ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,838);const int_type __tmp = this -> overflow ( ) ; 
__CvT__record_line____(__CvT_miT,104,839);if ( traits_type :: eq_int_type ( __tmp , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,104,840);__testvalid = false ; 
}} 


}__CvT__record_line____(__CvT_miT,104,844);if ( _M_writing && ! __check_facet ( _M_codecvt ) . always_noconv ( ) 
&& __testvalid ) 
{{ 



__CvT__record_line____(__CvT_miT,104,850);const size_t __blen = 128 ; 
__CvT__record_line____(__CvT_miT,104,851);char __buf [ __blen ] ; 
__CvT__record_line____(__CvT_miT,104,852);codecvt_base :: result __r ; 
__CvT__record_line____(__CvT_miT,104,853);streamsize __ilen = 0 ; 

__CvT__record_line____(__CvT_miT,104,855);do {
{ 
__CvT__record_line____(__CvT_miT,104,857);char * __next ; 
__CvT__record_line____(__CvT_miT,104,858);__r = _M_codecvt -> unshift ( _M_state_cur , __buf , 
__buf + __blen , __next ) ; 
__CvT__record_line____(__CvT_miT,104,860);if ( __r == codecvt_base :: error ) 
{__CvT__record_line____(__CvT_miT,104,861);__testvalid = false ; 
}else {__CvT__record_line____(__CvT_miT,104,862);if ( __r == codecvt_base :: ok || 
__r == codecvt_base :: partial ) 
{{ 
__CvT__record_line____(__CvT_miT,104,865);__ilen = __next - __buf ; 
__CvT__record_line____(__CvT_miT,104,866);if ( __ilen > 0 ) 
{{ 
__CvT__record_line____(__CvT_miT,104,868);const streamsize __elen = _M_file . xsputn ( __buf , __ilen ) ; 
__CvT__record_line____(__CvT_miT,104,869);if ( __elen != __ilen ) 
{__CvT__record_line____(__CvT_miT,104,870);__testvalid = false ; 
}} 
}} 
}}} 
}while ( __r == codecvt_base :: partial && __ilen > 0 && __testvalid ) ;

__CvT__record_line____(__CvT_miT,104,876);if ( __testvalid ) 
{{ 




__CvT__record_line____(__CvT_miT,104,882);const int_type __tmp = this -> overflow ( ) ; 
__CvT__record_line____(__CvT_miT,104,883);if ( traits_type :: eq_int_type ( __tmp , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,104,884);__testvalid = false ; 
}} 
}} 
}__CvT__record_line____(__CvT_miT,104,887);return __testvalid ; 
} 

template < typename _CharT , typename _Traits > 
int 
basic_filebuf < _CharT , _Traits >:: 
sync ( ) 
{ __CvT__record_line____(__CvT_miT,104,894);


__CvT__record_line____(__CvT_miT,104,897);int __ret = 0 ; 
__CvT__record_line____(__CvT_miT,104,898);if ( this -> pbase ( ) < this -> pptr ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,900);const int_type __tmp = this -> overflow ( ) ; 
__CvT__record_line____(__CvT_miT,104,901);if ( traits_type :: eq_int_type ( __tmp , traits_type :: eof ( ) ) ) 
{__CvT__record_line____(__CvT_miT,104,902);__ret = - 1 ; 
}} 
}__CvT__record_line____(__CvT_miT,104,904);return __ret ; 
} 

template < typename _CharT , typename _Traits > 
void 
basic_filebuf < _CharT , _Traits >:: 
imbue ( const locale & __loc ) 
{ __CvT__record_line____(__CvT_miT,104,911);
__CvT__record_line____(__CvT_miT,104,912);bool __testvalid = true ; 

__CvT__record_line____(__CvT_miT,104,914);const __codecvt_type * _M_codecvt_tmp = 0 ; 
__CvT__record_line____(__CvT_miT,104,915);if ( __builtin_expect ( has_facet < __codecvt_type > ( __loc ) , true ) ) 
{__CvT__record_line____(__CvT_miT,104,916);_M_codecvt_tmp = & use_facet < __codecvt_type > ( __loc ) ; 

}__CvT__record_line____(__CvT_miT,104,918);if ( this -> is_open ( ) ) 
{{ 

__CvT__record_line____(__CvT_miT,104,921);if ( ( _M_reading || _M_writing ) 
&& __check_facet ( _M_codecvt ) . encoding ( ) == - 1 ) 
{__CvT__record_line____(__CvT_miT,104,923);__testvalid = false ; 
}else {
{ 
__CvT__record_line____(__CvT_miT,104,926);if ( _M_reading ) 
{{ 
__CvT__record_line____(__CvT_miT,104,928);if ( __check_facet ( _M_codecvt ) . always_noconv ( ) ) 
{{ 
__CvT__record_line____(__CvT_miT,104,930);if ( _M_codecvt_tmp 
&& ! __check_facet ( _M_codecvt_tmp ) . always_noconv ( ) ) 
{__CvT__record_line____(__CvT_miT,104,932);__testvalid = this -> seekoff ( 0 , ios_base :: cur , _M_mode ) 
!= pos_type ( off_type ( - 1 ) ) ; 
}} 
}else {
{ 

__CvT__record_line____(__CvT_miT,104,938);_M_ext_next = _M_ext_buf 
+ _M_codecvt -> length ( _M_state_last , _M_ext_buf , 
_M_ext_next , 
this -> gptr ( ) - this -> eback ( ) ) ; 
__CvT__record_line____(__CvT_miT,104,942);const streamsize __remainder = _M_ext_end - _M_ext_next ; 
__CvT__record_line____(__CvT_miT,104,943);if ( __remainder ) 
{__CvT__record_line____(__CvT_miT,104,944);__builtin_memmove ( _M_ext_buf , _M_ext_next , __remainder ) ; 

}__CvT__record_line____(__CvT_miT,104,946);_M_ext_next = _M_ext_buf ; 
__CvT__record_line____(__CvT_miT,104,947);_M_ext_end = _M_ext_buf + __remainder ; 
__CvT__record_line____(__CvT_miT,104,948);_M_set_buffer ( - 1 ) ; 
__CvT__record_line____(__CvT_miT,104,949);_M_state_last = _M_state_cur = _M_state_beg ; 
} 
}} 
}else {__CvT__record_line____(__CvT_miT,104,952);if ( _M_writing && ( __testvalid = _M_terminate_output ( ) ) ) 
{__CvT__record_line____(__CvT_miT,104,953);_M_set_buffer ( - 1 ) ; 
}}} 
}} 

}__CvT__record_line____(__CvT_miT,104,957);if ( __testvalid ) 
{__CvT__record_line____(__CvT_miT,104,958);_M_codecvt = _M_codecvt_tmp ; 
}else {
__CvT__record_line____(__CvT_miT,104,960);_M_codecvt = 0 ; 
}} 




extern template class basic_filebuf < char > ; 
extern template class basic_ifstream < char > ; 
extern template class basic_ofstream < char > ; 
extern template class basic_fstream < char > ; 


extern template class basic_filebuf < wchar_t > ; 
extern template class basic_ifstream < wchar_t > ; 
extern template class basic_ofstream < wchar_t > ; 
extern template class basic_fstream < wchar_t > ; 




} 
# 937 "/usr/include/c++/4.8/fstream" 2 3 
# 3 "hard.c" 2 
# 1 "/usr/include/c++/4.8/iostream" 1 3 
# 36 "/usr/include/c++/4.8/iostream" 3 

# 37 "/usr/include/c++/4.8/iostream" 3 





namespace std 
{ 

# 60 "/usr/include/c++/4.8/iostream" 3 
extern istream cin ; 
extern ostream cout ; 
extern ostream cerr ; 
extern ostream clog ; 


extern wistream wcin ; 
extern wostream wcout ; 
extern wostream wcerr ; 
extern wostream wclog ; 




static ios_base :: Init __ioinit ; 


} 
# 4 "hard.c" 2 

using namespace std ; 

int main ( ) 
{ extern void CvT_StartRecording____(); CvT_StartRecording____(); __CvT__record_line____(__CvT_miT,0,8);

__CvT__record_line____(__CvT_miT,0,10);string x ( "crap" ) ; 
__CvT__record_line____(__CvT_miT,0,11);string y ( "junk" ) ; 

__CvT__record_line____(__CvT_miT,0,13);string z = x + y ; 

__CvT__record_line____(__CvT_miT,0,15);cout << z << endl ; 

} 

# 1 "Instrumentation code ending"
static char const *__CvT__file_name____[]={
"/mnt/c/Users/mikeh/Documents/Tec/Noveno Semestre/Calidad y Pruebas de Software/Coverage/covtool-2.1/tests/hard.c",
"/mnt/c/Users/mikeh/Documents/Tec/Noveno Semestre/Calidad y Pruebas de Software/Coverage/covtool-2.1/tests/<built-in>",
"/mnt/c/Users/mikeh/Documents/Tec/Noveno Semestre/Calidad y Pruebas de Software/Coverage/covtool-2.1/tests/<command-line>",
"/usr/include/stdc-predef.h",
"/usr/include/c++/4.8/string",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++config.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/os_defines.h",
"/usr/include/features.h",
"/usr/include/x86_64-linux-gnu/sys/cdefs.h",
"/usr/include/x86_64-linux-gnu/bits/wordsize.h",
"/usr/include/x86_64-linux-gnu/gnu/stubs.h",
"/usr/include/x86_64-linux-gnu/gnu/stubs-64.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/cpu_defines.h",
"/usr/include/c++/4.8/bits/stringfwd.h",
"/usr/include/c++/4.8/bits/memoryfwd.h",
"/usr/include/c++/4.8/bits/char_traits.h",
"/usr/include/c++/4.8/bits/stl_algobase.h",
"/usr/include/c++/4.8/bits/functexcept.h",
"/usr/include/c++/4.8/bits/exception_defines.h",
"/usr/include/c++/4.8/bits/cpp_type_traits.h",
"/usr/include/c++/4.8/ext/type_traits.h",
"/usr/include/c++/4.8/ext/numeric_traits.h",
"/usr/include/c++/4.8/bits/stl_pair.h",
"/usr/include/c++/4.8/bits/move.h",
"/usr/include/c++/4.8/bits/concept_check.h",
"/usr/include/c++/4.8/bits/stl_iterator_base_types.h",
"/usr/include/c++/4.8/bits/stl_iterator_base_funcs.h",
"/usr/include/c++/4.8/debug/debug.h",
"/usr/include/c++/4.8/bits/stl_iterator.h",
"/usr/include/c++/4.8/bits/postypes.h",
"/usr/include/c++/4.8/cwchar",
"/usr/include/wchar.h",
"/usr/include/stdio.h",
"/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h",
"/usr/include/x86_64-linux-gnu/bits/wchar.h",
"/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h",
"/usr/include/xlocale.h",
"/usr/include/c++/4.8/bits/allocator.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++allocator.h",
"/usr/include/c++/4.8/ext/new_allocator.h",
"/usr/include/c++/4.8/new",
"/usr/include/c++/4.8/exception",
"/usr/include/c++/4.8/bits/atomic_lockfree_defines.h",
"/usr/include/c++/4.8/bits/localefwd.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++locale.h",
"/usr/include/c++/4.8/clocale",
"/usr/include/locale.h",
"/usr/include/x86_64-linux-gnu/bits/locale.h",
"/usr/include/c++/4.8/iosfwd",
"/usr/include/c++/4.8/cctype",
"/usr/include/ctype.h",
"/usr/include/x86_64-linux-gnu/bits/types.h",
"/usr/include/x86_64-linux-gnu/bits/typesizes.h",
"/usr/include/endian.h",
"/usr/include/x86_64-linux-gnu/bits/endian.h",
"/usr/include/x86_64-linux-gnu/bits/byteswap.h",
"/usr/include/x86_64-linux-gnu/bits/byteswap-16.h",
"/usr/include/c++/4.8/bits/ostream_insert.h",
"/usr/include/c++/4.8/bits/cxxabi_forced.h",
"/usr/include/c++/4.8/bits/stl_function.h",
"/usr/include/c++/4.8/backward/binders.h",
"/usr/include/c++/4.8/bits/range_access.h",
"/usr/include/c++/4.8/bits/basic_string.h",
"/usr/include/c++/4.8/ext/atomicity.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/gthr-default.h",
"/usr/include/pthread.h",
"/usr/include/sched.h",
"/usr/include/time.h",
"/usr/include/x86_64-linux-gnu/bits/sched.h",
"/usr/include/x86_64-linux-gnu/bits/time.h",
"/usr/include/x86_64-linux-gnu/bits/timex.h",
"/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h",
"/usr/include/x86_64-linux-gnu/bits/setjmp.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/atomic_word.h",
"/usr/include/c++/4.8/bits/basic_string.tcc",
"/usr/include/c++/4.8/fstream",
"/usr/include/c++/4.8/istream",
"/usr/include/c++/4.8/ios",
"/usr/include/c++/4.8/bits/ios_base.h",
"/usr/include/c++/4.8/bits/locale_classes.h",
"/usr/include/c++/4.8/bits/locale_classes.tcc",
"/usr/include/c++/4.8/streambuf",
"/usr/include/c++/4.8/bits/streambuf.tcc",
"/usr/include/c++/4.8/bits/basic_ios.h",
"/usr/include/c++/4.8/bits/locale_facets.h",
"/usr/include/c++/4.8/cwctype",
"/usr/include/wctype.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/ctype_base.h",
"/usr/include/c++/4.8/bits/streambuf_iterator.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/ctype_inline.h",
"/usr/include/c++/4.8/bits/locale_facets.tcc",
"/usr/include/c++/4.8/bits/basic_ios.tcc",
"/usr/include/c++/4.8/ostream",
"/usr/include/c++/4.8/bits/ostream.tcc",
"/usr/include/c++/4.8/bits/istream.tcc",
"/usr/include/c++/4.8/bits/codecvt.h",
"/usr/include/c++/4.8/cstdio",
"/usr/include/libio.h",
"/usr/include/_G_config.h",
"/usr/include/x86_64-linux-gnu/bits/stdio_lim.h",
"/usr/include/x86_64-linux-gnu/bits/sys_errlist.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/basic_file.h",
"/usr/include/x86_64-linux-gnu/c++/4.8/bits/c++io.h",
"/usr/include/c++/4.8/bits/fstream.tcc",
"/usr/include/c++/4.8/iostream",
0};
static int __CvT__logged_lines___[] = {
0,8,
0,10,
0,11,
0,13,
0,15,
15,93,
15,97,
15,101,
15,123,
15,127,
15,131,
15,135,
15,139,
15,146,
15,147,
15,148,
15,149,
15,150,
15,151,
15,152,
15,159,
15,160,
15,161,
15,162,
15,163,
15,170,
15,171,
15,172,
15,173,
15,174,
15,181,
15,182,
15,190,
15,192,
15,193,
15,200,
15,202,
15,203,
15,243,
15,247,
15,251,
15,255,
15,259,
15,263,
15,267,
15,271,
15,275,
15,279,
15,285,
15,289,
15,293,
15,297,
15,314,
15,318,
15,322,
15,326,
15,330,
15,334,
15,338,
15,342,
15,346,
15,350,
15,354,
15,358,
15,362,
15,366,
16,101,
16,102,
16,120,
16,142,
16,167,
16,175,
16,176,
16,177,
16,194,
16,198,
16,199,
16,200,
16,217,
16,221,
16,222,
16,223,
16,240,
16,242,
16,243,
16,244,
16,261,
16,263,
16,264,
16,265,
16,278,
16,289,
16,303,
16,304,
16,305,
16,306,
16,331,
16,333,
16,335,
16,336,
16,337,
16,339,
16,369,
16,370,
16,371,
16,372,
16,373,
16,380,
16,384,
16,389,
16,425,
16,426,
16,451,
16,458,
16,506,
16,507,
16,508,
16,509,
16,534,
16,535,
16,536,
16,537,
16,538,
16,564,
16,565,
16,566,
16,567,
16,568,
16,575,
16,579,
16,584,
16,593,
16,594,
16,620,
16,629,
16,680,
16,681,
16,682,
16,690,
16,691,
16,692,
16,693,
16,701,
16,702,
16,703,
16,722,
16,728,
16,736,
16,737,
16,739,
16,740,
16,747,
16,748,
16,749,
16,751,
16,752,
16,759,
16,760,
16,761,
16,782,
16,786,
16,795,
16,796,
16,797,
16,798,
16,799,
16,809,
16,810,
16,818,
16,821,
16,827,
16,837,
16,842,
16,852,
16,853,
16,855,
16,857,
16,863,
16,878,
16,883,
16,885,
16,888,
16,889,
16,890,
16,891,
16,893,
16,903,
16,904,
16,905,
16,906,
16,908,
16,916,
16,919,
16,926,
16,945,
16,958,
16,960,
16,962,
16,963,
16,964,
16,965,
16,967,
16,968,
16,969,
16,972,
16,974,
16,981,
16,985,
16,989,
16,993,
16,997,
16,1001,
16,1022,
16,1031,
16,1055,
16,1061,
16,1062,
16,1063,
16,1064,
16,1086,
16,1099,
16,1122,
16,1133,
16,1134,
16,1137,
16,1138,
16,1139,
16,1140,
16,1142,
16,1162,
16,1171,
16,1173,
16,1174,
16,1176,
16,1200,
16,1206,
16,1208,
16,1209,
16,1211,
20,151,
20,156,
22,109,
22,113,
22,119,
22,215,
22,221,
22,228,
22,234,
22,240,
22,246,
22,287,
23,48,
23,49,
23,189,
23,190,
23,191,
29,124,
29,134,
29,137,
29,142,
29,147,
29,155,
29,156,
29,157,
29,166,
29,167,
29,168,
29,179,
29,180,
29,181,
29,182,
29,193,
29,194,
29,195,
29,196,
29,206,
29,217,
29,222,
37,113,
37,116,
37,119,
37,121,
37,129,
37,134,
37,139,
37,144,
37,161,
37,168,
37,170,
37,171,
37,181,
37,189,
39,79,
39,81,
39,84,
39,86,
39,90,
39,94,
39,100,
39,101,
39,102,
39,104,
39,110,
39,114,
39,130,
39,133,
39,140,
39,145,
40,56,
40,110,
40,112,
40,115,
40,116,
41,76,
44,73,
44,75,
44,88,
44,89,
44,92,
44,97,
44,100,
44,108,
55,46,
55,47,
55,110,
55,111,
57,58,
57,62,
57,63,
57,65,
57,66,
57,68,
57,69,
57,78,
57,82,
57,83,
57,85,
57,87,
57,88,
57,90,
57,93,
57,94,
57,95,
57,96,
57,97,
57,98,
57,101,
57,102,
57,106,
57,107,
57,110,
57,112,
59,144,
59,153,
59,162,
59,171,
59,180,
59,189,
59,208,
59,217,
59,226,
59,235,
59,244,
59,253,
59,272,
59,281,
59,290,
59,301,
59,309,
59,317,
59,359,
59,363,
59,370,
59,383,
59,388,
59,395,
59,428,
59,432,
59,436,
59,443,
59,454,
59,458,
59,462,
59,469,
59,478,
59,482,
59,491,
59,495,
59,516,
59,520,
59,547,
59,551,
59,565,
59,569,
59,583,
59,587,
59,601,
59,605,
59,619,
59,623,
59,637,
59,641,
59,655,
59,659,
59,673,
59,677,
59,688,
59,693,
59,698,
59,703,
59,708,
59,713,
59,718,
59,723,
60,115,
60,119,
60,125,
60,132,
60,134,
60,150,
60,154,
60,160,
60,167,
60,169,
62,182,
62,186,
62,187,
62,192,
62,196,
62,200,
62,204,
62,208,
62,210,
62,213,
62,214,
62,215,
62,223,
62,227,
62,228,
62,238,
62,240,
62,245,
62,249,
62,259,
62,261,
62,263,
62,264,
62,275,
62,293,
62,297,
62,301,
62,307,
62,311,
62,315,
62,316,
62,317,
62,322,
62,323,
62,324,
62,325,
62,330,
62,331,
62,332,
62,338,
62,339,
62,340,
62,346,
62,347,
62,355,
62,356,
62,357,
62,359,
62,364,
62,365,
62,366,
62,368,
62,373,
62,374,
62,375,
62,377,
62,385,
62,386,
62,387,
62,392,
62,396,
62,400,
62,404,
62,408,
62,409,
62,411,
62,412,
62,413,
62,414,
62,416,
62,427,
62,439,
62,539,
62,547,
62,555,
62,566,
62,567,
62,568,
62,606,
62,607,
62,608,
62,617,
62,625,
62,626,
62,627,
62,636,
62,645,
62,654,
62,663,
62,672,
62,716,
62,722,
62,727,
62,754,
62,777,
62,804,
62,812,
62,827,
62,829,
62,844,
62,849,
62,850,
62,865,
62,866,
62,867,
62,868,
62,884,
62,885,
62,886,
62,887,
62,888,
62,933,
62,942,
62,951,
62,952,
62,953,
62,1007,
62,1009,
62,1045,
62,1053,
62,1054,
62,1055,
62,1056,
62,1057,
62,1058,
62,1101,
62,1129,
62,1131,
62,1145,
62,1158,
62,1186,
62,1203,
62,1234,
62,1257,
62,1297,
62,1299,
62,1320,
62,1338,
62,1340,
62,1341,
62,1342,
62,1343,
62,1363,
62,1364,
62,1366,
62,1379,
62,1382,
62,1383,
62,1384,
62,1385,
62,1430,
62,1453,
62,1497,
62,1499,
62,1521,
62,1539,
62,1558,
62,1561,
62,1579,
62,1581,
62,1600,
62,1603,
62,1625,
62,1630,
62,1637,
62,1641,
62,1648,
62,1652,
62,1658,
62,1662,
62,1669,
62,1673,
62,1702,
62,1723,
62,1725,
62,1734,
62,1739,
62,1744,
62,1746,
62,1801,
62,1811,
62,1818,
62,1848,
62,1862,
62,1864,
62,1893,
62,1922,
62,1924,
62,1954,
62,1983,
62,1985,
62,2002,
62,2018,
62,2047,
62,2049,
62,2066,
62,2081,
62,2111,
62,2113,
62,2144,
62,2174,
62,2176,
62,2207,
62,2226,
62,2227,
62,2228,
62,2229,
62,2231,
62,2232,
62,2233,
62,2234,
62,2367,
62,2368,
62,2369,
62,2370,
62,2404,
62,2405,
62,2406,
62,2407,
62,2419,
62,2422,
62,2423,
62,2424,
62,2488,
62,2495,
62,2509,
62,2521,
62,2534,
62,2546,
62,2558,
62,2571,
62,2583,
62,2595,
62,2608,
62,2620,
62,2632,
62,2645,
62,2657,
62,2669,
62,2682,
62,2694,
62,2706,
62,2719,
62,2755,
62,2758,
62,2795,
63,49,
63,53,
63,66,
63,67,
63,68,
63,69,
63,74,
63,79,
63,81,
63,82,
63,84,
63,93,
63,95,
63,96,
63,98,
65,248,
65,249,
65,251,
65,661,
65,662,
65,667,
65,668,
65,673,
65,674,
65,679,
65,680,
65,685,
65,686,
65,691,
65,692,
65,697,
65,698,
65,699,
65,701,
65,706,
65,707,
65,712,
65,713,
65,718,
65,719,
65,724,
65,725,
65,730,
65,731,
65,732,
65,737,
65,738,
65,739,
65,741,
65,746,
65,747,
65,748,
65,750,
65,755,
65,756,
65,757,
65,759,
65,766,
65,767,
65,768,
65,770,
65,776,
65,777,
65,778,
65,780,
65,809,
65,810,
65,815,
65,816,
65,823,
65,824,
65,830,
65,831,
65,836,
65,837,
65,851,
65,852,
65,857,
65,858,
65,863,
65,864,
65,870,
65,871,
65,877,
65,878,
65,883,
65,884,
66,571,
66,572,
66,573,
66,574,
66,576,
75,80,
75,82,
75,83,
75,86,
75,87,
75,88,
75,90,
75,91,
75,93,
75,94,
75,95,
75,97,
75,99,
75,102,
75,103,
75,104,
75,105,
75,107,
75,108,
75,113,
75,114,
75,116,
75,117,
75,126,
75,128,
75,129,
75,132,
75,133,
75,135,
75,138,
75,139,
75,140,
75,143,
75,144,
75,146,
75,147,
75,154,
75,156,
75,157,
75,160,
75,161,
75,162,
75,164,
75,165,
75,174,
75,180,
75,190,
75,201,
75,208,
75,216,
75,222,
75,230,
75,244,
75,245,
75,248,
75,249,
75,250,
75,251,
75,253,
75,260,
75,262,
75,263,
75,264,
75,268,
75,269,
75,270,
75,271,
75,272,
75,273,
75,274,
75,282,
75,283,
75,285,
75,286,
75,287,
75,288,
75,289,
75,290,
75,292,
75,299,
75,301,
75,303,
75,304,
75,305,
75,307,
75,308,
75,311,
75,312,
75,313,
75,316,
75,317,
75,319,
75,326,
75,327,
75,328,
75,330,
75,331,
75,332,
75,333,
75,334,
75,336,
75,343,
75,344,
75,345,
75,346,
75,348,
75,349,
75,350,
75,351,
75,352,
75,354,
75,361,
75,363,
75,364,
75,365,
75,366,
75,370,
75,371,
75,372,
75,373,
75,374,
75,375,
75,376,
75,377,
75,380,
75,381,
75,382,
75,384,
75,392,
75,399,
75,400,
75,402,
75,403,
75,404,
75,405,
75,408,
75,416,
75,418,
75,419,
75,420,
75,421,
75,422,
75,423,
75,424,
75,428,
75,429,
75,430,
75,431,
75,432,
75,437,
75,438,
75,446,
75,447,
75,449,
75,456,
75,458,
75,459,
75,461,
75,462,
75,463,
75,470,
75,471,
75,472,
75,473,
75,475,
75,478,
75,479,
75,481,
75,482,
75,483,
75,484,
75,487,
75,488,
75,490,
75,493,
75,496,
75,503,
75,504,
75,507,
75,508,
75,509,
75,510,
75,511,
75,512,
75,520,
75,521,
75,522,
75,523,
75,524,
75,525,
75,527,
75,528,
75,529,
75,534,
75,536,
75,538,
75,539,
75,548,
75,551,
75,552,
75,577,
75,578,
75,586,
75,587,
75,592,
75,594,
75,595,
75,597,
75,598,
75,600,
75,601,
75,602,
75,607,
75,608,
75,609,
75,617,
75,618,
75,625,
75,627,
75,628,
75,630,
75,631,
75,633,
75,634,
75,641,
75,642,
75,643,
75,644,
75,645,
75,646,
75,647,
75,657,
75,658,
75,659,
75,660,
75,661,
75,670,
75,671,
75,672,
75,673,
75,674,
75,675,
75,683,
75,684,
75,685,
75,686,
75,687,
75,694,
75,698,
75,699,
75,700,
75,701,
75,702,
75,703,
75,709,
75,712,
75,713,
75,714,
75,715,
75,716,
75,717,
75,724,
75,725,
75,726,
75,728,
75,729,
75,731,
75,738,
75,740,
75,741,
75,743,
75,744,
75,746,
75,748,
75,749,
75,752,
75,754,
75,761,
75,762,
75,763,
75,764,
75,766,
75,767,
75,768,
75,769,
75,770,
75,772,
75,779,
75,781,
75,782,
75,784,
75,785,
75,786,
75,788,
75,789,
75,793,
75,800,
75,801,
75,802,
75,804,
75,805,
75,806,
75,807,
75,808,
75,810,
75,817,
75,819,
75,821,
75,822,
75,823,
75,825,
75,832,
75,834,
75,835,
75,837,
75,838,
75,839,
75,841,
75,842,
75,846,
75,853,
75,855,
75,856,
75,857,
75,858,
75,865,
75,866,
75,867,
75,868,
75,869,
75,876,
75,878,
75,879,
75,881,
75,882,
75,883,
75,885,
75,886,
75,890,
75,897,
75,898,
75,899,
75,901,
75,902,
75,903,
75,905,
75,906,
75,910,
75,917,
75,918,
75,919,
75,920,
75,921,
75,922,
75,923,
75,924,
75,925,
75,933,
75,934,
75,935,
75,936,
75,937,
75,938,
75,939,
75,941,
75,942,
75,943,
75,950,
75,952,
75,953,
75,954,
75,955,
75,956,
75,957,
75,958,
75,965,
75,967,
75,968,
75,969,
75,970,
75,971,
75,972,
75,973,
75,974,
75,982,
75,984,
75,985,
75,986,
75,987,
75,988,
75,989,
75,990,
75,998,
75,1007,
75,1008,
75,1009,
75,1010,
75,1012,
75,1015,
75,1016,
75,1017,
75,1018,
75,1019,
75,1021,
75,1022,
75,1023,
75,1025,
75,1030,
75,1032,
75,1033,
75,1035,
75,1036,
75,1037,
75,1039,
75,1041,
75,1042,
75,1043,
75,1047,
75,1048,
75,1055,
75,1059,
75,1060,
75,1061,
75,1062,
75,1063,
75,1070,
75,1077,
75,1078,
75,1079,
75,1080,
75,1081,
75,1083,
75,1085,
75,1086,
75,1087,
75,1088,
75,1090,
75,1094,
75,1095,
75,1096,
75,1099,
75,1100,
75,1101,
75,1103,
75,1104,
75,1107,
75,1111,
75,1112,
75,1119,
75,1122,
75,1123,
75,1124,
75,1125,
75,1126,
76,178,
76,179,
76,181,
76,182,
76,183,
76,184,
76,195,
76,196,
76,199,
76,200,
76,201,
76,220,
76,228,
76,396,
76,397,
76,398,
76,400,
76,401,
76,403,
76,405,
76,406,
76,408,
76,454,
76,469,
76,470,
76,471,
76,499,
76,510,
76,518,
76,524,
76,539,
76,540,
76,541,
76,545,
76,577,
76,578,
76,579,
76,626,
76,643,
76,644,
76,645,
76,674,
76,685,
76,693,
76,699,
76,715,
76,716,
76,717,
76,721,
76,754,
76,755,
76,756,
76,805,
76,819,
76,820,
76,821,
76,847,
76,858,
76,866,
76,872,
76,888,
76,889,
76,890,
76,894,
76,927,
76,928,
76,929,
77,95,
77,104,
77,121,
77,125,
77,126,
77,127,
77,132,
77,133,
77,134,
77,169,
77,176,
77,183,
77,187,
77,191,
77,196,
77,200,
77,215,
77,219,
77,223,
77,236,
77,270,
77,355,
77,388,
77,428,
77,608,
77,706,
77,728,
77,733,
77,775,
77,780,
77,821,
77,827,
77,831,
79,78,
79,82,
79,86,
79,90,
79,94,
79,98,
79,102,
79,120,
79,124,
79,128,
79,132,
79,136,
79,140,
79,144,
79,160,
79,164,
79,168,
79,172,
79,176,
79,180,
79,184,
79,476,
79,479,
79,484,
79,487,
79,488,
79,492,
79,509,
79,558,
79,569,
79,570,
79,571,
79,572,
79,585,
79,586,
79,587,
79,588,
79,602,
79,603,
79,604,
79,605,
79,606,
79,617,
79,628,
79,637,
79,638,
79,639,
79,640,
79,651,
79,660,
79,661,
79,662,
79,663,
79,702,
79,713,
79,748,
79,749,
79,751,
79,769,
79,770,
79,772,
79,802,
79,803,
79,804,
79,810,
79,811,
79,812,
79,818,
79,819,
79,820,
79,826,
79,827,
79,828,
79,834,
79,835,
79,836,
79,842,
79,843,
79,844,
79,850,
79,851,
79,852,
79,858,
79,859,
79,860,
79,866,
79,867,
79,868,
79,874,
79,875,
79,876,
79,882,
79,883,
79,884,
79,890,
79,891,
79,892,
79,898,
79,899,
79,900,
79,906,
79,907,
79,908,
79,915,
79,916,
79,917,
79,923,
79,924,
79,925,
79,931,
79,932,
79,933,
79,940,
79,941,
79,942,
79,948,
79,949,
79,950,
79,956,
79,957,
79,958,
79,965,
79,966,
79,967,
79,973,
79,974,
79,975,
80,236,
80,371,
80,401,
80,405,
80,408,
80,411,
80,412,
80,467,
80,510,
80,514,
80,517,
80,520,
80,521,
80,540,
80,541,
80,542,
80,544,
80,545,
80,546,
80,564,
80,613,
80,627,
80,644,
80,662,
80,676,
80,689,
80,770,
80,771,
80,774,
80,775,
80,781,
81,46,
81,47,
81,49,
81,50,
81,53,
81,54,
81,56,
81,57,
81,64,
81,65,
81,66,
81,68,
81,72,
81,73,
81,75,
81,83,
81,85,
81,86,
81,105,
81,106,
81,107,
81,108,
81,133,
81,134,
81,135,
81,136,
81,137,
81,139,
81,150,
81,156,
81,163,
81,166,
81,167,
81,169,
81,170,
81,171,
81,172,
81,177,
81,179,
81,180,
81,181,
81,183,
81,184,
81,185,
81,186,
81,187,
81,188,
81,189,
81,190,
81,192,
81,193,
81,201,
81,202,
81,205,
81,207,
81,208,
81,210,
81,212,
81,214,
81,219,
81,222,
81,225,
81,227,
81,228,
81,229,
81,230,
81,233,
81,234,
81,235,
81,236,
81,238,
81,239,
81,244,
81,245,
81,248,
81,250,
81,257,
81,258,
81,259,
81,260,
81,264,
82,198,
82,210,
82,211,
82,212,
82,213,
82,214,
82,227,
82,240,
82,253,
82,265,
82,271,
82,285,
82,286,
82,287,
82,299,
82,300,
82,301,
82,303,
82,304,
82,317,
82,318,
82,319,
82,321,
82,322,
82,325,
82,326,
82,339,
82,340,
82,341,
82,342,
82,344,
82,345,
82,358,
82,373,
82,374,
82,375,
82,376,
82,378,
82,381,
82,382,
82,384,
82,398,
82,399,
82,400,
82,402,
82,403,
82,406,
82,407,
82,425,
82,426,
82,427,
82,429,
82,430,
82,431,
82,434,
82,435,
82,451,
82,467,
82,482,
82,485,
82,488,
82,498,
82,510,
82,511,
82,512,
82,513,
82,529,
82,532,
82,535,
82,545,
82,556,
82,557,
82,558,
82,577,
82,592,
82,604,
82,616,
82,627,
82,649,
82,688,
82,701,
82,702,
82,703,
82,705,
82,707,
82,708,
82,710,
82,725,
82,769,
82,784,
82,785,
82,786,
82,788,
82,794,
82,797,
82,807,
82,810,
83,50,
83,51,
83,52,
83,54,
83,55,
83,56,
83,57,
83,58,
83,59,
83,62,
83,64,
83,65,
83,67,
83,68,
83,71,
83,81,
83,82,
83,83,
83,85,
83,86,
83,88,
83,89,
83,90,
83,91,
83,92,
83,93,
83,96,
83,98,
83,99,
83,101,
83,102,
83,105,
83,108,
83,119,
83,120,
83,121,
83,122,
83,123,
83,125,
83,126,
83,128,
83,129,
83,131,
83,132,
83,134,
83,141,
83,142,
83,143,
84,116,
84,120,
84,132,
84,152,
84,159,
84,162,
84,163,
84,164,
84,175,
84,185,
84,196,
84,206,
84,217,
84,252,
84,253,
84,254,
84,267,
84,276,
84,290,
84,302,
84,303,
84,304,
84,305,
84,316,
84,365,
84,366,
84,368,
84,369,
84,371,
84,385,
84,386,
84,387,
84,388,
84,425,
84,444,
84,457,
85,113,
85,114,
85,115,
85,123,
85,124,
85,125,
85,126,
85,163,
85,180,
85,196,
85,212,
85,226,
85,241,
85,255,
85,270,
85,287,
85,306,
85,325,
85,348,
85,352,
85,355,
85,616,
85,796,
85,813,
85,829,
85,846,
85,866,
85,867,
85,868,
85,869,
85,870,
85,893,
85,894,
85,896,
85,897,
85,899,
85,900,
85,901,
85,924,
85,925,
85,926,
85,927,
85,928,
85,929,
85,930,
85,958,
85,959,
85,961,
85,962,
85,964,
85,965,
85,966,
85,975,
85,1076,
85,1099,
85,1100,
85,1101,
85,1125,
85,1152,
85,1153,
85,1154,
85,1477,
85,1600,
85,1617,
85,1618,
85,1620,
85,1621,
85,1622,
85,1667,
85,1681,
85,1695,
85,1708,
85,1721,
85,1752,
85,1765,
85,1778,
85,1795,
85,1807,
85,1820,
85,1833,
85,1846,
85,1883,
85,1884,
85,1887,
85,1888,
85,1889,
85,1890,
85,1896,
85,1936,
85,1964,
85,2001,
85,2006,
85,2011,
85,2016,
85,2022,
85,2027,
85,2061,
85,2066,
85,2071,
85,2104,
85,2108,
85,2122,
85,2123,
85,2124,
85,2126,
85,2127,
85,2131,
85,2132,
85,2133,
85,2134,
85,2135,
85,2136,
85,2138,
85,2145,
85,2146,
85,2147,
85,2148,
85,2150,
85,2151,
85,2152,
85,2154,
85,2178,
85,2183,
85,2188,
85,2193,
85,2199,
85,2204,
85,2275,
85,2294,
85,2336,
85,2341,
85,2346,
85,2351,
85,2399,
85,2404,
85,2425,
85,2454,
85,2475,
85,2480,
85,2486,
85,2491,
85,2531,
85,2537,
85,2543,
85,2549,
85,2555,
85,2561,
85,2567,
85,2573,
85,2579,
85,2585,
85,2591,
85,2597,
85,2603,
89,103,
89,113,
89,117,
89,124,
89,132,
89,138,
89,142,
89,144,
89,145,
89,147,
89,153,
89,158,
89,159,
89,161,
89,162,
89,164,
89,173,
89,178,
89,179,
89,180,
89,181,
89,183,
89,184,
89,185,
89,187,
89,189,
89,191,
89,196,
89,197,
89,198,
89,206,
89,212,
89,242,
89,246,
89,251,
89,252,
89,254,
89,255,
89,261,
89,266,
89,271,
89,276,
89,280,
89,281,
89,284,
89,285,
89,296,
89,297,
89,299,
89,300,
89,301,
89,302,
89,304,
89,312,
89,313,
89,314,
89,315,
89,316,
89,324,
89,325,
89,326,
89,327,
89,328,
89,336,
89,342,
89,344,
89,345,
89,346,
89,348,
89,349,
89,351,
89,352,
89,353,
89,354,
89,358,
89,359,
89,363,
89,371,
89,377,
89,379,
89,380,
89,381,
89,382,
89,385,
89,386,
89,388,
89,390,
89,391,
89,392,
89,393,
89,396,
89,399,
89,400,
89,402,
89,404,
90,44,
90,49,
90,50,
90,51,
90,52,
90,58,
90,59,
90,61,
90,62,
90,68,
90,69,
90,71,
90,72,
91,54,
91,55,
91,56,
91,57,
91,59,
91,60,
91,62,
91,63,
91,67,
91,68,
91,70,
91,72,
91,79,
91,80,
91,82,
91,84,
91,85,
91,86,
91,87,
91,89,
91,90,
91,91,
91,92,
91,93,
91,98,
91,99,
91,100,
91,101,
91,103,
91,104,
91,105,
91,106,
91,108,
91,109,
91,111,
91,112,
91,115,
91,121,
91,122,
91,123,
91,124,
91,147,
91,150,
91,151,
91,152,
91,153,
91,154,
91,157,
91,160,
91,162,
91,163,
91,164,
91,168,
91,169,
91,170,
91,172,
91,177,
91,178,
91,179,
91,181,
91,183,
91,184,
91,186,
91,188,
91,189,
91,191,
91,193,
91,194,
91,196,
91,199,
91,203,
91,204,
91,205,
91,206,
91,207,
91,208,
91,210,
91,212,
91,214,
91,215,
91,217,
91,218,
91,220,
91,223,
91,224,
91,226,
91,231,
91,232,
91,235,
91,237,
91,238,
91,239,
91,240,
91,242,
91,246,
91,247,
91,251,
91,253,
91,254,
91,256,
91,259,
91,263,
91,265,
91,269,
91,271,
91,272,
91,278,
91,279,
91,283,
91,285,
91,287,
91,292,
91,293,
91,294,
91,295,
91,298,
91,302,
91,304,
91,306,
91,307,
91,308,
91,310,
91,315,
91,316,
91,317,
91,318,
91,321,
91,323,
91,324,
91,325,
91,329,
91,331,
91,335,
91,336,
91,340,
91,343,
91,344,
91,346,
91,351,
91,354,
91,355,
91,357,
91,360,
91,363,
91,372,
91,377,
91,378,
91,379,
91,380,
91,381,
91,384,
91,386,
91,387,
91,390,
91,393,
91,394,
91,396,
91,397,
91,398,
91,402,
91,403,
91,405,
91,411,
91,412,
91,413,
91,415,
91,417,
91,418,
91,421,
91,422,
91,423,
91,424,
91,425,
91,426,
91,428,
91,432,
91,433,
91,434,
91,436,
91,437,
91,440,
91,443,
91,445,
91,447,
91,448,
91,449,
91,452,
91,457,
91,461,
91,462,
91,463,
91,464,
91,465,
91,466,
91,470,
91,471,
91,472,
91,473,
91,475,
91,477,
91,479,
91,480,
91,481,
91,483,
91,484,
91,487,
91,488,
91,489,
91,490,
91,493,
91,494,
91,496,
91,499,
91,503,
91,507,
91,509,
91,510,
91,514,
91,515,
91,518,
91,519,
91,522,
91,524,
91,525,
91,527,
91,528,
91,529,
91,530,
91,531,
91,534,
91,535,
91,536,
91,537,
91,541,
91,542,
91,544,
91,549,
91,552,
91,554,
91,557,
91,562,
91,565,
91,566,
91,568,
91,570,
91,572,
91,574,
91,575,
91,578,
91,580,
91,581,
91,582,
91,592,
91,593,
91,598,
91,599,
91,600,
91,601,
91,606,
91,607,
91,608,
91,609,
91,616,
91,617,
91,618,
91,620,
91,621,
91,622,
91,623,
91,624,
91,625,
91,626,
91,628,
91,630,
91,631,
91,634,
91,636,
91,637,
91,639,
91,640,
91,642,
91,643,
91,645,
91,646,
91,648,
91,649,
91,651,
91,652,
91,654,
91,655,
91,657,
91,659,
91,660,
91,661,
91,663,
91,665,
91,667,
91,668,
91,674,
91,675,
91,676,
91,677,
91,680,
91,688,
91,689,
91,690,
91,691,
91,692,
91,693,
91,694,
91,695,
91,703,
91,704,
91,705,
91,706,
91,707,
91,708,
91,709,
91,710,
91,735,
91,736,
91,737,
91,738,
91,739,
91,740,
91,741,
91,742,
91,750,
91,753,
91,754,
91,760,
91,761,
91,764,
91,766,
91,767,
91,777,
91,780,
91,782,
91,791,
91,792,
91,793,
91,796,
91,798,
91,799,
91,803,
91,806,
91,808,
91,809,
91,816,
91,817,
91,819,
91,821,
91,822,
91,826,
91,836,
91,837,
91,839,
91,848,
91,852,
91,853,
91,854,
91,855,
91,856,
91,859,
91,860,
91,865,
91,866,
91,868,
91,871,
91,872,
91,875,
91,879,
91,882,
91,884,
91,888,
91,891,
91,893,
91,895,
91,898,
91,900,
91,902,
91,903,
91,907,
91,908,
91,910,
91,911,
91,916,
91,917,
91,919,
91,921,
91,922,
91,924,
91,928,
91,937,
91,941,
91,942,
91,947,
91,948,
91,950,
91,951,
91,953,
91,972,
91,974,
91,975,
91,976,
91,979,
91,981,
91,985,
91,987,
91,988,
91,993,
91,994,
91,995,
91,999,
91,1001,
91,1002,
91,1003,
91,1027,
91,1029,
91,1031,
91,1034,
91,1035,
91,1036,
91,1038,
91,1039,
91,1045,
91,1051,
91,1054,
91,1055,
91,1057,
91,1058,
91,1059,
91,1062,
91,1065,
91,1067,
91,1071,
91,1072,
91,1074,
91,1076,
91,1077,
91,1079,
91,1083,
91,1090,
91,1091,
91,1092,
91,1094,
91,1095,
91,1100,
91,1101,
91,1102,
91,1104,
91,1106,
91,1109,
91,1110,
91,1112,
91,1113,
91,1117,
91,1118,
91,1120,
91,1122,
91,1123,
91,1127,
91,1128,
91,1130,
91,1132,
91,1133,
91,1135,
91,1142,
91,1157,
91,1164,
91,1165,
91,1166,
91,1168,
91,1174,
91,1176,
91,1177,
91,1194,
91,1195,
91,1196,
91,1199,
91,1201,
91,1202,
91,1203,
91,1206,
91,1207,
91,1212,
91,1213,
91,1215,
91,1218,
91,1219,
91,1220,
91,1222,
91,1227,
91,1228,
91,1229,
91,1230,
91,1234,
91,1235,
91,1243,
91,1244,
91,1245,
91,1247,
91,1251,
91,1252,
91,1255,
91,1256,
91,1258,
91,1260,
91,1261,
91,1262,
91,1265,
91,1267,
91,1268,
91,1269,
91,1272,
92,42,
92,43,
92,44,
92,46,
92,47,
92,48,
92,54,
92,55,
92,56,
92,57,
92,58,
92,64,
92,67,
92,73,
92,77,
92,78,
92,79,
92,80,
92,81,
92,83,
92,84,
92,86,
92,89,
92,90,
92,91,
92,92,
92,93,
92,95,
92,96,
92,97,
92,98,
92,99,
92,100,
92,101,
92,103,
92,106,
92,108,
92,115,
92,116,
92,117,
92,118,
92,119,
92,120,
92,121,
92,127,
92,129,
92,132,
92,146,
92,147,
92,149,
92,150,
92,151,
92,152,
92,158,
92,159,
92,160,
92,162,
92,164,
92,165,
92,167,
92,169,
92,170,
92,172,
93,85,
93,93,
93,109,
93,113,
93,118,
93,122,
93,123,
93,128,
93,132,
93,133,
93,167,
93,171,
93,175,
93,182,
93,185,
93,193,
93,196,
93,202,
93,206,
93,221,
93,225,
93,228,
93,233,
93,246,
93,312,
93,313,
93,314,
93,315,
93,385,
93,429,
93,431,
93,434,
93,435,
93,450,
93,472,
93,477,
93,483,
93,489,
93,494,
93,514,
93,515,
93,516,
93,518,
93,520,
93,531,
93,532,
93,533,
93,535,
93,537,
93,544,
93,549,
93,565,
93,577,
93,587,
94,49,
94,51,
94,52,
94,54,
94,55,
94,57,
94,65,
94,66,
94,67,
94,69,
94,70,
94,72,
94,73,
94,74,
94,78,
94,79,
94,82,
94,83,
94,84,
94,86,
94,93,
94,96,
94,97,
94,98,
94,100,
94,107,
94,110,
94,111,
94,112,
94,114,
94,121,
94,122,
94,123,
94,124,
94,126,
94,128,
94,129,
94,133,
94,134,
94,137,
94,139,
94,140,
94,141,
94,142,
94,143,
94,150,
94,157,
94,158,
94,160,
94,161,
94,163,
94,164,
94,165,
94,169,
94,170,
94,173,
94,174,
94,175,
94,177,
94,184,
94,192,
94,193,
94,195,
94,196,
94,199,
94,200,
94,203,
94,205,
94,212,
94,216,
94,217,
94,219,
94,220,
94,224,
94,225,
94,228,
94,229,
94,230,
94,231,
94,238,
94,239,
94,240,
94,242,
94,243,
94,247,
94,248,
94,251,
94,252,
94,259,
94,260,
94,261,
94,263,
94,267,
94,271,
94,272,
94,277,
94,278,
94,281,
94,282,
94,283,
94,284,
94,291,
94,292,
94,293,
94,295,
94,299,
94,303,
94,304,
94,309,
94,310,
94,313,
94,314,
94,315,
94,316,
94,322,
94,323,
94,324,
94,329,
94,330,
94,332,
94,335,
94,336,
94,337,
94,340,
94,341,
94,342,
94,343,
94,347,
94,348,
94,351,
94,353,
95,48,
95,49,
95,50,
95,52,
95,53,
95,54,
95,56,
95,57,
95,58,
95,60,
95,61,
95,64,
95,69,
95,70,
95,74,
95,75,
95,78,
95,79,
95,88,
95,89,
95,90,
95,92,
95,93,
95,95,
95,96,
95,100,
95,101,
95,104,
95,105,
95,106,
95,108,
95,115,
95,118,
95,119,
95,121,
95,122,
95,124,
95,125,
95,126,
95,130,
95,132,
95,133,
95,135,
95,137,
95,138,
95,141,
95,145,
95,146,
95,149,
95,150,
95,151,
95,153,
95,160,
95,163,
95,164,
95,166,
95,167,
95,169,
95,170,
95,171,
95,175,
95,177,
95,178,
95,180,
95,182,
95,183,
95,186,
95,190,
95,191,
95,194,
95,195,
95,196,
95,198,
95,205,
95,206,
95,207,
95,208,
95,210,
95,212,
95,213,
95,214,
95,215,
95,216,
95,220,
95,221,
95,224,
95,226,
95,227,
95,228,
95,229,
95,230,
95,237,
95,238,
95,239,
95,240,
95,241,
95,242,
95,243,
95,245,
95,247,
95,249,
95,250,
95,252,
95,256,
95,257,
95,260,
95,262,
95,263,
95,264,
95,265,
95,266,
95,273,
95,274,
95,275,
95,276,
95,277,
95,279,
95,281,
95,283,
95,285,
95,286,
95,289,
95,293,
95,294,
95,297,
95,299,
95,300,
95,301,
95,302,
95,303,
95,310,
95,311,
95,312,
95,313,
95,314,
95,316,
95,318,
95,319,
95,320,
95,321,
95,323,
95,327,
95,328,
95,329,
95,331,
95,332,
95,336,
95,337,
95,340,
95,344,
95,345,
95,346,
95,347,
95,348,
95,349,
95,350,
95,357,
95,358,
95,359,
95,360,
95,361,
95,363,
95,365,
95,366,
95,367,
95,368,
95,369,
95,371,
95,375,
95,376,
95,377,
95,379,
95,380,
95,384,
95,385,
95,388,
95,390,
95,391,
95,392,
95,393,
95,394,
95,401,
95,402,
95,403,
95,404,
95,405,
95,407,
95,409,
95,410,
95,411,
95,412,
95,414,
95,418,
95,419,
95,420,
95,422,
95,423,
95,426,
95,428,
95,429,
95,432,
95,437,
95,438,
95,441,
95,445,
95,446,
95,447,
95,448,
95,449,
95,450,
95,451,
95,461,
95,462,
95,463,
95,464,
95,466,
95,467,
95,469,
95,470,
95,472,
95,473,
95,475,
95,479,
95,480,
95,483,
95,484,
95,485,
95,487,
95,494,
95,495,
95,496,
95,497,
95,499,
95,500,
95,502,
95,503,
95,504,
95,513,
95,514,
95,516,
95,519,
95,520,
95,522,
95,525,
95,527,
95,530,
95,533,
95,534,
95,536,
95,537,
95,541,
95,542,
95,545,
95,546,
95,547,
95,549,
95,556,
95,557,
95,558,
95,559,
95,561,
95,562,
95,564,
95,565,
95,566,
95,569,
95,570,
95,572,
95,576,
95,577,
95,579,
95,583,
95,585,
95,588,
95,591,
95,592,
95,594,
95,595,
95,596,
95,598,
95,600,
95,601,
95,606,
95,607,
95,610,
95,611,
95,612,
95,614,
95,621,
95,622,
95,623,
95,624,
95,625,
95,627,
95,628,
95,630,
95,631,
95,632,
95,636,
95,637,
95,640,
95,641,
95,642,
95,644,
95,651,
95,652,
95,653,
95,654,
95,656,
95,657,
95,659,
95,660,
95,661,
95,665,
95,666,
95,669,
95,670,
95,671,
95,673,
95,680,
95,681,
95,682,
95,683,
95,685,
95,686,
95,689,
95,690,
95,691,
95,692,
95,693,
95,697,
95,698,
95,701,
95,702,
95,703,
95,705,
95,712,
95,715,
95,717,
95,718,
95,719,
95,721,
95,722,
95,724,
95,725,
95,726,
95,728,
95,732,
95,733,
95,736,
95,737,
95,738,
95,740,
95,747,
95,750,
95,752,
95,753,
95,754,
95,756,
95,757,
95,759,
95,760,
95,761,
95,763,
95,767,
95,768,
95,771,
95,772,
95,773,
95,775,
95,782,
95,785,
95,786,
95,787,
95,789,
95,790,
95,792,
95,793,
95,795,
95,796,
95,798,
95,803,
95,804,
95,807,
95,808,
95,809,
95,811,
95,818,
95,821,
95,822,
95,823,
95,825,
95,827,
95,828,
95,833,
95,834,
95,837,
95,839,
95,846,
95,850,
95,851,
95,852,
95,854,
95,855,
95,857,
95,860,
95,864,
95,865,
95,870,
95,871,
95,874,
95,875,
95,876,
95,878,
95,885,
95,889,
95,890,
95,891,
95,893,
95,894,
95,896,
95,899,
95,903,
95,904,
95,909,
95,910,
95,913,
95,914,
95,915,
95,917,
95,924,
95,928,
95,929,
95,931,
95,932,
95,934,
95,935,
95,936,
95,938,
95,942,
95,943,
95,946,
95,947,
95,948,
95,950,
95,956,
95,963,
95,964,
95,965,
95,966,
95,968,
95,971,
95,972,
95,973,
95,975,
95,977,
95,978,
95,979,
95,981,
95,986,
95,987,
95,988,
95,990,
95,991,
95,995,
95,996,
95,1000,
95,1001,
95,1004,
95,1006,
95,1007,
95,1008,
95,1009,
95,1010,
95,1017,
95,1023,
95,1024,
95,1025,
95,1026,
95,1028,
95,1030,
95,1032,
95,1033,
95,1034,
96,120,
96,121,
96,157,
96,200,
96,201,
96,207,
96,211,
96,216,
96,220,
96,224,
96,227,
96,296,
96,303,
96,464,
96,465,
96,468,
96,469,
96,475,
104,49,
104,52,
104,54,
104,55,
104,63,
104,64,
104,66,
104,67,
104,68,
104,70,
104,71,
104,72,
104,73,
104,74,
104,86,
104,87,
104,88,
104,95,
104,96,
104,97,
104,99,
104,100,
104,102,
104,103,
104,106,
104,107,
104,108,
104,111,
104,114,
104,117,
104,119,
104,122,
104,129,
104,130,
104,131,
104,133,
104,136,
104,139,
104,141,
104,142,
104,143,
104,144,
104,145,
104,146,
104,147,
104,148,
104,152,
104,154,
104,155,
104,159,
104,160,
104,163,
104,166,
104,167,
104,169,
104,170,
104,172,
104,179,
104,180,
104,181,
104,182,
104,186,
104,194,
104,196,
104,198,
104,205,
104,206,
104,207,
104,208,
104,210,
104,212,
104,213,
104,214,
104,215,
104,220,
104,222,
104,223,
104,226,
104,229,
104,231,
104,232,
104,233,
104,235,
104,237,
104,238,
104,244,
104,245,
104,246,
104,247,
104,248,
104,251,
104,252,
104,254,
104,255,
104,259,
104,260,
104,264,
104,266,
104,267,
104,268,
104,270,
104,271,
104,272,
104,274,
104,275,
104,277,
104,278,
104,279,
104,281,
104,283,
104,288,
104,290,
104,294,
104,295,
104,296,
104,297,
104,298,
104,299,
104,302,
104,303,
104,304,
104,308,
104,310,
104,311,
104,312,
104,315,
104,318,
104,323,
104,324,
104,326,
104,331,
104,333,
104,334,
104,335,
104,337,
104,342,
104,343,
104,346,
104,347,
104,350,
104,351,
104,354,
104,357,
104,364,
104,365,
104,366,
104,367,
104,369,
104,371,
104,372,
104,373,
104,374,
104,378,
104,379,
104,380,
104,381,
104,383,
104,384,
104,386,
104,388,
104,389,
104,390,
104,399,
104,404,
104,405,
104,406,
104,407,
104,408,
104,410,
104,411,
104,412,
104,413,
104,416,
104,423,
104,424,
104,425,
104,426,
104,427,
104,429,
104,431,
104,432,
104,433,
104,435,
104,437,
104,440,
104,442,
104,443,
104,448,
104,451,
104,452,
104,455,
104,460,
104,461,
104,462,
104,464,
104,465,
104,467,
104,472,
104,473,
104,475,
104,476,
104,480,
104,487,
104,489,
104,490,
104,491,
104,493,
104,494,
104,500,
104,501,
104,503,
104,504,
104,505,
104,506,
104,509,
104,510,
104,511,
104,514,
104,515,
104,518,
104,521,
104,522,
104,525,
104,527,
104,528,
104,529,
104,532,
104,534,
104,535,
104,536,
104,539,
104,543,
104,550,
104,552,
104,553,
104,555,
104,557,
104,558,
104,559,
104,560,
104,562,
104,564,
104,566,
104,567,
104,568,
104,569,
104,575,
104,576,
104,578,
104,582,
104,583,
104,585,
104,586,
104,587,
104,589,
104,590,
104,595,
104,596,
104,598,
104,600,
104,601,
104,603,
104,604,
104,606,
104,607,
104,608,
104,609,
104,611,
104,614,
104,616,
104,617,
104,619,
104,624,
104,625,
104,629,
104,631,
104,638,
104,639,
104,643,
104,644,
104,648,
104,649,
104,652,
104,653,
104,655,
104,656,
104,658,
104,659,
104,660,
104,663,
104,665,
104,666,
104,668,
104,669,
104,671,
104,674,
104,677,
104,678,
104,685,
104,686,
104,688,
104,689,
104,690,
104,700,
104,701,
104,704,
104,714,
104,715,
104,716,
104,717,
104,718,
104,719,
104,721,
104,722,
104,723,
104,729,
104,733,
104,734,
104,741,
104,742,
104,743,
104,745,
104,746,
104,748,
104,749,
104,752,
104,753,
104,755,
104,756,
104,758,
104,759,
104,763,
104,774,
104,775,
104,776,
104,779,
104,780,
104,782,
104,789,
104,790,
104,791,
104,793,
104,794,
104,796,
104,797,
104,798,
104,799,
104,800,
104,801,
104,802,
104,805,
104,814,
104,815,
104,816,
104,822,
104,825,
104,833,
104,835,
104,836,
104,838,
104,839,
104,840,
104,844,
104,850,
104,851,
104,852,
104,853,
104,855,
104,857,
104,858,
104,860,
104,861,
104,862,
104,865,
104,866,
104,868,
104,869,
104,870,
104,876,
104,882,
104,883,
104,884,
104,887,
104,894,
104,897,
104,898,
104,900,
104,901,
104,902,
104,904,
104,911,
104,912,
104,914,
104,915,
104,916,
104,918,
104,921,
104,923,
104,926,
104,928,
104,930,
104,932,
104,938,
104,942,
104,943,
104,944,
104,946,
104,947,
104,948,
104,949,
104,952,
104,953,
104,957,
104,958,
104,960,
0};
static int __CvT__instrumented_lines___[]={
5,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
61,
173,
0,
0,
0,
2,
0,
10,
5,
0,
0,
0,
0,
0,
22,
0,
0,
0,
0,
0,
0,
0,
14,
0,
16,
5,
1,
0,
0,
8,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
0,
26,
0,
62,
10,
0,
246,
15,
0,
72,
5,
0,
0,
0,
0,
0,
0,
0,
0,
454,
67,
33,
0,
127,
31,
81,
97,
48,
36,
154,
0,
0,
0,
95,
13,
515,
63,
54,
131,
484,
18,
0,
0,
0,
0,
0,
0,
0,
415,
0,
0};
static __CvT__module_info____
__CvT_miTBODY(
              __CvT__file_name____,
              sizeof(__CvT__file_name____)/sizeof(char*) -1,
              __CvT__logged_lines___,
              (sizeof(__CvT__logged_lines___)/sizeof(int) -1) / 2
              ,__CvT__instrumented_lines___);
static __CvT__module_info____* __CvT_miTINIT = __CvT_miT = &__CvT_miTBODY;
