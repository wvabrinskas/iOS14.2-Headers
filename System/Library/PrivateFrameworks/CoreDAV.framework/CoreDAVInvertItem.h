/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem {

	CoreDAVPrincipalItem* _principal;

}

@property (nonatomic,retain) CoreDAVPrincipalItem * principal;              //@synthesize principal=_principal - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(void)setPrincipal:(CoreDAVPrincipalItem *)arg1 ;
-(CoreDAVPrincipalItem *)principal;
-(void)write:(id)arg1 ;
@end
