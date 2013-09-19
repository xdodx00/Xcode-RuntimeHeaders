/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXProjectModule.h>

@class NSTextView, NSView, PBXWidgetGroup;

@interface PBXSettingsModule : PBXProjectModule
{
    PBXWidgetGroup *_widgetGroup;
    NSTextView *_bindingsPlistTextView;
    NSView *_subviewToAutosize;
    double _viewHeightSansSubviewToAutosize;
    BOOL _listeningForTextFrameChanged;
    BOOL _currentlyResizingModuleView;
    unsigned long long _moduleViewAutoresizeDisableCount;
    void *_reserved3;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)isNonJavaSettings;
- (BOOL)isJavaSettings;
- (void)willBeDeleted;
- (BOOL)canBeDeleted;
- (void)update;
- (void)autoresizeTextViewFrameDidChange:(id)arg1;
- (void)autoresizeTextViewContentsDidChange:(id)arg1;
- (void)resizeModuleViewVerticallyIfNeeded;
- (BOOL)isModuleViewAutoresizingEnabled;
- (void)enableModuleViewAutoresizing;
- (void)disableModuleViewAutoresizing;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (id)widgetGroup;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_stopListeningForTextFrameChanged;
- (void)_startListeningForTextFrameChangedIfNeeded;
- (id)init;

@end
