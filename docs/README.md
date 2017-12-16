# CSCI780 Advanced Topics: Computer Graphics

## Homework 2

Name: Yongsen Ma, Email: yma@cs.wm.edu

### References

This homework implements the `Smooth Surface` and `Microfacet` BRDF models in the paper by [Löw *et al*] using the mitsuba render system.

1. Mitsuba. Physically Based Renderer. [mitsuba-renderer.org](https://www.mitsuba-renderer.org)
2. Joakim Löw, Joel Kronander, Anders Ynnerman, and Jonas Unger. 2012. BRDF models for accurate and efficient rendering of glossy surfaces. ACM Trans. Graph. 31, 1, Article 9 (February 2012), 14 pages. DOI=http://dx.doi.org/10.1145/2077341.2077350

### Folder Structure Summary

Some folders and files are not listed.
```
mitsuba
|	README.md
|	CMakeList.txt
|	smoothsurface.cpp
|	microfacet.cpp
|	...
|---scenes
	|	grace.exr
	|	sphere_mf_chrome.xml
	|	sphere_ss_chrome.xml
	|	...
	|---merlmit

```

### Add new BRDF models (based on the assignment description)
1. Copy or write the new BRDF model in the root folder, *e.g.*, `smoothsurface.cpp`.
2. Add the new BRDF model to `CMakeList.txt`, *e.g.*, adding the following two lines to `CMakeList.txt`.
```
# add a new BRDF model
add_bsdf(smoothsurface smoothsurface.cpp)
```
3. Run `cmake .` and `make` in the root folder to compile the new BRDF model.

### Run the new BRDF model
1. Change BRDF parameters by modifying the `*.xml` file in the `~/scenes` folder.
  - Change the BRDF model and type of the `xml` file. For example,
  ```
	<bsdf type="smoothsurvace" id="alum-bronze-smooth-surface">
	...
	</bsdf>
	<shape type="sphere">
	<float name="radius" value="1"/>
	<ref id="alum-bronze-smooth-surface"/>
	</shape>
  ```
  - Set the BRDF parameters. [Low et al](http://dl.acm.org/citation.cfm?id=2077350)
    * `m_difusseReflectance`: diffuse factor, RGB values.
    * `m_A`: A for the S function, RGB values.
    * `m_B`: B for the S function, float value.
    * `m_C`: C for the S function, float value.
    * `m_F0`: Fresnel factor, float value.

2. Change other settings if necessary. For example, change the angle of the view direction to -225.
```
-<transform name="toWorld">
<rotate y="1" angle="-225"/>
</transform>
```
3. Run the code in the root folder
```
./binaries/mitsuba ./scenes/sphere_XX_YYY.xml
```
`XX` represnets `mf` (Microfacet) or `sf` (Smooth Surface), and `YYY` is the name of the material, *e.g.*, `chrome` or `alum_bronze`. The result of `sphere_XX_YYY.exr` will be in the folder `./scenes` after about 30 seconds or 1 minute.
