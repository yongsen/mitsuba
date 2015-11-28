# CSCI780 Advanced Topics: Computer Graphics

## Homework 2

Name: Yongsen Ma, Email: yma@cs.wm.edu

### References

This homework implements the `Smooth Surface` and `Microfacet` BRDF models in the paper by [Löw *et al*] using the mitsuba render system.

1. Mitsuba. Physically Based Renderer. [mitsuba-renderer.org](https://www.mitsuba-renderer.org)
2. Joakim Löw, Joel Kronander, Anders Ynnerman, and Jonas Unger. 2012. BRDF models for accurate and efficient rendering of glossy surfaces. ACM Trans. Graph. 31, 1, Article 9 (February 2012), 14 pages. DOI=http://dx.doi.org/10.1145/2077341.2077350

### Adding new BRDF models
1. Copy or write the new BRDF model in the root folder, *e.g.*, `smoothsurface.cpp`.
2. Add the new BRDF model to `CMakeList.txt`, *e.g.*, adding the following two lines to `CMakeList.txt`.
```
# add a new BRDF model
add_bsdf(smoothsurface smoothsurface.cpp)
```
3. Run `cmake .` and `make` in the root folder to compile the new BRDF model.

### Run the new BRDF model
1. Modify the `*.xml` file in the `~/scenes` folder.
  - Change the BRDF model and type.
  - Set the BRDF parameters. [Low et al](http://dl.acm.org/citation.cfm?id=2077350)
    * `m_difusseReflectance`: diffuse factor, RGB values.
    * `m_A`: A for the S function, RGB values.
    * `m_B`: B for the S function, float value.
    * `m_C`: C for the S function, float value.
    * `m_F0`: Fresnel factor, float value.
