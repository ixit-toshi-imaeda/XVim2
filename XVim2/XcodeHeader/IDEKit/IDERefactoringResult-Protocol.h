//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTFilePath, NSArray, NSString;

@protocol IDERefactoringResult <NSObject>
- (NSString *)resultNewFileName;
- (DVTFilePath *)resultTempFilePath;
- (DVTFilePath *)resultFilePath;
- (BOOL)resultIsEditable;

@optional
- (NSArray *)resultReferencedFiles;
@end

