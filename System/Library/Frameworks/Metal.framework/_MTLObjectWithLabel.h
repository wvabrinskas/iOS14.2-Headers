/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Metal/Metal-Structs.h>
@class NSString;

@interface _MTLObjectWithLabel : NSObject {

	NSString* _label;
	os_unfair_lock_s _labelLock;

}

@property (copy) NSString * label; 
-(NSString *)label;
-(id)init;
-(void)setLabel:(NSString *)arg1 ;
-(id)retainedLabel;
-(void)dealloc;
@end
