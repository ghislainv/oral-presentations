




1 Introduction
--------------

1.1 Improving certification methodologies
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

1.1.1 Several criticisms
^^^^^^^^^^^^^^^^^^^^^^^^

- Overselling credits

- Due to leakage

- No additionnality

1.1.2 New approach at the jurisdictional level
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

- Map of the deforestation risk at the jurisdictional level

- Deforestation density: deforestation probability ([0, 1]) :math:`\rightarrow` deforestation density (ha/yr/pixel)

- Can be used to allocate deforestation per project

.. figure:: figs/get_started/allocation.png

    Allocating deforestation to projects within the jurisdiction.

1.2 Allocating deforestation to projects
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

1.2.1 Riskmap at jurisdictional level
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.2.2 Allocating deforestation to projects
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

2 Verra’s tool VT0007 for riskmaps
----------------------------------

2.1 Methodology developed by Clark University
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

2.2 Benchmark model
~~~~~~~~~~~~~~~~~~~

2.2.1 Benchmark model
^^^^^^^^^^^^^^^^^^^^^

2.2.2 Deforestation density
^^^^^^^^^^^^^^^^^^^^^^^^^^^

2.3 Alternative models and validation
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

2.3.1 Alternative models
^^^^^^^^^^^^^^^^^^^^^^^^

2.3.2 Validation
^^^^^^^^^^^^^^^^

2.4 Validation ad time periods
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

2.4.1 Calibration, validation, and historical periods
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

2.4.2 Validation procedure
^^^^^^^^^^^^^^^^^^^^^^^^^^

2.5 Verra/UClark software for V0007
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

2.5.1 Verra/UClark software
^^^^^^^^^^^^^^^^^^^^^^^^^^^

`https://github.com/ClarkCGA/UDef-ARP/tree/v2.09 <https://github.com/ClarkCGA/UDef-ARP/tree/v2.09>`_

- User must provide fcc, distance to forest edge raster, subjurisdictional borders.

- Benchmark model.

- Validation.

2.5.2 Limitations
^^^^^^^^^^^^^^^^^

- Not tool to help prepare the data.

- No tool to develop the alternative model.

- Windows only.

- Require a computer with high RAM for large jurisdiction: all raster inputs are stored in RAM during processing. Therefore, large jurisdictions will require substantial RAM allocations (e.g., 64Gb).

- Several remarks:

3 Software for modelling deforestation
--------------------------------------

3.1 Existing software
~~~~~~~~~~~~~~~~~~~~~

3.1.1 Existing software
^^^^^^^^^^^^^^^^^^^^^^^

- Dinamica EGO, CLUE, TerraSet (Clark U.).

3.2 Limitations
~~~~~~~~~~~~~~~

3.2.1 Limitations
^^^^^^^^^^^^^^^^^

- All are not open source (transparency).

- Difficulty to reproduce the results (transparency, reproducibility).

- Large rasters on large jurisdiction ?

- No scripting: not well adapted to repeat computation.

4 Conclusion
------------

4.1 A not so simple methodology
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

4.1.1 A not so simple methodology
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

4.2 Need for an integrative tool: deforisk QGIS plugin
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

4.2.1 Need for an integrative tool: the deforisk QGIS plugin
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
