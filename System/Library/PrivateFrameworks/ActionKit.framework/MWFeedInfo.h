/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface MWFeedInfo : NSObject <NSCoding> {

	NSString* title;
	NSString* link;
	NSString* summary;
	NSURL* url;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * link; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,copy) NSURL * url; 
-(NSString *)summary;
-(NSString *)link;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)description;
-(NSString *)title;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLink:(NSString *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
@end

