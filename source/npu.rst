.. _sec-gpu:

NPU compiler
============

.. contents::
   :local:
   :depth: 4


NPU compiler reference
----------------------

https://arxiv.org/pdf/2002.03794.pdf

Tensorflow support unknown shape [#tfunknownshape]_.
Though our npu support kernel call where kernel call is a set of 
commands to npu to deal shape at run time, it is unefficiency. 
As I remember mlit supports binding shape for unknown at compile-time
but not always work.
Lukily, we can customilze by redefining model to binding shape staticlly [20200412].  

[#tfunknownshape] https://pgaleone.eu/tensorflow/2018/07/28/understanding-tensorflow-tensors-shape-static-dynamic/

