/*
 * Copyright (c) 2014 - Adjacent Link LLC, Bridgewater, New Jersey
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 * * Neither the name of Adjacent Link LLC nor the names of its
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef EMANECONTROLSR2RIQUEUEMETRICCONTROLMESSAGEFORMATTER_HEADER_
#define EMANECONTROLSR2RIQUEUEMETRICCONTROLMESSAGEFORMATTER_HEADER_

#include "emane/controls/r2riqueuemetriccontrolmessage.h"

namespace EMANE
{
  namespace Controls
  {
    /**
     * @class R2RIQueueMetricControlMessageFormatter
     *
     * @brief Callable formatter object for R2RIQueueMetricControlMessage
     * instances.
     */
    class R2RIQueueMetricControlMessageFormatter
    {
    public:
      /**
       * Creates a R2RIQueueMetricControlMessageFormatter instance
       *
       * @param pMsg Borrowed message reference
       */
      R2RIQueueMetricControlMessageFormatter(const R2RIQueueMetricControlMessage * pMsg);
      
      /**
       * Gets the formatted output
       *
       * @return list of output strings
       */
      Strings operator()() const;
      
    private:
      const R2RIQueueMetricControlMessage * pMsg_;
    };
  }
}

#endif // EMANECONTROLSR2RIQUEUEMETRICCONTROLMESSAGEFORMATTER_HEADER_
