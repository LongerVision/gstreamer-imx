/* G2D allocation functions for physical memory
 * Copyright (C) 2014  Carlos Rafael Giani
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#ifndef GST_IMX_G2D_ALLOCATOR_H
#define GST_IMX_G2D_ALLOCATOR_H

#include <gst/gst.h>
#include "../common/phys_mem_allocator.h"


G_BEGIN_DECLS


typedef struct _GstImxG2DAllocator GstImxG2DAllocator;
typedef struct _GstImxG2DAllocatorClass GstImxG2DAllocatorClass;


#define GST_TYPE_IMX_G2D_ALLOCATOR             (gst_imx_g2d_allocator_get_type())
#define GST_IMX_G2D_ALLOCATOR(obj)             (G_TYPE_CHECK_INSTANCE_CAST((obj), GST_TYPE_IMX_G2D_ALLOCATOR, GstImxG2DAllocator))
#define GST_IMX_G2D_ALLOCATOR_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST((klass), GST_TYPE_IMX_G2D_ALLOCATOR, GstImxG2DAllocatorClass))
#define GST_IS_IMX_G2D_ALLOCATOR(obj)          (G_TYPE_CHECK_INSTANCE_TYPE((obj), GST_TYPE_IMX_G2D_ALLOCATOR))
#define GST_IS_IMX_G2D_ALLOCATOR_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE((klass), GST_TYPE_IMX_G2D_ALLOCATOR))

#define GST_IMX_G2D_ALLOCATOR_MEM_TYPE "ImxG2DMemory"


struct _GstImxG2DAllocator
{
	GstImxPhysMemAllocator parent;
};


struct _GstImxG2DAllocatorClass
{
	GstImxPhysMemAllocatorClass parent_class;
};


GType gst_imx_g2d_allocator_get_type(void);
GstAllocator* gst_imx_g2d_allocator_new(void);


G_END_DECLS


#endif
