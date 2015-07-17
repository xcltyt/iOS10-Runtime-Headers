/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageSobel : MPSUnaryImageKernel

- (long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const struct { struct MIPixelInfo {} *x1; struct MIPixelInfo {} *x2; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_3_1_2; } x3; }*)arg5;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })sourceRegionForDestinationSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;

@end