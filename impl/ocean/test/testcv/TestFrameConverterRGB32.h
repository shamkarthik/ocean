/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef META_OCEAN_TEST_TESTCV_TEST_FRAME_CONVERTER_RGB_32_H
#define META_OCEAN_TEST_TESTCV_TEST_FRAME_CONVERTER_RGB_32_H

#include "ocean/test/testcv/TestCV.h"
#include "ocean/test/testcv/FrameConverterTestUtilities.h"

#include "ocean/base/Worker.h"

#include "ocean/cv/FrameConverter.h"

namespace Ocean
{

namespace Test
{

namespace TestCV
{

/**
 * This class implements a RGB32 frame converter test.
 * @ingroup testcv
 */
class OCEAN_TEST_CV_EXPORT TestFrameConverterRGB32
{
	public:

		/**
		 * Tests all RGB 32 bit frame conversion functions.
		 * @param width The width of the original frame in pixel, with range [1, infinity)
		 * @param height The height of the original frame in pixel, with range [1, infinity)
		 * @param testDuration Number of seconds for each test, with range (0, infinity)
		 * @param worker The worker object to distribute the computation
		 * @return True, if succeeded
		 */
		static bool test(const unsigned int width, const unsigned int height, const double testDuration, Worker& worker);

		/**
		 * Tests RGB32 to RGB24 conversion.
		 * @param width The width of the original frame in pixel, with range [1, infinity)
		 * @param height The height of the original frame in pixel, with range [1, infinity)
		 * @param flag The conversion flag that has been applied during conversion
		 * @param testDuration Number of seconds for each test, with range (0, infinity)
		 * @param worker The worker object to distribute the computation
		 * @return True, if succeeded
		 */
		static bool testRGB32ToRGB24(const unsigned int width, const unsigned int height, const CV::FrameConverter::ConversionFlag flag, const double testDuration, Worker& worker);

		/**
		 * Tests RGB32 to RGBA32 conversion.
		 * @param width The width of the original frame in pixel, with range [1, infinity)
		 * @param height The height of the original frame in pixel, with range [1, infinity)
		 * @param flag The conversion flag that has been applied during conversion
		 * @param testDuration Number of seconds for each test, with range (0, infinity)
		 * @param worker The worker object to distribute the computation
		 * @return True, if succeeded
		 */
		static bool testRGB32ToRGBA32(const unsigned int width, const unsigned int height, const CV::FrameConverter::ConversionFlag flag, const double testDuration, Worker& worker);
};

}

}

}

#endif // META_OCEAN_TEST_TESTCV_TEST_FRAME_CONVERTER_RGB_32_H
