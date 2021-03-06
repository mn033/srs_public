/******************************************************************************
 * \file
 *
 * $Id: polygonization.h 693 2012-04-20 09:22:39Z ihulik $
 *
 * Copyright (C) Brno University of Technology
 *
 * This file is part of software developed by dcgm-robotics@FIT group.
 *
 * Author: Rostislav Hulik (ihulik@fit.vutbr.cz)
 * Supervised by: Michal Spanel (spanel@fit.vutbr.cz)
 * Date: 11.01.2012 (version 1.0)
 * 
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * Description:
 *	 Class encapsulating region transformation into poly representation
 */

#pragma once
#ifndef BUT_PLANE_DET_POLYGONIZATION_H
#define BUT_PLANE_DET_POLYGONIZATION_H

// Opencv 2
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc_c.h>

// rROS
#include <sensor_msgs/CameraInfo.h>


namespace srs_env_model_percp
{
	/**
	 * Class encapsulating region transformation into poly representation
	 * IN CONSTRUCTION, TODO
	 */
	class Polygonizer
	{
		public:
			/**
			 * TODO
			 */
			void GetPolyRegions(cv::Mat &regionImage);
	};
} // but_plane_detector
#endif
