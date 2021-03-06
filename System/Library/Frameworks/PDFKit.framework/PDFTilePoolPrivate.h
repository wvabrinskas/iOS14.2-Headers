/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <PDFKit/PDFKit-Structs.h>
@class NSObject, NSMutableDictionary;

@interface PDFTilePoolPrivate : NSObject {

	NSObject*<OS_dispatch_queue> workQueue;
	os_unfair_lock_s surfacesLock;
	NSMutableDictionary* surfaces;
	int surfaceType;

}
@end

