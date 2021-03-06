/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CCAsyncOperation.h>

@class CCVegaRenderer, NSString;

@interface CCVegaSignalUpdateAsyncOperation : NSObject <CCAsyncOperation> {

	CCVegaRenderer* _renderer;
	NSString* _name;
	id _value;

}

@property (assign,nonatomic,__weak) CCVegaRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id value;                                      //@synthesize value=_value - In the implementation block
-(CCVegaRenderer *)renderer;
-(NSString *)name;
-(void)setRenderer:(CCVegaRenderer *)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)performOperationWithCallback:(/*^block*/id)arg1 ;
@end

