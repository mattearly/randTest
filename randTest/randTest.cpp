/*
randTest
----------------------------------------------------------------------
Copyright (c) 2019-2020, Matthew Early matthewjearly@gmail.com
All rights reserved.
Redistribution and use of this software in source and binary forms,
with or without modification, are permitted provided that the
following conditions are met:
* Redistributions of source code must retain the above
  copyright notice, this list of conditions and the
  following disclaimer.
* Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the
  following disclaimer in the documentation and/or other
  materials provided with the distribution.
* Neither the name of the Matthew Early, nor the names of its
  contributors may be used to endorse or promote products
  derived from this software without specific prior
  written permission from Matthew Early.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
----------------------------------------------------------------------
*/
#include "pch.h"
#include "CppUnitTest.h"
#include <rand.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace randTest
{
TEST_CLASS(randTest)
{
public:

  TEST_METHOD(LowNTKRInt)
  {
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(1, 2), NTKR(3, 4));
    }	
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(5, 6), NTKR(7, 8));
    }		
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(9, 10), NTKR(11, 12));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(13, 14), NTKR(15, 16));
    }
  }

  TEST_METHOD(HighNTKRInt)
  {
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(45678, 45679), NTKR(45680, 45681));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(98765, 98766), NTKR(98767, 987658));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(987610, 987611), NTKR(987612, 9876513));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(2341867, 2341868), NTKR(2341869, 2341870));
    }
  }
  
  TEST_METHOD(LowNTKRFloat)
  {
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(1.f, 2.f), NTKR(3.f, 4.f));
    }	
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(5.f, 6.f), NTKR(7.f, 8.f));
    }		
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(9.f, 10.f), NTKR(11.f, 12.f));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(13.f, 14.f), NTKR(15.f, 16.f));
    }
  }

  TEST_METHOD(HighNTKRFloat)
  {
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(45678.f, 45679.f), NTKR(45680.f, 45681.f));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(98765.f, 98766.f), NTKR(98767.f, 987658.f));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(987610.f, 987611.f), NTKR(987612.f, 9876513.f));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(2341867.f, 2341868.f), NTKR(2341869.f, 2341870.f));
    }
  }

  TEST_METHOD(LowNTKRDouble)
  {
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(1.0, 2.0), NTKR(3.0, 4.0));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(5.0, 6.0), NTKR(7.0, 8.0));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(9.0, 10.0), NTKR(11.0, 12.0));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(13.0, 14.0), NTKR(15.0, 16.0));
    }
  }

  TEST_METHOD(HighNTKRDouble)
  {
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(45678.0, 45679.0), NTKR(45680.0, 45681.0));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(98765.0, 98766.0), NTKR(98767.0, 987658.0));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(987610.0, 987611.0), NTKR(987612.0, 9876513.0));
    }
    for (int i = 0; i < 50; ++i) {
      Assert::AreNotEqual(NTKR(2341867.0, 2341868.0), NTKR(2341869.0, 2341870.0));
    }
  }

  TEST_METHOD(ZeroOrOneRandomIntTest)
  {
    int matches = 0;
    for (int i = 0; i < 50; ++i)
    {
      if (ZOOR() == 0)
      {
        ++matches;
      }
    }
    // make sure it wasn't all matches or all not matches
    Assert::AreNotEqual(matches, 0); 
    Assert::AreNotEqual(matches, 50);
  } 
  
  TEST_METHOD(ZeroToOneRandomFloatTest)
  {
    int low = 0;
    int high = 0;
    for (int i = 0; i < 50; ++i)
    {
      if (ZTORf() < .49999f)
      {
        ++low;
      }
      else
      {
        ++high;
      }
    }
    // make sure it wasn't all one sided and was actually random
    Assert::AreNotEqual(low, 0);  
    Assert::AreNotEqual(low, 50);
    Assert::AreNotEqual(high, 0);  
    Assert::AreNotEqual(high, 50);
  }  
  
  TEST_METHOD(ZeroToOneRandomDoubleTest)
  {
    int low = 0;
    int high = 0;
    for (int i = 0; i < 50; ++i)
    {
      if (ZTOR() < .49999)
      {
        ++low;
      }
      else
      {
        ++high;
      }
    }
    // make sure it wasn't all one sided and was actually random
    Assert::AreNotEqual(low, 0);  
    Assert::AreNotEqual(low, 50);
    Assert::AreNotEqual(high, 0);  
    Assert::AreNotEqual(high, 50);
  }

};
}
