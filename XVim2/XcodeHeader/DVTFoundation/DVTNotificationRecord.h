//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSString;

@interface DVTNotificationRecord : NSObject
{
    BOOL _wasWildcardObservee;
    id _observee;
    NSString *_name;
    DVTStackBacktrace *_backtrace;
}

- (void).cxx_destruct;
@property(readonly) DVTStackBacktrace *backtrace; // @synthesize backtrace=_backtrace;
@property(readonly) NSString *name; // @synthesize name=_name;
- (BOOL)isDangling;
@property(readonly) id observee;
- (id)initWithObservee:(id)arg1 name:(id)arg2;

@end

