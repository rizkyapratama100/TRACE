from pkgutil import extend_path
__path__ = extend_path(__path__, __name__)
import sys
import os
sys.path.append(os.getcwd() + "/trick.zip/trick")

import _sim_services
from sim_services import *

# create "all_cvars" to hold all global/static vars
all_cvars = new_cvar_list()
combine_cvars(all_cvars, cvar)
cvar = None

# /home/rizky-ubuntu/TRACE/SIM_TRACE/S_source.hh
import _m181f40f22510dfe97733d5bf05fda032
combine_cvars(all_cvars, cvar)
cvar = None

# /home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball.h
import _m99523ff1a540d552c47712a194727d6b
combine_cvars(all_cvars, cvar)
cvar = None

# /home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball_numeric.h
import _me72287aa13591e6a424dbbeb9127ca3c
combine_cvars(all_cvars, cvar)
cvar = None

# /home/rizky-ubuntu/TRACE/SIM_TRACE/S_source.hh
from m181f40f22510dfe97733d5bf05fda032 import *
# /home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball.h
from m99523ff1a540d552c47712a194727d6b import *
# /home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball_numeric.h
from me72287aa13591e6a424dbbeb9127ca3c import *

# S_source.hh
import _m181f40f22510dfe97733d5bf05fda032
from m181f40f22510dfe97733d5bf05fda032 import *

import _top
import top

import _swig_double
import swig_double

import _swig_int
import swig_int

import _swig_ref
import swig_ref

from shortcuts import *

from exception import *

cvar = all_cvars

