/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSString, SKUniform;

@interface SKShaderAttribute : NSObject <NSCoding>
{
    NSString *_uniformName;
    SKUniform *_uniform;
}

@property(retain, nonatomic) SKUniform *uniform; // @synthesize uniform=_uniform;
@property(retain, nonatomic) NSString *uniformName; // @synthesize uniformName=_uniformName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
