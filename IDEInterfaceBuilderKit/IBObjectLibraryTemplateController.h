/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTExtension, DVTStackBacktrace, NSMutableArray, NSString;

@interface IBObjectLibraryTemplateController : NSObject <DVTInvalidation>
{
    NSMutableArray *_templates;
    DVTExtension *_extension;
}

+ (void)initialize;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)addTemplate:(id)arg1;
- (BOOL)shouldIncludeTemplate:(id)arg1;
- (id)nibLoadingBundleForTemplate:(id)arg1;
- (void)document:(id)arg1 didAddDraggedObjects:(id)arg2 fromDraggedObjectLibraryTemplate:(id)arg3;
- (id)pasteboardObjectsForTemplate:(id)arg1;
- (BOOL)dataForTemplateRequiresUserInteraction:(id)arg1;
@property(readonly) NSString *librarySourceTitle; // @dynamic librarySourceTitle;
@property(readonly) NSString *librarySourceIdentifier; // @dynamic librarySourceIdentifier;
- (id)libraryNibNames;
- (void)primitiveInvalidate;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
