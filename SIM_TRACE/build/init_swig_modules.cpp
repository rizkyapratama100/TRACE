#include <Python.h>
#if PY_VERSION_HEX >= 0x03000000
extern "C" {

PyObject * PyInit__m181f40f22510dfe97733d5bf05fda032(void) ; /* /home/rizky-ubuntu/TRACE/SIM_TRACE/S_source.hh */
PyObject * PyInit__m99523ff1a540d552c47712a194727d6b(void) ; /* /home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball.h */
PyObject * PyInit__me72287aa13591e6a424dbbeb9127ca3c(void) ; /* /home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball_numeric.h */
PyObject * PyInit__sim_services(void) ;
PyObject * PyInit__top(void) ;
PyObject * PyInit__swig_double(void) ;
PyObject * PyInit__swig_int(void) ;
PyObject * PyInit__swig_ref(void) ;

void init_swig_modules(void) {

    PyImport_AppendInittab("_m99523ff1a540d552c47712a194727d6b", PyInit__m99523ff1a540d552c47712a194727d6b) ;
    PyImport_AppendInittab("_me72287aa13591e6a424dbbeb9127ca3c", PyInit__me72287aa13591e6a424dbbeb9127ca3c) ;
    PyImport_AppendInittab("_m181f40f22510dfe97733d5bf05fda032", PyInit__m181f40f22510dfe97733d5bf05fda032) ;
    PyImport_AppendInittab("_sim_services", PyInit__sim_services) ;
    PyImport_AppendInittab("_top", PyInit__top) ;
    PyImport_AppendInittab("_swig_double", PyInit__swig_double) ;
    PyImport_AppendInittab("_swig_int", PyInit__swig_int) ;
    PyImport_AppendInittab("_swig_ref", PyInit__swig_ref) ;
    return ;
}

}
#else
extern "C" {

void init_m181f40f22510dfe97733d5bf05fda032(void) ; /* /home/rizky-ubuntu/TRACE/SIM_TRACE/S_source.hh */
void init_m99523ff1a540d552c47712a194727d6b(void) ; /* /home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball.h */
void init_me72287aa13591e6a424dbbeb9127ca3c(void) ; /* /home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball_numeric.h */
void init_sim_services(void) ;
void init_top(void) ;
void init_swig_double(void) ;
void init_swig_int(void) ;
void init_swig_ref(void) ;

void init_swig_modules(void) {

    init_m99523ff1a540d552c47712a194727d6b() ;
    init_me72287aa13591e6a424dbbeb9127ca3c() ;
    init_m181f40f22510dfe97733d5bf05fda032() ;
    init_sim_services() ;
    init_top() ;
    init_swig_double() ;
    init_swig_int() ;
    init_swig_ref() ;
    return ;
}

}
#endif
