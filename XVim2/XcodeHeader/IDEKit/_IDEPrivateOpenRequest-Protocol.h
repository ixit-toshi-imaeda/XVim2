//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEOpenRequest-Protocol.h>

@class IDEEditorContext;

@protocol _IDEPrivateOpenRequest <IDEOpenRequest>
@property __weak IDEEditorContext *targetEditorContext;
- (void)addPostNavigationBlock:(void (^)(BOOL, BOOL))arg1;
@end

