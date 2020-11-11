/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICSQLiteBinding.h>

@class ICSQLiteStatement, NSNumber, NSString;

@interface ICSQLiteQueryResults : NSObject <ICSQLiteBinding> {

	ICSQLiteStatement* _statement;

}

@property (nonatomic,readonly) long long firstInt64Value; 
@property (nonatomic,copy,readonly) NSNumber * firstNumberValue; 
@property (nonatomic,copy,readonly) NSString * firstStringValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bindData:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDouble:(double)arg1 atPosition:(int)arg2 ;
-(NSNumber *)firstNumberValue;
-(void)bindNullAtPosition:(int)arg1 ;
-(long long)firstInt64Value;
-(void)bindInt:(int)arg1 atPosition:(int)arg2 ;
-(void)bindFloat:(float)arg1 atPosition:(int)arg2 ;
-(void)bindString:(id)arg1 atPosition:(int)arg2 ;
-(NSString *)firstStringValue;
-(void)bindStringCopy:(id)arg1 atPosition:(int)arg2 ;
-(void)bindNumber:(id)arg1 atPosition:(int)arg2 ;
-(void)bindDataCopy:(id)arg1 atPosition:(int)arg2 ;
-(void)bindInt64:(long long)arg1 atPosition:(int)arg2 ;
-(int)clearBindings;
-(id)initWithStatement:(id)arg1 ;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
@end
