/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ML3DatabaseFunction : NSObject {

	int _argumentCount;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int argumentCount;              //@synthesize argumentCount=_argumentCount - In the implementation block
-(NSString *)name;
-(void)setArgumentCount:(int)arg1 ;
-(BOOL)registerWithConnection:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 argumentCount:(int)arg2 ;
-(int)argumentCount;
@end

