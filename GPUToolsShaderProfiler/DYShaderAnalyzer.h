/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DYShaderAnalyzer : NSObject
{
}

+ (BOOL)isDisassemblerAvailable;
+ (BOOL)supportRendererType:(int)arg1;
- (id)analyzeFragmentBinary:(id)arg1;
- (id)analyzeVertexBinary:(id)arg1;
- (id)disassembleBinary:(id)arg1;
- (id)analyzeFragmentBinary:(id)arg1 uscSamples:(id)arg2;
- (id)analyzeVertexBinary:(id)arg1 uscSamples:(id)arg2;

@end

