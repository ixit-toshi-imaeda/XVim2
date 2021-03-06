//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTMacroExpansionOperator : NSObject
{
}

+ (id)operatorName;
+ (void)initialize;
+ (Class)replacementOperatorClassForOperatorNamed:(id)arg1;
+ (id)registeredReplacementOperatorClasses;
+ (void)registerReplacementOperatorClass:(Class)arg1;
+ (id)replacementOperatorRegistry;
+ (Class)retrievalOperatorClassForOperatorNamed:(id)arg1;
+ (id)registeredRetrievalOperatorClasses;
+ (void)registerRetrievalOperatorClass:(Class)arg1;
+ (id)retrievalOperatorRegistry;
+ (void)registerBuiltInOperators;
- (BOOL)applyToEmptyResult;
- (id)dvt_debugDescription;
- (id)parseError;
- (BOOL)hasParseError;
- (id)stringListByApplyingOperatorToStringList:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;

@end

