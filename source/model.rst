.. _sec-model:

Deep learning model
===================

.. contents::
   :local:
   :depth: 4

AI
--

Hung-Yi Lee's video [#HungYiLee]_.

CNN
----

CNN: They have applications in image and video recognition, recommender systems, 
image classification, medical image analysis, natural language processing, and 
financial time series [#cnnwiki]_.

Concept about how to apply Convolution and MaxPool to getting features from image [#selectedpattern]_.
Conv+MaxPool -> get features map and downsize image, more Conv+MaxPool can filter image and higher 
level of features and downsize more image. CNN model used in image recognition.

Concept and data applying in Deap Learning for different models of CNN [#onnxmodelzoo]_.

Todo
----

Refine runtime library.

目前run time的部份都是parse setup.bin來進行的,其實整個flow的控制是在NPU端,
比較希望改到cpu控制,有需要才跑npu,有點像gpu knernel call的概念

現在都是用模型才能compile,但是其實本來就是個乘加器,所以應該可以用來做其他
運算加速,只要寫不同的knernel就行了

所以希望做成cpu調度不同的knernel的run time. 如此一來, npu可做非模型運算,
such as GeMM (General Matrix Multiply).

Our compiler can do CNN, but cannot do LSTM, GRU and attention model because they 
need run time to decide how many times of GeMM operation need to be done. 
Current npu interrput cpu cannot finish this, but cpu call npu can do this.

所以用knernel的話,比較可以重複利用weight,還有就是更靈活的控制,這方面你要多研究

你先看看LSTM, GRU and attention model的原理然後給個報告




.. [#HungYiLee] https://www.youtube.com/watch?v=CXgbekl66jc&list=PLJV_el3uVTsPy9oCRY30oBPNLCo89yu49

.. [#selectedpattern] http://violin-tao.blogspot.com/2017/07/ml-convolutional-neural-network-cnn.html

.. [#onnxmodelzoo] https://github.com/onnx/models

.. [#cnnwiki] https://en.wikipedia.org/wiki/Convolutional_neural_network

