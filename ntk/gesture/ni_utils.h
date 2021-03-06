/**
 * Copyright (C) 2013 ManCTL SARL <contact@manctl.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Nicolas Burrus <nicolas.burrus@manctl.com>
 */

#ifndef NTK_GESTURE_NI_UTILS_H
#define NTK_GESTURE_NI_UTILS_H

inline cv::Point3f toPoint3f(const XnPoint3D& p)
{
  return cv::Point3f(p.X, p.Y, p.Z);
}

inline XnPoint3D toXnPoint3D(const cv::Point3f& p)
{
    XnPoint3D xp;
    xp.X = p.x;
    xp.Y = p.y;
    xp.Z = p.z;
    return xp;
}

#endif // NTK_GESTURE_NI_UTILS_H
