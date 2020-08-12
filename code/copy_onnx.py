import onnx

onnx_model = onnx.load('00179_RP.onnx')
onnx.save(onnx_model, 'model_mod.onnx')
