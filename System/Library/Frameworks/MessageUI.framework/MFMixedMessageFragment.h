/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData, NSURL;

@interface MFMixedMessageFragment : NSObject {

	NSString* _markupString;
	NSData* _markupData;
	NSString* _mimeType;
	NSString* _textEncodingName;
	NSURL* _baseURL;

}
-(id)baseURL;
-(id)encodingName;
-(id)initWithMarkupString:(id)arg1 baseURL:(id)arg2 ;
-(id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3 ;
-(id)description;
-(id)markupString;
-(id)mimeType;
-(id)markupData;
@end
