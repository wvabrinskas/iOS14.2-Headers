/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SCRCArgumentHolder : NSObject {

	BOOL _required;
	NSString* _option;
	NSString* _argument;
	NSString* _argumentDescription;
	id _target;
	SEL _action;

}

@property (nonatomic,copy,readonly) NSString * option;                           //@synthesize option=_option - In the implementation block
@property (nonatomic,copy) NSString * argument;                                  //@synthesize argument=_argument - In the implementation block
@property (nonatomic,copy,readonly) NSString * argumentDescription;              //@synthesize argumentDescription=_argumentDescription - In the implementation block
@property (nonatomic,__weak,readonly) id target;                                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                                       //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL required;                                    //@synthesize required=_required - In the implementation block
-(id)target;
-(NSString *)argument;
-(id)init;
-(BOOL)process;
-(NSString *)option;
-(BOOL)required;
-(long long)compare:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SEL)action;
-(void)setArgument:(NSString *)arg1 ;
-(id)initWithArgument:(id)arg1 option:(id)arg2 description:(id)arg3 target:(id)arg4 action:(SEL)arg5 required:(BOOL)arg6 ;
-(NSString *)argumentDescription;
@end
