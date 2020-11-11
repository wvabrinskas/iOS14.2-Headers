/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
@class NSString, NSObject;

@interface NSFileProviderService : NSObject {

	NSString* _name;
	id _endpointCreatingProxy;
	NSObject*<OS_dispatch_group> _requestFinishedGroup;

}

@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)initWithName:(id)arg1 endpointCreatingProxy:(id)arg2 requestFinishedGroup:(id)arg3 ;
-(void)getFileProviderConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fetchFileProviderConnectionAndReturnError:(id*)arg1 ;
-(NSString *)name;
-(void)dealloc;
@end
