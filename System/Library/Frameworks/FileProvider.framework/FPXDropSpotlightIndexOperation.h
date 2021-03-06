/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPOperation.h>

@class CSSearchableIndex, NSString, FPXDomainContext;

@interface FPXDropSpotlightIndexOperation : FPOperation {

	CSSearchableIndex* _index;
	NSString* _reason;
	NSString* _domainID;
	FPXDomainContext* _domainContext;

}
+(void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:(id)arg1 index:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)main;
-(id)operationDescription;
-(id)initWithIndex:(id)arg1 context:(id)arg2 domainID:(id)arg3 reason:(id)arg4 ;
@end

