# Software Rasterizer/Renderer

To better understand the nitty gritty details of the [Graphics Pipeline](https://en.wikipedia.org/wiki/Graphics_pipeline) I decided to build my own _software_ renderer/rasterizer as a hobby project.

**Rasterization** is simply a rendering method used to map an image described in vector graphics to a raster image. **A rasterizer** is then a program that takes, as an input, an image described as triangle vertices and converts them into the corresponding pixels that the triangle would cover on a computer display. Rasterization is one of the main stages of the Graphics Pipeine.

The application is written entirely in C++ and apart from window management with SDL2 should run entirely on the CPU. The application can load vertex arrays described as .obj files, parse them and rasterize them to an output surface. It has many standard rendering features such as backfacing and view-frustum culling and there is also a hierarchical Z-buffer to ensure drawing triangles in the correct order. The renderer additionally supports some nice to have features such as per vertex attributes and interpolation, user programmable vertex & fragment shaders as well as camera controls. In terms of graphical effects it supports phong shading with point light support as well as a basic shadow mapping method.


While developing I used 3 main resources: Trenki's excellent blog post on [developing a software renderer](https://trenki2.github.io/blog/2017/06/06/developing-a-software-renderer-part1/), JavidX9's Youtube series [Code-It-Yourself! 3D Graphics Engine](https://www.youtube.com/watch?v=ih20l3pJoeU), and many chapters of the online book [Scratchapixel](https://www.scratchapixel.com/index.php?redirect). When writing the code, I tried to closely follow the concepts of the graphics pipeline so that the application would behave in a similar manner to a GPU accelerated Graphics API.

To see how it works, have a look
