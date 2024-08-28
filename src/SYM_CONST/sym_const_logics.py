# *** Example functions to use to enable or disable specific test cases with logics ***
#
# Each function in this file is called a "logic" and must return a boolean value.
# Uncomment functions to try them out, or write your own.
#
#
# *** Examples ***
# Test cases assigned to this logic are enabled, and permitted to run.
#def enable_testcase():
#    return True
#
# Test cases assigned to this logic are disabled, and therefore not permitted to run.
#def disable_testcase():
#    return False
#
# A logic function can use any item in the Symbolic Constants table but must be
# referenced using a dictionary.
# A Logic function that takes a parameter will automatically have the dictionary passed
# in as the argument. This dictionary allows it to access the items in the Symbolic 
# Constants table: macros from source code, #defines from the configuration file, 
# items from a test data dictionary, or #defines from a vcshell database.
#
# Test cases assigned to this logic are enabled if the value of SOME_CONST is 1
# and disabled otherwise.
#def calculate_using_symbolic_const(symbolic_constants_container):
#    return symbolic_constants_container["SOME_CONST"] == 1
#
# A logic function can also use any active environment variable by doing the
# following:
#def calculate_using_env_var():
#    return logic_utils.getenv("SOME_ENV_VAR") == "1"
#
# A logic function can also use a combination of environment variables and
# symbolic constants:
#def calculate_using_env_var_and_symbolic_const(symbolic_constants_container):
#    valid_sym_const = symbolic_constants_container["SOME_CONST"] == 3.03
#    valid_env_var = logic_utils.getenv("SOME_ENV_VAR") == "1"
#    return valid_sym_const and valid_env_var
def disable_testcase():
    return False
def COMMON():
  return True
def CAL_OEM1(symbolic_constants_container):
  return symbolic_constants_container["dataSet"] == "OEM1"
def CAL_OEM2(symbolic_constants_container):
  return symbolic_constants_container["dataSet"] == "OEM2"
