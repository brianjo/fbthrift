#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from __future__ import absolute_import
import six
from thrift.util.Recursive import fix_spec
from thrift.Thrift import *
from thrift.protocol.TProtocol import TProtocolException


from .ttypes import *

myInt = 1337

name = 'Mark Zuckerberg'

states = [
  {
    'San Diego' : 3211000,
    'Sacramento' : 479600,
    'SF' : 837400,
  },
  {
    'New York' : 8406000,
    'Albany' : 98400,
  },
]

instagram = Internship(**{
  'weeks' : 12,
  'title' : 'Software Engineer',
  'employer' :   3,
})

internList = [
  Internship(**{
    'weeks' : 12,
    'title' : 'Software Engineer',
    'employer' :     3,
  }),
  Internship(**{
    'weeks' : 10,
    'title' : 'Sales Intern',
    'employer' :     0,
  }),
]

apostrophe = '''

tripleApostrophe = '''''

quotationMark = '"'

backslash = '\'

char2ascii = {
  ''' : 39,
  '"' : 34,
  '\' : 92,
}

