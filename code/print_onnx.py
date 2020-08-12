import onnx

onnx_model = onnx.load('00179_RP.onnx')
#onnx.save(onnx_model, 'model_mod.onnx')
print('The model is:\n{}'.format(onnx_model))
print('After shape inference, the shape info of Y is:\n{}'.format(onnx_model.graph.value_info))
