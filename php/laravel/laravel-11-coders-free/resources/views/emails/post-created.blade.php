<x-mail::message>
# Email for aprove
<x-mail::panel>Post created</x-mail::panel>

<x-mail::button :url="route('posts.show', $post)" color="success">Click for approve</x-mail::button>

</x-mail::message>